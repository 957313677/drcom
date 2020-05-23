#include <iostream>
#include <string>

using namespace std;

int main() {
	int passwd[] = { 28, 57, 86, 19, 47, 76, 9, 38, 66, 95, 28, 57, 86, 18, 47, 76 };
	string mi = "Op-L_&";   //加密字符串
	string ming = "";
	for (int i = 0; i < mi.length(); i++) {
		int a = mi.at(i) - passwd[i];
		if (a<32) {
			a += 95;
		}
		ming += (char)a;
		
	}
	cout << ming << endl;
	return 0;
}

