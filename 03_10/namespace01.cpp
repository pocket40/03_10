#include <iostream>
using namespace std;

int n;
void set() {
	n = 10;
}
namespace mozzi {
	int n;
	void set() {
		n = 20;
	}
}
namespace mocci {
	int n;
	void set() {
		n = 30;
	}
}
int main() {
	::set();
	mozzi::set();
	mocci::set();
	cout << ::n << endl;
	cout << ::mozzi::n << endl;
	cout << ::mocci::n << endl;
}