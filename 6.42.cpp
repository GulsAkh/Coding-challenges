
/*6.42. Дано натуральное число, в котором все цифры различны. 
Определить: 
а) порядковые номера двух его максимальных цифр, считая номера:
от конца числа;
от начала числа;
б) порядковые номера двух его минимальных цифр, считая номера:
от конца числа; 
от начала числа.*/

//A два мин цифр от конца числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, miN1=0, miN2=0, id_miN1=1, id_miN2=1, i=1;
    cin>>n;
    miN1=n%10;
    n /=10;
    miN2=n%10;
    while(n != 0){
        if(n%10 < miN1){
            miN2 = miN1;
            miN1 = n%10;
            id_miN2 = id_miN1;
            id_miN1 = i+1;
            
        }
        if(n%10 > miN1 && n%10 <= miN2){
            miN2 = n%10;
            id_miN2 = i+1;
            
        }
        if(miN1 == miN2){
            id_miN2 = i+1;
        }
    n/=10;
    i++;

    }
    cout<<"min1:"<<miN1<<","<<"id-"<<id_miN1<<endl;
    cout<<"min2:"<<miN2<<","<<"id-"<<id_miN2;
}
//A два мин цифр от начала числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, x=0, miN1=0, miN2=0, id_miN1=1, id_miN2=1, i=1, count=1;
    cin>>n;
    x = n;
    while(x != 0){
        x/=10;
        i*=10;
    }
    i = i/10;
    //1000
    miN1 = (n/i)%10;
    //2
    i/=10;
    miN2 = (n/i)%10;
    while(i != 0){ 
         if((n/i)%10 >= miN1 && (n/i)%10 <= miN2){
            //0>=2 -- 2>=0 && 2 <= 2
            miN2 = (n/i)%10;
           //min2=2
            id_miN2 = count+1;
            //id2=3
            }
        if((n/i)%10 < miN1){
            //0<2
            miN2 = miN1;
            //min2=2
            miN1 = (n/i)%10;
            //min1=0
            id_miN2 = id_miN1;
            //1
            id_miN1 = count+1;
            //2
        }
       
    i/=10;
    count++;
    }
    cout<<"min1:"<<miN1<<","<<"id-"<<id_miN1<<endl;
    cout<<"min2:"<<miN2<<","<<"id-"<<id_miN2;
}
//202

//Б два макс цифр от начала числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, x=0, num=0, maX1=0, maX2=0, id_maX1=1, id_maX2=1, i=1, count=1;
    cin>>n;
    x = n;
    while(x != 0){
        x/=10;
        num++;
        i*=10;
    }
    i = i/10;
    maX1 = (n/i)%10;
    //2
    i/=10;
    maX2 = (n/i)%10;
    //6
    while(i != 0){
        if((n/i)%10 > maX1){
            //6>2 4>6 7>6
            maX2 = maX1;
            //max2=2 6
            maX1 = (n/i)%10;
            //max1=6 7
            id_maX2 = id_maX1;
            //id_max2=1 2
            id_maX1 = count+1;
            //id_max1=2 4
            
        }
        if((n/i)%10 < maX1 && (n/i)%10 >= maX2){
            //4<6 && 4>2
            maX2 = (n/i)%10;
            //max2=4
            id_maX2 = count+1;
            //3
        }
        if(maX1 == maX2){
            id_maX2 = count+1;
        }
    i/=10;
    count++;
    }
    cout<<"max1:"<<maX1<<","<<"id-"<<id_maX1<<endl;
    cout<<"max2:"<<maX2<<","<<"id-"<<id_maX2;
}
//2647

//Б два макс цифр от конца числа
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, x=0, num=0, maX1=0, maX2=0, id_maX1=0, id_maX2=0, i=1;
    cin>>n;
    x = n;
    while(x != 0){
        x/=10;
        num++;
        i*=10;
    }
    i = i/10;
    maX1 = (n/i)%10;
    i/=10;
    maX2 = (n/i)%10;
    id_maX1 = num;
    id_maX2 = num;
    while(i != 0){
        if((n/i)%10 > maX1){
            maX2 = maX1;
            maX1 = (n/i)%10;
            id_maX2 = id_maX1;
            id_maX1 = num-1;
        }
        if((n/i)%10 < maX1 && (n/i)%10 >= maX2){
            maX2 = (n/i)%10;
            id_maX2 = num-1;
        }
        if(maX1 == maX2){
            id_maX2 = num-1;
        }
        if((n/i)%10 == maX1){
            id_maX1 = num-1;
        }
    i/=10;
    num--;
    }
    cout<<"max1:"<<maX1<<","<<"id-"<<id_maX1<<endl;
    cout<<"max2:"<<maX2<<","<<"id-"<<id_maX2;
}
//656

//Another option with pow()

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0, x=0, num=0, a=0;
    cin>>n;
    num = n;
    while(num ){
        x++;
        num/=10;
    }
    cout<<n%10;
    int i =2;
    while(i != x){ 
           cout<<num/pow(10, x-i)%10;
           i++;
       }
    }
    cout<<n/pow(10, x-1);
}
