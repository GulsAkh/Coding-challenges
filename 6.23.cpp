
/* 6.23. Дано натуральное число. Определить:
а) сколько раз в нем встречается цифра а;
б) количество его цифр, кратных z (значение z вводится с клавиатуры; z 2, 3, 4);
в) сумму его цифр, больших a (значение a вводится с клавиатуры; 0   a   8);
г) сколько раз в нем встречаются цифры x и y.*/

//А)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=0, a=0;
    cin>>n>>a;
    while(n != 0){
        if(n%10 == a){
            i++;
        }
    n /= 10;
    }
   cout<<i;
}
//122 2 

//Б)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=0, z=0;
    cin>>n>>z;
    while(n != 0){
        i++;
    n /= 10;
    }
    if(i%z == 0){
        cout<<i;
    }
}

//В)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=0, a=0;
    cin>>n>>a;
    while(n != 0){
    i += n%10;
        if(i > a){
            cout<<i;
        }
    n /= 10;
    }
}

//Г)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i=0, n=0, x=0, y=0, m=0;
    cin>>n>>x>>y;
    while(n != 0){
        if(n%10 == x){
            i++;
        }
        if(n%10 == y){
            m++;
        }
    n /= 10;
    }
    cout<<i<<" "<<m;
}


