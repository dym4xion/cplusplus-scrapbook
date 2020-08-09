#include <iostream>
#include <string>

using namespace std;

class Cipher {
    const char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    public:
        int getAlphaIndex(char c);
        
        string en_Caesar(string plaintext, int key);
        string de_Caesar(string ciphertext, int key);
        void brute_Caesar(string ciphertext);
};

int Cipher::getAlphaIndex(char c){
    for(int i = 0; i < 26; i++)
        if (c == alpha[i]) return i;
    return -1;
}

string Cipher::en_Caesar(string plaintext, int key){
    string ciphertext = "";
    for(int i = 0; i < plaintext.length(); i++){
        if(!isalpha(plaintext.at(i))) {
            ciphertext += plaintext.at(i);
        } else {
            int alphaIndex = getAlphaIndex(tolower(plaintext.at(i)));
            int newIndex = (alphaIndex + key) % 26;
            if (isupper(plaintext.at(i))) ciphertext += toupper(alpha[newIndex]);
            else {ciphertext += alpha[newIndex];}
        }
    }
    return ciphertext;
}

string Cipher::de_Caesar(string ciphertext, int key){
    string plaintext = "";
    for(int i = 0; i < ciphertext.length(); i++){
        if(!isalpha(ciphertext.at(i))){
            plaintext += ciphertext.at(i);
        } else {
            int alphaIndex = getAlphaIndex(tolower(ciphertext.at(i)));
            int newIndex = (alphaIndex + 26 - key) % 26;
            if (isupper(ciphertext.at(i))) plaintext += toupper(alpha[newIndex]);
            else {plaintext += alpha[newIndex];}
        }
    }
    return plaintext;
}

void Cipher::brute_Caesar(string ciphertext){
    cout << "brute forcing Caeser cipher for ciphertext: " << ciphertext << endl;
    for (int i = 1; i <= 26; i++){
        cout << "key = " << i << ", " << de_Caesar(ciphertext, i) << endl;
    }
}

int main(){
    Cipher cip = Cipher();
    string ct = cip.en_Caesar("Attack at DAWN!!!", 10);
    cip.brute_Caesar(ct);

    return 0;
}
