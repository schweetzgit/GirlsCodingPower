#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int entero(string numero){
    int aux=0,tam=numero.length();
    for(int i=0;i<tam;i++){
        aux+=numero[i]-'0';//aux=aux+numero[i];
        if(i!=tam-1){
            aux*=10;//aux=aux*10;
        }
    }
    return aux;
}

float flotante(string numero){
    float auxf=0,auxf2=0;
    int tam_decimal=0,tam=numero.length();
    bool decimal=false;
    for(int i=0;i<tam;i++){
        if(!decimal and numero[i]!='.'){
            auxf+=numero[i]-'0';//aux=aux+numero[i];
            if(i!=tam-1 and numero[i+1]!='.'){
                auxf*=10;//aux=aux*10;
            } 
        }
        else{
            decimal=true;
            if(numero[i]!='.'){
                tam_decimal++;
                auxf2+=numero[i]-'0';//aux=aux+numero[i];
                if(i!=tam-1){
                    auxf2*=10;//aux=aux*10;
                }
            }
        }
    }
    auxf=auxf+(auxf2/pow(10,tam_decimal));
    return auxf;
}
int main(){
    string numero;
    int aux;
    float auxf;
    cout<<"Ingresa numero entero: "<<endl;
    cin>>numero;
    aux=entero(numero);
    cout<<aux<<endl;
    cout<<"Ingresa numero flotante: "<<endl;
    cin>>numero;
    auxf=flotante(numero);
    cout<<auxf<<endl;
    return 0;
}