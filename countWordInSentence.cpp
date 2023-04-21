int countword(string a){
    int count=0;
    bool prevspace=true;
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            prevspace=true;
        }
        else if(prevspace==true){
            count++;
            prevspace=false;
        }
    }
    return count;
}
int main()
{
   string s;
   getline(cin,s);
   int p=countword(s);
   cout<<" total words in sentences is : "<<p;
    return 0;
}
