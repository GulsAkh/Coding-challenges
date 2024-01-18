/*6.24. Дана непустая последовательность целых чисел, оканчивающаяся нулем.
Найти:
а) сумму всех чисел последовательности, больших числа x; 
б) количество всех четных чисел последовательности.*/

//A)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=1, x=0;
    cin>>x;
    while(n != 0){
    cin>>n;
        if(n > x){
            i += n;
        }
    }
    cout<<i;
}

//Б)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=1, x=0;
    while(n != 0){
    cin>>n;
        if(n%2 == 0){
            i++;
        }
    }
    cout<<i;
}
