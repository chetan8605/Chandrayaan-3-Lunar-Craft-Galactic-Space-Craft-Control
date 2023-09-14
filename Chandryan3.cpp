#include <iostream>
using namespace std;
class Chandryan {
private:
    int a, b, c; 
    char dir; 
    char odir;

public:
 Chandryan(int inita, int initb, int initc, char initialDirection,char og) {
        a = inita;
        b = initb;
        c = initc;
        dir = initialDirection;
        odir = og;
    }

    void forward() {
        switch (dir) {
            case 'N':
                b++;
                break;
            case 'S':
                b--;
                break;
            case 'E':
                a++;
                break;
            case 'W':
                a--;
                break;
            case 'U':
                c++;
                break;
            case 'D':
                c--;
                break;
        }
    }

    void backward() {
        switch (dir) {
            case 'N':
                b--;
                break;
            case 'S':
                b++;
                break;
            case 'E':
                a--;
                break;
            case 'W':
                a++;
                break;
            case 'U':
                c--;
                break;
            case 'D':
                c++;
                break;
        }
    }

    void left() {
        switch (dir) {
            case 'N':
                dir = 'W';
                odir = 'W';
                break;
            case 'S':
                dir = 'E';
                odir = 'E';
                break;
            case 'E':
                dir = 'N';
                odir = 'N';
                break;
            case 'W':
                dir = 'S';
                odir = 'S';
                break;
            case 'U':
                if(odir=='E'){
                  dir = 'N';
                  odir = 'N';
                  break;
                }
                else if(odir=='N'){
                  dir = 'W';
                  odir = 'W';
                  break;
                }
                else if(odir == 'S'){
                  dir = 'E';
                  odir = 'E';
                  break;
                }
                else{
                  dir = 'S';
                  odir = 'S';
                  break;
                }
            case 'D':
                if(odir=='E'){
                  dir = 'N';
                  odir = 'N';
                  break;
                }
                else if(odir=='N'){
                  dir = 'W';
                  odir = 'W';
                  break;
                }
                else if(odir == 'S'){
                  dir = 'E';
                  odir = 'E';
                  break;
                }
                else{
                  dir = 'S';
                  odir = 'S';
                  break;
                }
        }
    }

    void right() {
    
        switch (dir) {
            case 'N':
                dir = 'E';
                odir = 'E';
                break;
            case 'S':
                dir = 'W';
                odir = 'W';
                break;
            case 'E':
                dir = 'S';
                odir = 'S';
                break;
            case 'W':
                dir = 'N';
                odir = 'N';
                break;
                
            case 'U':
                if(odir=='E'){
                  dir = 'S';
                  odir = 'S';
                  break;
                }
                else if(odir=='N'){
                  dir = 'E';
                  odir = 'E';
                  break;
                }
                else if(odir == 'S'){
                  dir = 'W';
                  odir = 'W';
                  break;
                }
                else{
                  dir = 'N';
                  odir = 'N';
                  break;
                }
            case 'D':
                if(odir=='E'){
                  dir = 'S';
                  odir = 'S';
                  break;
                }
                else if(odir=='N'){
                  dir = 'E';
                  odir = 'E';
                  break;
                }
                else if(odir == 'S'){
                  dir = 'W';
                  odir = 'W';
                  break;
                }
                else{
                  dir = 'N';
                  odir = 'N';
                  break;
                }
        }
    }

    void up() {
        if (dir != 'U') {
            dir = 'U';
        }
    }

    void down() {
        if (dir != 'D') {
            dir = 'D';
        }
    }

    void printPosition() {
        std::cout << "Current Position: (" << a << ", " << b << ", " << c << "), Direction: " << dir<< std::endl;
    }
};

int main() {
 Chandryan rover(0, 0, 0, 'N','N');

    string inst;
    cin>>inst;

                
    for (int i = 0; i<inst.length(); i++) {
        char command = inst[i];
        switch (command) {
            case 'f':
                rover.forward();
                break;
            case 'b':
                rover.backward();
                break;
            case 'l':
                rover.left();
                break;
            case 'r':
                rover.right();
                break;
            case 'u':
                rover.up();
                break;
            case 'd':
                rover.down();
                break;
        }
    }

    rover.printPosition();

    return 0;
}
