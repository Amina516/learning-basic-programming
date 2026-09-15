#include <iostream>
using namespace std;
long long fact(int n)
{ long long f=1;
for(int i=1;i<=n;i++)
f=f*i;
return f;
}
   
long long nCr(int n ,int r)
    {   return fact(n)/(fact(r)*fact(n-r));
         }   
int main()
{   int n,r;
cout<<"Enter n and r:"<<endl;
cin>>n>>r;
cout<<"nCr="<<nCr(n,r)<<endl;

return 0;
}