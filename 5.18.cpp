/*5.18. Рассчитать значения z для значений a, равных 2, 3, ..., 17:
z=3,5t*2-7t+16,
t=4a. */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int a=0;
double z, t;
    for(a = 2; a <=17; a++){
        t = 4*a;
        z = (3.5*(t*t) - (7*t)) + 16;
        cout << "z = " << z << endl;
    }
}