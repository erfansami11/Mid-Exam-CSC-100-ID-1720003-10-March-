#include <iostream>
#include <stdlib.h>
using namespace std;
int random_num(int, int);
int main() {
	int a, b;
	cout<<"Enter 1st Value : ";
	cin>>a;
	cout<<endl<<"Enter 2nd Value : ";
	cin>>b;
	for(int i=1; i<=10; i++) {
	    cout<<endl<<"New Random Value "<<i<<" : "<<random_num(a,b);
	}
return 0;
}

int random_num(int x, int y) {
    int newval;
    newval=rand()%y+x;
    return newval;
}
