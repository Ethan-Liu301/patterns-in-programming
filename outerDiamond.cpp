/*
n=4
*******
*** ***
**   **
*     *
**   **
*** ***
*******
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value :";
cin>>n;
for(int i=1;i<=4;i++){
for(int j=n-i+1;j>=1;j--){
cout<<"*";
}
for(int j=1;j<=i-1;j++) cout<<" ";
for(int j=1;j<=i-1;j++) cout<<" ";
for(int j=n;j>=i;j--) cout<<"*";
cout<<endl;
}
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
cout<<"*";
}
for(int j=n-i+1;j>=2;j--) cout<<" ";
for(int j=n-i;j>=1;j--) cout<<" ";
for(int j=1;j<=i;j++) cout<<"*";

cout<<endl;
}


return 0;
}
