/*6.82. Дано натуральное число. Определить, является ли разность 
его максимальной и минимальной цифр четным числом.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, maX=0, miN=0;
    cin>>n;
    maX=n%10;
    miN=n%10;
    n /=10;
    while(n != 0){
        if(n%10 < miN){
            maX = maX;
            miN = n%10;
        }
        if(n%10 > maX){
            miN = miN;
            maX = n%10;
        }
    n/=10;
    }
    cout<<maX<<endl;
    cout<<miN<<endl;
    if(maX%2 == 1 && miN%2 == 1 || maX%2 == 0 && miN%2 == 0){
        cout<<"diff is even";
    } else {
        cout<<"diff is not even";
    }
}
//odd-odd=even
//odd-even=odd
//even-odd=odd
//even-even=even