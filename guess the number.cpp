#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int MAX,number,num,i=0;
    cout<<"Quanto può essere grande il numero ?"<<endl;
    cin>>MAX;
    number = rand()%MAX;
    while(num!=number){
        i++;
        cout<<"Inserisci il numero da provare: ";
        cin>>num;
        if(num<number){
            cout<<"Il numero inserito \212 troppo piccolo"<<endl;
        }
        if(num>number){
            cout<<"Il numero inserito \212 troppo grande"<<endl;
        }
        if(num==number){
            cout<<"Hai indovinato in "<<i<<" tentativi"<<endl;
        }
    }
    return 0;
}