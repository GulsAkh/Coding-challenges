/*4.125 Дано целое число n (1   n   99), определяющее возраст человека (в годах). 
Для этого числа напечатать фразу "мне n лет", учитывая, 
что при некоторых значениях n слово "лет" надо заменить на слово "год" или "года". */

int main() {
int g, m, n;
cin>>n;
    if(n >= 10 && n <= 19){
        cout<<"Mne "<<n <<" let";
    } else if(n%10 == 1){
        cout<<"Mne "<<n <<" god";
    } else if(n%10 == 2 || n%10 == 3 || n%10 == 4){
        cout<<"Mne "<<n <<" goda";
    } else {
        cout<<"Mne "<<n <<" let";
    }
}
