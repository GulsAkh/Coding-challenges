/*6.34. Найти 15 первых натуральных чисел, делящихся нацело на 19 
и находящихся в интервале, левая граница которого равна 100.*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=100, i=0;
    while(i != 15){
        if(n%19 == 0){
        cout<<n<<endl;
        i++;
        }
    n++;
    }
}  
