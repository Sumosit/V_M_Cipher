#include <iostream>
#include <string>

using namespace std;

string tolower(string k) {
    string key;
    for (int i = 0; i < k.size(); ++i) {
        if (k[i] >= 65 && k[i] <= 90) {
            key += k[i] - 65 + 97;
        }
        else if (k[i] >= 97 && k[i] <= 122) {
            key += k[i];
        }
    }
    return key;
}

string encryption(string t, string key) {
    string ftext;
    for (int i = 0, j = 0; i < t.length(); ++i) {
        char c = t[i];
        if (c < 97 || c > 122){
            continue;
        }
        else if (c >= 65 && c <= 90) {
            c += (65 + 97);
        }
        ftext += (c + key[j] - 97 * 2) % 26 + 97;
        j = (j + 1) % key.length();
    }
    return ftext;
}

string decryption(string t, string key) {
    string ftext;
    for (int i = 0, j = 0; i < t.length(); ++i) {
        char c = t[i];
        if (c < 97 || c > 122) {
            continue;
        }
        else if (c >= 65 && c <= 90) {
            c += (65 + 97);
        }
        ftext += (c - key[j] + 26) % 26 + 97;
        j = (j + 1) % key.length();
    }
    return ftext;
}

void main() {
    while (1) {
        string text, key, subtext = "";
        cout << "input key: "; cin >> key;
        cout << "input text: "; cin >> text;
        for (int i = 0; i < text.length(); i++) {
            if (text[i] != ' ' || text[i] != ',' || text[i] != '.') {
                if (isupper(text[i])) {
                    text[i] = tolower(text[i]);
                }
                subtext = subtext + text[i];
            }
        }
        key = tolower(key);
        string encrypt = encryption(text, key);
        string decrypt = decryption(encrypt, key);
        cout << encrypt << endl;
        cout << decrypt << endl << endl;
    }
}