#include <iostream>
#include <cmath>

using namespace std;

int main() {
int birth_year, birth_month, birth_day;
int today_year, today_month, today_day;
cin>>birth_year>>birth_month>>birth_day>>today_year>>today_month>>today_day;

    if(today_month > birth_month){
        cout<<today_year-birth_year<<" years"<<" and "<<today_month-birth_month<<" months";
    } else if(today_month < birth_month){
        cout<<today_year-1-birth_year<<" years"<<" and "<<12-birth_month+today_month<<" months";
    }
}