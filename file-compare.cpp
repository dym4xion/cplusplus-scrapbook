#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    unsigned char buf1[1024], buf2[1024];

    if(argc != 3) {
        cout << "need two files as params" << endl;
        return 1;
    }

    ifstream f1(argv[1], ios::in | ios::binary);
    if(!f1) {
        cout << "cannot open first file" << endl;
    }
    ifstream f2(argv[2], ios::in | ios::binary);
    if(!f2) {
        cout << "cannot open second file" << endl;
    }

    cout << "... comparing files ..." << endl;

    do {
        f1.read((char *) buf1, sizeof buf1);
        f2.read((char *) buf2, sizeof buf2);

        if(f1.gcount() != f2.gcount()){
            cout << "files are not the same, they differ in size" << endl;
            f1.close();
            f2.close();
            return 0;
        }

        for (register int i = 0; i < f1.gcount(); i++){
            if(buf1[i] != buf2[i]) {
                cout << "files differ in contents but are of same size" << endl;
                f1.close();
                f2.close();
                return 0;
            }
        }
    } while (!f1.eof() && !f2.eof());

    cout << "files are the same!!!" << endl;

    f1.close();
    f2.close();

    return 0;
}
