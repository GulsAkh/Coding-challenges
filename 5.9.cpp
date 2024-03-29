/*5.9. Напечатать таблицу перевода расстояний в дюймах в сантиметры 
для значений 10, 11, ..., 22 дюйма (1 дюйм = 25,4 мм).*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0;

    for(i=1;i<=22;i++){
        if(i==1){
        cout<<i<<"inch="<<i*25.4<<"mm"<<endl;
        } else {
        cout<<i<<"inches="<<i*25.4<<"mm"<<endl;
        }
    }
}