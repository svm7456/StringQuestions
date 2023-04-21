bool SortString(string a){
  int i=0;
  int j=a.length()-1;
  while(i<j){
     if(a[i]!=a[j]){
        return false;
     } 
      i++;
      j--;
   }
    return true;
}


int main()
{
   string s;
   cout<<" please enter a name\n";
   getline(cin,s);
   bool b=SortString(s);
   if(b==true){
       cout<<" string is pallindrome \n";
   }
   else
   {
       cout<<" string is not pallindrome \n";
   }

    return 0;
}
