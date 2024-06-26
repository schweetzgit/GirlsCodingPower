#include<stdio.h>
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

typedef long long int64;

int main(){
    string number;

    while(cin>>number){


        if(number=="0")    break;

        int len = number.length(), i;

        long long int sum=0;

        for(i=0; i<len; i++){

                 if(i%2 == 0)
                    sum += (number[i]-'0');
                 else
                    sum -= (number[i]-'0');
            //cout<<i<< " number: "<<number[i]<<" -'0' = "<<number[i]-'0'<<endl;
        }
        //cout<<"suma "<<sum<<endl;

        if(sum < 0)
               sum *= -1;

        if(sum%11 == 0)
            cout<<number<<" is a multiple of 11.\n";
        else
            cout<<number<<" is not a multiple of 11.\n";
    }

    return 0;

}
