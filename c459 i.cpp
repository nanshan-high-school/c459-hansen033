#include <iostream>
using namespace std;
int main(){
	int fuck, in, p;
	while( cin >> fuck >> in ){
		int real, fact = 0, pp = 1;
		real = real + in % 10 + in % 100 / 10 * fuck + in % 1000 / 100 * fuck * fuck + in % 10000 / 1000 * fuck * fuck * fuck + in % 100000 / 10000 * fuck * fuck * fuck * fuck; //+ in % 1000000 / 100000 * fuck * fuck * fuck * fuck * fuck + in % 10000000 / 1000000 * fuck * fuck * fuck * fuck * fuck * fuck;
//		cout << "\ntest1(real:" << real;
		int times;
		if( in < 10 ){
			times = 1;
		} else if( in < 100 ){
			times = 2;
		} else if( in < 1000 ){
			times = 3;
		} else if( in < 10000 ){
			times = 4;
		} else{
			times = 5;
		}
//		cout << "\ntest2(times:" << times;
		for( int t = 0 ; t < times ; t ++ ){
			pp = pp * (in % 10);
		} 
		fact += pp;
		pp = 1;
//		cout << "\ntest1(fact1:" << fact;
		for( int t = 0 ; t < times ; t ++ ){
			pp = pp * (in % 100 / 10);
		} 
		fact += pp;
		pp = 1;
//		cout << "\ntest1(fact2:" << fact;
		for( int t = 0 ; t < times ; t ++ ){
			pp = pp * (in % 1000 / 100);
		} 
		fact += pp;
		pp = 1;
//		cout << "\ntest1(fact3:" << fact;
		for( int t = 0 ; t < times ; t ++ ){
			pp = pp * (in % 10000 / 1000);
		} 
		fact += pp;
//		cout << "\ntest1(fact4:" << fact;
		for( int t = 0 ; t < times ; t ++ ){
			pp = pp * (in % 100000 / 10000);
		} 
//		fact += pp;
//		
//		for( int t = 0 ; t < times ; t ++ ){
//			pp = pp * (in % 1000000 / 100000);
//		} 
//		fact += pp;
//		
//		for( int t = 0 ; t < times ; t ++ ){
//			pp = pp * (in % 10000000 / 1000000);
//		} 
//		fact += pp;
		
		
		
		
		
		if( fact == real ){
			cout << "YES";
		} else {
			cout << "NO";
		}
	} 
}