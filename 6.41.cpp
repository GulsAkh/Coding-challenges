/*6.41. Дано натуральное число.
а) Определить две его максимальные цифры. 
б) Определить две его минимальные цифры.*/

//A
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, maX1=0, maX2=0;
    cin>>n;
    maX1=n%10;
    n /=10;
    while(n != 0){
        if(n%10 > maX1){
            maX2 = maX1;
            maX1 = n%10;
        }
        if(n%10 < maX1 && n%10 > maX2){
            maX2 = n%10;
        }
    n/=10;
    }
    cout<<"max1:"<<maX1<<endl;
    cout<<"max2:"<<maX2;
}

//Б
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, miN1=0, miN2=1;
    cin>>n;
    miN1=n%10;
    n /=10;
    miN2=n%10;
    while(n != 0){
        if(n%10 < miN1){
            miN2 = miN1;
            miN1 = n%10;
        }
        if(n%10 > miN1 && n%10 <= miN2){
            miN2 = n%10;
        }
    n/=10;
    }
    cout<<"min1:"<<miN1<<endl;
    cout<<"min2:"<<miN2;
}