#include <iostream>
using namespace std;

int main(){
	for (int b=99; b>1; b--){
		cout << b << " bottles of beer on the wall," << b << " bottles of beer." << endl;
		cout << "Take one down and pass it around, " << b-1 << " bottles of beer on the wall. \n" << endl;
	}
		
	cout << "1 bottle of beer on the wall, 1 bottle of beer."<< endl;
	cout << "Take one down and pass it around, no more bottles of beer on the wall. \n" << endl;
	
	cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
	
	return 0;
}
			