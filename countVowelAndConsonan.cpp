/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
}
bool isConsonant(char c){
    if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!=' '){
        return true;
    }
    return false;

}
bool isSpace(char c){
    if(c==' '){
       return true; 
    }
    return false;
}
   
   
int main()
{    
    string s;
    // Input the string
    getline(cin,s);
    // Function for finding length of string
    int vowe=0;
    int conso=0;
    int space=0;
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(isVowel(ch)){
            vowe++;
        }
        else if(isConsonant(ch)){
            conso++;
        }
        else if(isSpace(ch)){
            space++;
        }
    }
    
    cout<<"total vowel is : "<<vowe<<" \n"<<"total consonant is : "<<conso<<"\n"<<"total space is : "<<space<<"\n";
    return 0;
}
