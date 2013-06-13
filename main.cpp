/* Height tests */
//#include "height.h"

/* Unit tests */
#include "unit.h"

/* Speed tests */
#include "speed.h"

/* Extra tests */
#include "extra.h"


int main() {
	unit();
	speed();
	//height();
	extra();

	
	/*int x;
	rbmap<int,int>m;

	while (1) {
		cin >> x;
		m.insert(std::pair<int,int>(x,1));
		m.print_tree();
		cout << endl;
		cout << m.height();
		cout << endl << endl << endl;
	}*/


	return 0;
}