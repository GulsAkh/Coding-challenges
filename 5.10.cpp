/*5.10. Напечатать таблицу перевода 1, 2, ... 20 долларов США в рубли 
по текущему курсу (значение курса вводится с клавиатуры).*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
float n=0, i=0;
cin>>n;
    for(i=1;i<=20;i++){
        cout<<i<<"USA="<<i*n<<"tg"<<endl;
    }
}