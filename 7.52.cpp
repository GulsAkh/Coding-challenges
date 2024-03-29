/* 7.52. Даны натуральное число n и вещественные числа 1 2 , , ..., . n x x x Найти:
а) максимальное из вещественных чисел;
б) минимальное из вещественных чисел;
в) максимальное и минимальное из вещественных чисел. */

#include <iostream>
#include <cmath>

using namespace std;


/*  A)
int main() {
int i=0, n=0;
float m=0, maX=0;
cin >> n;
    for( i = 1; i <= n; i++ ) {
        cin >> m;
        if(m > maX) {
            maX = m;
        }
    }
    cout << maX << endl;
    
}
*/

/* B)
int main() {
int i=0, n=0;
float m=0, miN=0;
cin >> n;
cin >> m;
miN = m;
    for (i = 1; i < n; i++) {
       cin >> m;
        if (m < miN) {
            miN = m;
        }
    }
    cout << miN << endl;
}

*/

// C)
int main() {
int i=0, n=0;
float m=0, miN=0, maX=0;
cin >> n;
cin >> m;
miN = m;
maX = m;
    for(i = 1; i < n; i++) {
        cin >> m;
        if(m > maX) {
            maX = m;
            miN = miN;
        } 
        if(m < miN) {
            miN = m;
            maX = maX;
        }
    }
    cout << "min: " << miN << endl;
    cout << "max: " << maX << endl;
}

