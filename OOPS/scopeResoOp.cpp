
// Global Variable Access

/* #include <iostream>
using namespace std;

int x = 100;

int main() {
    int x = 10;
    cout << x << endl;    // 10
    cout << ::x << endl;  // 100 (global)
} */

// Class Function define outside

/* 
class Hero {
public:
    void print();
};

void Hero::print() {
    cout << "Hello Hero" << endl;
}
*/

// Static memeber access

/* 
class Test {
public:
    static int x;
};

int Test::x = 10;

int main() {
    cout << Test::x;
}
*/

// basically Scope Resolution Operator is ":: = “kis scope se cheez leni hai batao”