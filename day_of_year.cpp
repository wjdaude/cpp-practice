#include <iostream>
using namespace std;
int main(){
int month, day;
int day_count;

cin >> month >> day;
switch(month){
    case 1: 
    day_count=0;
    break;
    case 2: 
     day_count=31;
     break;
    case 3: 
     day_count=31+28;
     break;
    case 4: 
    day_count=31+28+31;
    break;
    case 5:
     day_count=31+28+31+30;
     break;
    case 6:
     day_count=31+28+31+30+31;
     break;
    case 7:
     day_count=31+28+31+30+31+30;
     break;
    case 8:
     day_count=31+28+31+30+31+30+31;
     break;
    case 9:
     day_count=31+28+31+30+31+30+31+31;
     break;
    case 10:
     day_count=31+28+31+30+31+30+31+31+30;
     break;
    case 11:
     day_count=31+28+31+30+31+30+31+31+30+31;
     break;
    case 12:
     day_count=31+28+31+30+31+30+31+31+30+31+30;
     break;
    }
    cout << day_count+day;
}