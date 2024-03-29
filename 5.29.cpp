/*5.29. Найти:
а) среднее арифметическое всех целых чисел от 1 до 1000;*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a=0, i=0, sum=0;
    for(i=1; i<5; i++){
        sum+=i;
        //sum = 0+1=1
        //      1+2=3
        //      3+3=6
        //      6+4=10
        //      10+5=15
    }
    cout<<sum<<endl;
    cout<<i<<endl;
    cout<<sum/i-1<<endl;
    
}
//почему sum 10 а не 15 если i = 5
