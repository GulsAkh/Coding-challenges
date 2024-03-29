/* 7.73. Дана последовательность целых чисел a1, a2, ..., ,an, где n >= 3. Найти:
а) два максимальных элемента последовательности;
б) два минимальных элемента последовательности.
В обеих задачах два цикла ввода данных не использовать.*/

#include <iostream>
#include <cmath>

using namespace std;
/* A)
int main() {
int i, a=0, n=0, maX1=1, maX2=2;

cin >> n;
cin >> a;
maX1 = a;
    for(i=1; i<n; i++) {
    cin >> a;
        if(a > maX1) {
            maX2 = maX1;
            maX1 = a;
        }
        if(a < maX1 && a > maX2){
            maX2 = a;
        }
    }
    cout << "max 1: " << maX1 << endl;
    cout << "max 2: " << maX2 << endl;
}
*/

/* Б)
int main() {
int i, a=0, n=0, miN1=0, miN2=1;
cin >> n;
cin >> a;
miN1 = a;
cin >> a;
miN2 = a;
   for(i = 2; i < n; i++) {
       if(miN1 > miN2){
            miN2 = miN1;
            miN1 = a;
        }
    cin >> a;
        if(a < miN1) {
            miN2 = miN1;
            miN1 = a;
        }
        if(a > miN1 && a <= miN2){
            miN2 = a;
        }
    }
    cout << "min 1: " << miN1 << endl;
    cout << "min 2: " << miN2 << endl;
}
*/

int main() {
int i, a=0, b=0, n=0, miN1=0, miN2=1;
cin >> n;
cin >> a;
cin >> b;
miN1 = min(a,b);
miN2 = max(a,b);
   for(i = 2; i < n; i++) {
    cin >> a;
        if(a < miN1) {
            miN2 = miN1; 
            miN1 = a;
        }
        if(a > miN1 && a <= miN2){
            miN2 = a;
        }
        
    }
    cout << "min 1: " << miN1 << endl;
    cout << "min 2: " << miN2 << endl;
}
