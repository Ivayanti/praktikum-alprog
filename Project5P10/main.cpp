#include <iostream>

using namespace std;
void pyramid(int tinggi, int bentuk){
	if (bentuk == 0) {
		// rata kiri
		for (int i = 1; i <= tinggi; i++) {
			for (int j = 0; j <= -i; j++) {
				cout << " ";
			}
	if (bentuk == 1) {
	    // rata kanan
		for (int i = 1; i <= tinggi; i++) {
		for (int j = 0; j <= -i; j++) {
						cout << " ";
		}
    if (bentuk == 0) {
		// rata centert
		for (int i = 1; i <= tinggi; i++) {
			for (int j = 0; j <= -i; j++) {
				cout << " ";
			}
			system("PAUSE");
