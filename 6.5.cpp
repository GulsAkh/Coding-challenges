/*Дана последовательность целых чисел a , a , ..., a , в начале которой запи- 12 18
сано несколько равных между собой элементов. 
Определить количество таких элементов последовательности. Условный оператор не использовать.*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 0, n = 0, j = 1, sum = 0;
    cin>>i;
    while(j <= 18){
    n = i; 
    cin>>i; 
    sum += (i == n);
    j++;
    }
    cout<<sum<<" ";  
}  