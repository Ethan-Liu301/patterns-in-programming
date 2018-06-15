/*
1
23
456
78910
*/
#include<iostream>
using namespace std;
int main(){
int n,val=1;
cout<<"Enter the number :";
cin>>n;
for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
cout<<val;
val=val+1;}
cout<<endl;
}



return 0;
}
