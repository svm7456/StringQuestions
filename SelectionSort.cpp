int findMin(vector<int>& v,int index){
    int min=INT_MAX;
    int inde=-1;
    for(int i=index;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
            inde=i;
        }
    }
    return inde;
}

int main()
{
   int n;
   cout<<" please enter size of vector \n";
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
   }
   for(int i=0;i<v.size();i++){
       int index=findMin(v,i);
       int temp=v[i];
       v[i]=v[index];
       v[index]=temp;
   }
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
       
   }

    return 0;
