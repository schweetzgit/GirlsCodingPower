#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
   
    while(getline(cin,words)){
         int count = 0;
         for(int i = 0; i < words.size(); i++){
            if(((words[i]>='a' and words[i]<='z') or (words[i]>='A' and words[i]<='Z')) and (words[i+1]<'a' or words[i+1]>'z') and (words[i+1]<'A' or words[i+1]>'Z')){
                count++;
            }
         }
         cout<<count<<endl;
    }
  return 0;
}
