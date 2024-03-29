/*5.8. Напечатать таблицу соответствия между весом в фунтах и весом 
в килограммах для значений 1, 2, ..., 10 фунтов (1 фунт = 453 г).*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int i=0;
    for(i=1;i<=10;i++){
        cout<<i<<"p = "<<i*453<<"g"<<endl;
    }
}