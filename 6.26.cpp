/*6.26. Дано натуральное число.
а) Определить его максимальную цифру. 
б) Определить его минимальную цифру.*/


//A)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, max=0;
    cin>>n;
    max = n%10;
    n /=10;
    while(n != 0){
        if(n%10 > max){
            max = n%10;
        }
    n /=10;
    }
    cout<<max;
}

//Б)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, min=0;
    cin>>n;
    min = n%10;
    n /=10;
    while(n != 0){
        if(n%10 < min){
            min = n%10;
        }
    n /=10;
    }
    cout<<min;
}
