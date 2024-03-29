/*5.7. Одна штука некоторого товара стоит 20,4 руб. 
Напечатать таблицу стоимости 2, 3, ..., 20 штук этого товара.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int i=0;
    for(i=1;i<=20;i++){
    cout<<i<<"pcs="<<i*20.4<<endl;
    }
}