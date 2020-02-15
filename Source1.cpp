//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void main() {
//	const int n = 16;
//	int key[n] = {
//		12, 13, 2, 7,
//		6, 15, 9, 5,
//		11, 10, 1, 4,
//		3, 0, 14, 8
//	};
//	string text;
//	int i = 0, j = 0, q = 0, k, l = n, p = 0;
//	cout << "input text: ";
//	cin >> text;
//	k = text.length();
//	cout << k << endl;
//	while (k > n) {
//		string tex = "";
//		for (; j < l; j++) {
//			tex = tex + text[j];
//		}	
//		for (i = 0; i < n; i++) {
//			for (p = 0; p < n; p++) {
//				if (key[p] == i) {
//					cout << tex[p];
//				}
//			}
//		}
//		k = k - 16;
//		l = l + 16;
//		q++;
//	}
//	q = text.length() - (n * q);;
//	string tex = "";
//	for (i = 0; i < n - q; i++) {
//		tex = tex + "-";
//	}
//	for (j = text.length() - q; j < text.length(); j++) {
//		tex = tex + text[j];
//	}
//	for (i = 0; i < n; i++) {
//		for (p = 0; p < n; p++) {
//			if (key[p] == i) {
//				cout << tex[p];
//			}
//		}
//	}
//
//}