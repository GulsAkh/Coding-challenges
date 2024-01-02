
/*4.137. Даны целое число k (1 <= k <= 180) и последовательность цифр 10111213...9899,
в которой выписаны подряд все двузначные числа. Определить k-ю цифру.*/

int main() {
int k;
cin>>k;
    if(k%2 == 1) {
        if(k>=1 && k<20) {
            cout<<1;
        }else if(k >= 21 && k < 40){
                cout<<2;
        } else if(k >= 41 && k < 60) {
                cout<<3;
        } else if(k >= 61 && k < 80) {
                cout<<4;
        } else if(k >= 81 && k < 100) {
                cout<<5;
        } else if(k >= 101 && k < 120){
                cout<<6;
        }else if(k >= 121 && k < 140){
                cout<<7;
            }else if(k >= 141 && k < 160){
                cout<<8;
        }else if(k >= 161 && k < 180){
                cout<<9;
        }
    } else if (k%2 == 0) {
        if(k > 1 && k<=20) {
            cout<<k/2-1;
        }else if(k > 20 && k <= 40){
                cout<<k/2-11;
        } else if(k > 40 && k <= 60) {
                cout<<k/2-21;
        } else if(k > 60 && k <= 80) {
                cout<<k/2-31;
        } else if(k > 80 && k <= 100) {
                cout<<k/2-41;
        } else if(k > 100 && k <= 120){
                cout<<k/2-51;
        }else if(k > 120 && k <= 140){
                cout<<k/2-61;
            }else if(k > 140 && k <= 160){
                cout<<k/2-71;
        }else if(k > 160 && k <= 180){
                cout<<k/2-81;
        }
    }
}
