//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void main() {
//	string text, subtext = "", sum = "";
//	int i = 0, j = 0, k = 0, last = 0, out = 1;
//	const int n = 16;
//	
//	int key[n] = {
//		12, 13, 2, 7,
//		6, 15, 9, 5,
//		11, 10, 8, 4,
//		3, 0, 14, 1
//	};
//
//	string ans[n];
//	for (i = 0; i < n; i++) {
//		ans[i] = "0";
//	}
//	cout << "input text: ";
//	getline(cin, text);
//	for (i = 0; i < text.length(); i++) {
//		if (text[i] != ' ') {
//			if (isupper(text[i])) {
//				text[i] = tolower(text[i]);
//			}
//			subtext = subtext + text[i];
//		}
//	} 
//	text = subtext;
//	for (i = 0; i < text.length(); i++) {
//		int k = i;
//		for (j = 0; j < n; j++) {
//			while (k >= n) {
//				k = k - n;
//			}
//			last = k + 1;
//			if (key[j] == k) {
//				ans[j] = text[i];
//				break;
//			}
//		}
//		if (k % (n - 1) == 0) {
//			for (j = 0; j < n; j++) {
//				sum = sum + ans[j];
//			}
//			if (out % 2 == 0) {
//				cout << sum;
//			}
//			sum = "";
//			out++;
//		}
//	}
//	for (i = 0; i < n; i++) {
//		ans[i] = "-";
//	}
//	subtext = "";
//	for (i = text.length() - last; i < text.length(); i++) {
//		subtext = subtext + text[i];
//	}
//	for (i = 0; i < subtext.length(); i++) {
//		for (j = 0; j < n; j++) {
//			if (key[j] == i) {
//				ans[j] = subtext[i];
//				break;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		cout << ans[i];
//	}
//	cout << endl;
//}