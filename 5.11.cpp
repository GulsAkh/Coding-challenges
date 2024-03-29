/*5.11. Считая, что Земля — идеальная сфера с радиусом R   6350 км, 
определить расстояние до линии горизонта от точки с высотой над Землей, 
равной 1, 2, ... 10 км.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int i=0,h=0; 
double R =R=6350;
    for(h=1;h<=10;h++){
        cout<<sqrt(pow(R+h,2)- pow(R,2))<<endl;
    }
}
//sqrt(h*(2*R+h) - another option
//https://book.etudes.ru/articles/skyline/
//pow(int, int) / pow(double, int) / pow(double,double) ???