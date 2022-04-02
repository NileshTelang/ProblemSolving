#include <iostream>
using namespace std;

int main(){
	
	cout<<"Palindromic Pattern : \n";
	int o;
	cin>>o;
	for(int i=1;i<=o;i++){
		int j;
		for(j=1;j<=o-i;j++){
			
			cout<<"  ";
			
		}
		int r=i;
		for(;j<=o;j++){
			cout<<r--<<" ";
		}
		r=2;
		for(;j<=o+i-1;j++){
			cout<<r++<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	cout<<"Number Pattern : \n";
	int k;
	cin>>k;
	
	for(int i=1;i<=k;i++){
		for(int j=1;j<=k-i;j++){
			
			cout<<" ";
			
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		
		cout<<endl;
	}
	cout<<endl;
	
	
	cout<<"Inverted Pattern : \n";
	int n;
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			
			cout<<j<<" ";
			
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"0 - 1 Pattern  :  \n";
	int y;
	cin>>y;
	
	for(int i=1;i<=y;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<" 1";
			}
			else{
				cout<<" 0";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Rhombus Pattern : \n";
	
	int T;
	cin>>T;
	
	for(int i=1;i<=T;i++){
		for(int j=1;j<=T-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=T;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	return 0;
	
}
