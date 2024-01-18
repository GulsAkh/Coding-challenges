/*6.32. Дано натуральное число. Определить, сколько раз в нем встречается минимальная цифра 
(например, для числа для числа 102 200 ответ равен 3, для числа 40 330 — 2, для числа 10 345 — 1).
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 1, n=0, miN=0;
    //if you assign miN = 9, no need miN = n%10
    cin>>n;
    miN = n%10;
    n /= 10;
    while(n != 0){
        if(n%10 == miN){
         i++;
        }
        if(n%10 < miN){
           miN = n%10;
           i = 1;
        }
    n /= 10;
    }
    //1022 102 10 1
    cout<<i;
}  
//5577
//102200
