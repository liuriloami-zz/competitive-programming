#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

typedef struct {
    int x, y, id;
    map<int,int> products;
    map<int,vector<int> > orders;
} Warehouse;

typedef struct {
    int x, y;
    vector<int> products;
} Order;

typedef struct {
    char type;
    int id, prod, qtd;
    int x, y, t;
} Cmd;

typedef struct {
    int x, y, t;
    queue<Cmd> cmds;
} Drone;

int rows, cols, nDrones, maxTime, maxLoad;
int nProducts, nWarehouses, nOrders;
vector<int> products;
vector<Warehouse> warehouses;
vector<Order> orders;
vector<Drone> drones;
Order currentOrder;
vector<string> out;

void printCmd(int drone, Cmd cmd) {
    string str = to_string(drone) + " " + cmd.type + " " + to_string(cmd.id) + " " + to_string(cmd.prod) + " " + to_string(cmd.qtd) + " \n";
    out.push_back(str);
}

bool sortId(Warehouse a, Warehouse b) {
    return a.id < b.id;
}

void delivery() {
    Cmd cmd;
    sort(warehouses.begin(), warehouses.end(), sortId);
    
    //Creating drones
    Drone drone;
    drone.x = warehouses[0].x;
    drone.y = warehouses[0].y;
    drone.t = 0;
    for (int i = 0; i < nDrones; i++)
        drones.push_back(drone);

    //Time loop
    int currentWarehouse = 0, t = 0;
    while (currentWarehouse < nWarehouses && t < maxTime) {
        for (int d = 0; d < drones.size(); d++) {
            if (drones[d].t == 0) {
                if (drones[d].cmds.size() != 0) {
                    Cmd cmd = drones[d].cmds.front();
                    printCmd(d, cmd);
                    drones[d].t = cmd.t;
                    drones[d].cmds.pop();
                } else {
                    int weight = 0, orderIdx = 0, productIdx = 0;
                    while (weight < maxLoad && orderIdx < warehouses[currentWarehouse].orders.size() && currentWarehouse < nWarehouses) {
                        vector<int> *order = &warehouses[currentWarehouse].orders[orderIdx];
                        
                        if (productIdx == order->size()) {
                            productIdx = 0;
                            orderIdx++;
                            continue;
                        }
                        if (products[(*order)[productIdx]] <= maxLoad - weight) {
                            
                            cmd.t = hypot(abs(warehouses[currentWarehouse].x - drones[d].x), 
                                                abs(warehouses[currentWarehouse].y - drones[d].y));
                            
                            cmd.x = warehouses[currentWarehouse].x;
                            cmd.y = warehouses[currentWarehouse].y;
                            cmd.type = 'L';
                            cmd.id = warehouses[currentWarehouse].id;
                            cmd.prod = (*order)[productIdx];
                            cmd.qtd = 1;
                            
                            if (cmd.t == 0) 
                                printCmd(d, cmd);
                            else
                                drones[d].cmds.push(cmd);
                            
                            cmd.x = orders[orderIdx].x;
                            cmd.y = orders[orderIdx].y;
                            cmd.t = hypot(abs(warehouses[currentWarehouse].x - cmd.x), 
                                                abs(warehouses[currentWarehouse].y - cmd.y));
                            cmd.type = 'D';
                            cmd.id = orderIdx;
                            cmd.prod = (*order)[productIdx];
                            cmd.qtd = 1;
                            drones[d].cmds.push(cmd);
                           
                            weight += products[(*order)[productIdx]];
                            weight = maxLoad;
                            order->erase(order->begin() + productIdx);
                            productIdx--;
                        }
                        productIdx++;
                        
                        if (order->size() == 0) 
                            orderIdx++;
                    }
                    if (orderIdx == warehouses[currentWarehouse].orders.size())
                        currentWarehouse++;
                }
            } else drones[d].t--;
        }
        t++;
    }
}

void input() {
    int weight, p, id, qtd;
    Warehouse warehouse;
    Order order;
    
    cin >> rows >> cols >> nDrones >> maxTime >> maxLoad;
    cin >> nProducts;
    for (int i = 0; i < nProducts; i++) {
        cin >> weight;
        products.push_back(weight);
    }
    
    cin >> nWarehouses;
    for (int i = 0; i < nWarehouses; i++) {
        warehouse.products.clear();
        warehouse.id = i;
        cin >> warehouse.x >> warehouse.y;
        for (int j = 0; j < nProducts; j++) {
            cin >> qtd;
            warehouse.products[j] = qtd;
        }
        warehouses.push_back(warehouse);
    }
    
    cin >> nOrders;
    for (int i = 0; i < nOrders; i++) {
        order.products.clear();
        cin >> order.x >> order.y >> p;
        for (int j = 0; j < p; j++) {
            cin >> id;
            order.products.push_back(id);
        }
        orders.push_back(order);
    }
}

bool sortWarehouses (Warehouse a, Warehouse b) {
    int distA = hypot(abs(a.x - currentOrder.x), abs(a.y - currentOrder.y));
    int distB = hypot(abs(b.x - currentOrder.x), abs(b.y - currentOrder.y));
    return distA < distB;
}

void processOrigin() {
    for (int i = 0; i < orders.size(); i++) {
        currentOrder = orders[i];
        sort(warehouses.begin(), warehouses.end(), sortWarehouses);
        for (int j = 0; j < warehouses.size(); j++) { 
            for (int k = 0; k < orders[i].products.size(); k++) {
                int id = orders[i].products[k];
                if (warehouses[j].products[id] > 0) {
                    warehouses[j].products[id]--;
                    warehouses[j].orders[i].push_back(id);
                    orders[i].products.erase(orders[i].products.begin() + k);
                    k--;
                }
            }
        }
    }
}

void processOrder() {

}

int main (int argc, char** argv) {
    input();
    processOrigin();
    processOrder();
    delivery();
    
    cout << out.size() << endl;
    for (int i = 0; i < out.size(); i++)
        cout << out[i];
    return 0;
}
