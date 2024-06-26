#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int secuencia[3000];
bool numeros[3000];
int main(){
    int n,diferencia,a,b;
    bool jolly;
    while(cin>>n){
        jolly=true;
        for(int i=0;i<n;i++)
        {
            cin>>secuencia[i];
        }
        for(int i=0;i<n-1;i++)
        {
            diferencia=abs(secuencia[i]-secuencia[i+1]);
            numeros[diferencia]=true;
        }
        for(int i=1;i<n and jolly;i++){
            if(numeros[i]==false)
                jolly=false;
        }

        if(jolly){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
        memset(numeros,0,sizeof(numeros));    
        memset(secuencia,0,sizeof(secuencia));    
    }
    return 0;
}