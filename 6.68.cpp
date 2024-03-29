/*6.68. Дана последовательность целых чисел, оканчивающаяся числом 9999. 
Количество чисел в последовательности не меньше двух. 
Определить, есть ли в ней хотя бы одна пара "соседних" четных чисел. 
В случае положительного ответа определить порядковые номера чисел первой из таких пар.*/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 1, n=0, num=0, id_num1=1, id_num2=0;
    cin>>n;
    while(n != 9999){
        num = n;
        cin>>n;
        if(num%2 == 0 && n%2 == 0){
            //5 6 6 8 8 8 
            id_num1 = i;
            //2 3
            if(id_num2 != id_num1){
                //0 != 2
                cout<<id_num1<<endl;
                //id 2
                 id_num2 = id_num1+1;
                 //3
                 cout<<id_num2<<endl;
                 //id = 3
            } else {
                id_num2 = id_num1+1;
                cout<<id_num2<<endl;
            }
        }
    i++;
    //2 3
    }
    
}

//option B
