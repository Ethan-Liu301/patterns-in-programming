// Pattern1
/*
n=5
     1
    232
   34543
  4567654
 567898765
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the value :";
	cin>>n;

	int i=1;

	while(i<=n){

		int j=1;

		while(j<=n-i){
			cout<<" ";
			j=j+1;
		}

		int val=i;

		j=1;
		while(j<=i){
			cout<<val;
			val++;
			j++;
		}

		val=val-2;
		j=1;
		while(j<=i-1){
			cout<<val;
			val--;
			j++;
		}

		cout<<'\n';

		i=i+1;
	}



	return 0;
}
