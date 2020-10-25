#include <iostream>

using namespace std;

class chserve {
private:
	int chef_score, cook_score, change;
public:
	bool whosTurn() {
		int sum = chef_score + cook_score;
		int q = sum/change;
		return (q%2) ? 0 : 1;
	}

	chserve (int ch , int co , int cn) {
		chef_score = ch;
		cook_score = co;
		change = cn;
	}
};

int main() {
	int test = 0, ch = 0, co = 0, cn = 0;
	cin >> test;
	while (test--) {
		cin >> ch >> co >> cn;
		chserve *c = new chserve(ch , co , cn);
		if(c->whosTurn()) {
			cout << "CHEF" << endl;
		}
		else {
			cout << "COOK" << endl;
		}
	}
	return 0;
}
