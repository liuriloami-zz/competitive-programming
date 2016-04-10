#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int day1, day2;
    int hour1, hour2;
    int min1, min2;
    int sec1, sec2;
 
    scanf("Dia %d", &day1);
    scanf("%d : %d : %d", &hour1, &min1, &sec1);
 
    scanf(" Dia %d", &day2);
    scanf("%d : %d : %d", &hour2, &min2, &sec2);
 
    int days = day2-day1;
    int hours = hour2-hour1;
    int minutes = min2-min1;
    int seconds = sec2-sec1;
 
    if (seconds < 0) {
        seconds += 60;
        minutes--;
    }
 
    if (minutes < 0) {
        minutes += 60;
        hours--;
    }
 
    if (hours < 0) {
        hours += 24;
        days--;
    }
 
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);
 
    return 0;
}
