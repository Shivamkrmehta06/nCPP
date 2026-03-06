#include <cassert>
#include <iostream>
#include <sstream>
using namespace std;

class oops {
   public:
    int a;
    int b;

    oops(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void add(int a, int b) {
        cout << "Addition: " << (a + b) << endl;
    }
};

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}

bool isPalindrome(int num) {
    if (num < 0) return false;
    return num == reverseNumber(num);
}

void checkPallindrome(int num) {
    cout << reverseNumber(num) << endl;
}

void runTests() {
    // Test reverseNumber
    assert(reverseNumber(121) == 121);
    assert(reverseNumber(1234) == 4321);
    assert(reverseNumber(10) == 1);

    // Test isPalindrome
    assert(isPalindrome(121) == true);
    assert(isPalindrome(123) == false);
    assert(isPalindrome(-121) == false);

    // Test class constructor values
    oops obj(5, 6);
    assert(obj.a == 5);
    assert(obj.b == 6);

    // Test add output
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());
    obj.add(5, 6);
    std::cout.rdbuf(oldCout);
    assert(buffer.str() == "Addition: 11\n");

    cout << "All tests passed!" << endl;
}

int main() {
    runTests();

    // Existing function call
    checkPallindrome(121);

    return 0;
}
