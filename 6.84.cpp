

/*6.84. Дано натуральное число, в котором все цифры различны. 
Определить, какая цифра расположена в нем левее: максимальная или минимальная.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=1,n=0, maX=0, miN=0, id_miN=0, id_maX=0;
    cin>>n;
    maX=n%10;
    miN=n%10;
    n /=10;
    while(n != 0){
        if(n%10 < miN){
            maX = maX;
            miN = n%10;
            id_miN=i;
        }
        if(n%10 > maX){
            miN = miN;
            maX = n%10;
            id_maX=i;
        }
    i++;
    n/=10;
    }
    cout<<"max:"<<maX<<endl;
    cout<<"min:"<<miN<<endl;
    if(id_miN > id_maX){
        cout<<"min is left";
    } else {
        cout<<"max is left";
    }
    
}