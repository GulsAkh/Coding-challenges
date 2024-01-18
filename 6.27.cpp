/*6.27. Дано натуральное число.
а) Определить его максимальную и минимальную цифры.
б) Определить, на сколько его максимальная цифра превышает минимальную. 
в) Найти сумму его максимальной и минимальной цифр.*/

//A,Б,В
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, miN=0, maX=0, diff=0, sum=0;
    cin>>n;
    miN = n%10;
    maX = n%10;
    n /=10;
    while(n != 0){
        if(n%10 < miN){
            miN = n%10;
            maX = maX;
        }
        if(n%10 > maX){
            miN = miN;
            maX = n%10;
        }
    n /=10;
    }
    
    diff=maX-miN;
    sum = maX+miN;
    cout<<"max:"<<maX<<endl;
    cout<<"min:"<<miN<<endl;
    cout<<"difference:"<<diff<<endl;
    cout<<"sum:"<<sum;
}