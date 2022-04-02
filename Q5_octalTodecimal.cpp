#include <iostream>
#include <math.h>
using namespace std;

int octalTodecimal(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=8;
		n/=10;
	}
	return ans;
}


int main(){
	cout<<"octalTodecimal : \n";
	int n;
	cin>>n;
	cout<<endl;
	cout<<octalTodecimal(n)<<endl;	
	
	return 0;
}
