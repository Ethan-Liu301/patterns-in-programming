#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1,k=n;j<=i;j++,k--)
cout<<k<<" ";
for(int j=1;j<=2*(n-i+1)-1;j++)
cout<<"  ";
for(int j=1,k=n-i+1;j<=i;j++,k++)
cout<<k<<" ";
cout<<endl;
}

for(int i=n;i>=0;i--)
cout<<i<<" ";
for(int i=1;i<=n;i++)
cout<<i<<" ";
cout<<endl;

for(int i=1;i<=n;i++){
for(int j=1,k=n;j<=n-i+1;j++,k--)
cout<<k<<" ";
for(int j=1;j<=2*i-1;j++)
cout<<"  ";
for(int j=1,k=i;j<=n-i+1;j++,k++)
cout<<k<<" ";


cout<<endl;
}


return 0;
}
