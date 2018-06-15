//hour glass pattern
/*
54321012345
 432101234
  3210123
   21012
    101
     0
    101
   21012
  3210123
 432101234
54321012345
*/
#include<iostream>
using namespace std;
int main(){
int N=5;
for(int i=1;i<=N+1;i++){
for(int j=1;j<=i;j++){
cout<<" ";}
for(int j=N+1-i;j>=0;j--)
cout<<j;
for(int j=1;j<=N-i+1;j++)
cout<<j;
cout<<endl;
}
//     lower area
int val=1;
for(int i=1;i<=N;i++){
for(int j=N-i+1;j>=1;j--)
cout<<" ";
val=i;
for(int j=0;j<=i;j++){
cout<<val;
val=val-1;
}
for(int k=1;k<=i;k++){
cout<<k;
}

cout<<endl;
}
return 0;
}
