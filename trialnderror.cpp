#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/



int main() {
    char arr[20];
    int i;
    for(i=0;i<10;i++)
     *(arr+i)=65+i;
     *(arr+i)='\0';
    
    cout<<arr;

    
    return 0;
}
