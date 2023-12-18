Дано число n. Из чисел 1, 4, 9, 16, 25, ... напечатать те, которые не превыша-
ют n.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 1, n=0;
    cin>>n;
    while(i * i < n){
    cout<<i*i<<" ";
    i++;
    }
   
}