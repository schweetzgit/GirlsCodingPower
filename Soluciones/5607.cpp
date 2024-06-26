#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    int n,fila;
    string cliente;
    queue<string>fila1;
    stack<string>fila2;
    cin>>n;
    char evento;
    for(int i=0;i<n;i++){
        cin>>evento>>fila;
        if(evento=='E'){
            cin>>cliente;
            if(fila==1){
                fila1.push(cliente);
            }
            else{
                fila2.push(cliente);
            }
        }
        else{
            if(fila==1){
                cout<<fila1.front()<<endl;
                fila1.pop();
            }
            else{
                cout<<fila2.top()<<endl;
                fila2.pop();
            }
        }
    }
    return 0;
}