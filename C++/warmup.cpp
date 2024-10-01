#include <iostream> 
#include <cmath>
using namespace std; 

bool isAmstrong( int n ) { 
	int remainder, amstrong = 0, original = n; 
	while ( n != 0 ) { 
		remainder = n % 10; 
		amstrong = amstrong + pow(remainder,3);
		n /= 10;
	}
	
	if ( original == amstrong ) { 
		return true;
	}
	else { 
		return false; 
	}
}

int main() { 
	int num; 
	cout<<"Enter a number: "; 
	cin>>num;
	
	cout<<"The Amstrong number from 1 to "<<num<<" is: "<<endl;
	for ( int i = 1; i<= num ; i++ ){
		if ( isAmstrong(i)){
			cout<<i<<endl;
		}
	}
}