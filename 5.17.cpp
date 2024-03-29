/*5.17. Рассчитать значения y для значений х, равных 4, 5, ..., 28:
y=2t^2+5,5t-2, 
t=x+2. */

#include <iostream>
#include <cmath>

using namespace std;

    int main(){
    double y, x, t=0;
    for(x=4; x<=28;x++){
        t = x + 2;
        y = (2*(t*t) + (5.5*t)) - 2;
        cout<<"y = "<<y<<endl;
    }
    
}