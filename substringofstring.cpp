#include <iostream>
#include<string>
using namespace std;
int main()
{
  string str = "geeksforgeeks a computer science";
  string a="geeks";
  int index=0;
  while(index<str.length()){
    size_t found = str.find(a,index);
    if(found != string::npos){
        cout << "First occurrence is " <<
        found << endl;
        index =found + 1;
    }
    else
    {
       break;
    }
    
 }

    return 0;
