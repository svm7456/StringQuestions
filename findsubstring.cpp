
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k,j,c=-1;
    string s="dogcatdog";
    int l=s.length();
    string a="dog";
    int b=a.length();
    for(int i=0;i<l-b;i++){
       for(j=0;j<b;j++){
           if(s[i+j]!=a[j]){
               break;
           }
       }
       if(j==b){
         c=i;
      }
    }
    if(c==-1){
        cout<<"string is not present in another string ";
    }
    else
    {
        cout<<"string is present \n";
    }
    

    return 0;
}
