#include <iostream>
using namespace std;

int somma(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    int a,b,s;
    cout << "Inserisci a: "<< endl;
    cin>>a;
    cout << "Inserisci b: "<< endl;
    cin>>b;
    s = somma(a,b);
    cout << "La somma e': "<< s<<endl;
     system("pause"); // Pausa fino a quando premi un tasto
    return 0;
  
}