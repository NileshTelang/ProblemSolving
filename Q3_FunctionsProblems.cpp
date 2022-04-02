#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
	
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
		
	}
	return true;
	
}

void  fib(int n){		//can write int fib()  also.
	int T1=3;
	int T2=7;
	int nextTerm;
	
	for(int i=1;i<=n;i++){
		cout<<T1<<" ";
		nextTerm=T1+T2;
		T1=T2;
		T2=nextTerm;
		
	}
	return;
}

int fact(int r){
	int factorial=1;
	
	for(int i=2;i<=r;i++){
		factorial*=i;
	}
	return factorial;
	
}

int facto(int k){
	int factorial=1;
	
	for(int i=2;i<=k;i++){
		factorial*=i;
	}
	return factorial;
	
}
int fac(int q){
	int factorial=1;
	
	for(int i=2;i<=q;i++){
		factorial*=i;
	}
	return factorial;
	
}

int main()
{
	cout<<"Prime Nums between given nums : \n";
	int a,b;
	cin>>a>>b;
	cout<<endl; 
	
	for(int i=a;i<=b;i++){
		if(isPrime(i) && i!=1){
			cout<<i<<endl;
		}
	}
	
	cout<<"Fibenacci Sequence : \n";
	
	int n;
	cin>>n;
	
	fib(n);
	
	cout<<endl;
	
	cout<<"Factorials of a given Number \n";
	
	int r;
	cin>>r;
	
	int ans = fact(r);
	cout<<"The Factorials : \n"<<ans<<endl;
	
	cout<<endl;
	
	cout<<"Calculate nCr : \n";
	
	int k,t;
	cin>>k>>t;
	
	int answ = facto(k)/(facto(t)*facto(k-t));
	cout<<answ<<" ";
	cout<<endl;
	
	cout<<"Pascal Triangle : \n";
	int q;
	cin>>q;
	
	for(int i=0;i<q;i++){
		for(int j=0;j<=i;j++){
			cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
		}
		cout<<endl;
		
	}
	cout<<endl;
	
	return 0;
}
