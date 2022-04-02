
#include <iostream>
using namespace std;



int main(){
	
	
	cout<<"Rectangle : \n";
	
	int row, col;
	
	cin>>row>>col;
	
	
	
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			cout<<"*";
		}
		cout<<endl;
			
	
	}
	cout<<endl;
	
	cout<<"Hollow Rectangle : \n";
	
	int rows,cols;
	
	cin>>rows>>cols;
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			if( i==1 || i==rows || j==1 || j==cols){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
		
	cout<<endl;
	
	cout<<"Inverted Half Pyramid  : \n";
	
	int n;
	cin>>n;
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	cout<<endl;
	
	cout<<"Half pyramid after 180 Rotation : \n";
	
	int N;
	cin>>N;
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(j<=N-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
		
	}
	
	cout<<endl;
	
	cout<<"Half Pyramid using numbers : ]\n";
	
	int m;
	cin>>m;
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<i;
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Floyd's Triangle : \n";
	
	int k;
	cin>>k;
	int count=1;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count++;	
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	
	cout<<"Butterflt Pattern : \n";
	
	int ButterFly;
	cin>>ButterFly;
	
	for(int i=1;i<=ButterFly;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*ButterFly-2*i;
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i=ButterFly;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*ButterFly-2*i;
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	return 0;
}

