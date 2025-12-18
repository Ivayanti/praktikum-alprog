#include <iostream>
#include <string>

using namespace std;
string encrypt(string text) {
	for (int i = 0; i < text.length(); i++) {
		char c = tolower(text[i]);
		if (c == 'a' || c == 'u' || c == 'e' || c == 'o') {
			text[i] = '*';
		}
	}
	return text;
}
int main() {
	string result = encrypt("Yogyakarta");
	cout << "result: " << result << endl;

	system("PAUSE");

	return 0;
}