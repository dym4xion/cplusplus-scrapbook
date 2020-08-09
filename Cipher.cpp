#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Cipher {
    char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
    public:
        int getCharIndex(char c, char carr[]);
        
        string en_Caesar(string plaintext, int key);
        string de_Caesar(string ciphertext, int key);
        void brute_Caesar(string ciphertext);

        string en_Substitution(string plaintext, string key);
        string de_Substitution(string ciphertext, string key);
};

// for finding the location of a char in a subs cipher key or he alphabet
int Cipher::getCharIndex(char c, char carr[]){
    for(int i = 0; i < 26; i++)
        if (c == carr[i]) return i;
    cerr << "the letter " << c << " is not in the alphabet!!!" << endl;
    return -1;
}

string Cipher::en_Caesar(string plaintext, int key){
    string ciphertext = "";
    for(int i = 0; i < plaintext.length(); i++){
        if(!isalpha(plaintext.at(i))) {
            ciphertext += plaintext.at(i);
        } else {
            int alphaIndex = getCharIndex(tolower(plaintext.at(i)), alpha);
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
            int alphaIndex = getCharIndex(tolower(ciphertext.at(i)), alpha);
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

string Cipher::en_Substitution(string plaintext, string key){
    string ciphertext = "";
    if (key.length() != 26) {
        cout << "BAD KEY SIZE, EMPTY STRING RETURNED.";
        return "";
    } else {
        for (int i = 0; i < key.length(); i++) {
            if (!isalpha(key.at(i))) {
                cout << "NON-CHARACTER SYMBOL(S) USED IN KEY ALPHABET, EMPTY STRING RETURNED.";
                return "";
            }
        }
        
        // key is valid if you get here
        for (int i = 0; i < plaintext.length(); i++){
            if (!isalpha(plaintext.at(i))){
                ciphertext += plaintext.at(i);
            } else if (isupper(plaintext.at(i))) {
                ciphertext += toupper(key[getCharIndex(tolower(plaintext.at(i)), alpha)]);
            } else {
                ciphertext += key[getCharIndex(plaintext.at(i), alpha)];
            }
        }
    }
    return ciphertext;
}

string Cipher::de_Substitution(string ciphertext, string key){
    string plaintext = "";
    if (key.length() != 26) {
        cout << "BAD KEY SIZE, EMPTY STRING RETURNED.";
        return "";
    } else {
        for (int i = 0; i < key.length(); i++) {
            if (!isalpha(key.at(i))) {
                cout << "NON-CHARACTER SYMBOL(S) USED IN KEY ALPHABET, EMPTY STRING RETURNED.";
                return "";
            }
        }
        
        // key is valid if you get here
        for (int i = 0; i < ciphertext.length(); i++){
            if (!isalpha(ciphertext.at(i))){
                plaintext += ciphertext.at(i);
            } else if (isupper(ciphertext.at(i))) {
                char k[27];
                strcpy(k, key.c_str());
                plaintext += toupper(alpha[getCharIndex(tolower(ciphertext.at(i)), k)]);
            } else {
                char k[27];
                strcpy(k, key.c_str());
                plaintext += alpha[getCharIndex(ciphertext.at(i), k)];
            }
        }
    }
    return plaintext;

}

int main(){
    Cipher c = Cipher();
    const string key = "qwertyuiopasdfghjklzxcvbnm"; 
    string ct = c.en_Substitution("a really LOOOOONG message that would be annoying to solve by hand", key);
    cout << ct << endl;
    string pt = c.de_Substitution(ct, key);
    cout << pt << endl;

    return 0;
}
