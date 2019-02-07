#include <iostream>
using namespace std;

int main(){
	int b = 99;
	while (b>1){
		cout << b << " bottles of beer on the wall," << b << " bottles of beer." << endl;
		
		b--;
		
		cout << "Take one down and pass it around, " << b << " bottles of beer on the wall. \n" << endl;
		
		if (b ==1){
			cout << b << " bottle of beer on the wall, " << b << " bottle of beer." << endl;
			cout << "Take one down and pass it around, no more bottles of beer on the wall. \n"<< endl;
		}
	}
	cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
	
	return 0;
}
			