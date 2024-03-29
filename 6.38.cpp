/*6.38. Дано натуральное число. Определить, 
сколько раз в нем встречается первая цифра.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 0, n=0, num=0, x=0;
    cin>>n;
    x = n;
    while(n != 0){
    num = n%10;
    n/=10;
    }
    while(x != 0){
        if(num == x%10){
            i++;
        }
    x /=10;
    }
    cout<<i;
}

//5 6 7 5 8