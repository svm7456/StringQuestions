string reverse(string a){
    int i=0;
    int j=a.length()-1;
    while(i<j){
      char temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i++;
      j--;
    }
    return a;
}

int main()
{
    string s;
    cout<<" please enter a sentences\n";
    getline(cin,s);
    string c=reverse(s);
    for(int i=0;i<c.length();i++){
        cout<<c[i];
    }
    
