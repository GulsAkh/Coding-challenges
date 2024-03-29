/* 5.16. Напечатать "столбиком" значения sin 2 , sin 3 , ..., sin 20 . */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

double i=0;

    for(i=2; i<=20;i++){
        cout<<"sin("<<i<<") = "<<sin(i)<<endl;
    }


}