/*5.15. Напечатать таблицу умножения на число n (значение n вводится с клавиатуры; 1<=n<=9). */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=0;
    cin>>n;
    for(i=1; i<=9; i++){
    cout<<i<<" x "<<n<<" = "<<i*n<<endl;
    }
}