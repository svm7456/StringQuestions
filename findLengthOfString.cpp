#include <iostream>
using namespace std;
int getLength(string a){
    return a.length();
}
int main()
{
    string s;
    // Input the string
    getline(cin,s);
    // Function for finding length of string
    int p=getLength(s);
    
    cout<<p<<" ";
    return 0;
}
