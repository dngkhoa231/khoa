
//


#include <iostream>
using namespace std;
int main() {
	// input: so nguyen duong a va n
	unsigned int a, n;
	// output: luy thua s
	unsigned int s = 1;
	cout << "input a:";
	cin >> a;
	cout << endl;
	cout << "input n:";
	cin >> n;
	cout << endl;
	for (int index = 0; index < n; index++) {// lap 0 ->(n-1)= n lan 
		s = a * s;
	}
	cout << "output s luy thua:" << s << endl;
	return 0;
}





