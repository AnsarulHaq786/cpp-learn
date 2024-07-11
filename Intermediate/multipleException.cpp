#include <iostream>
using namespace std;

void testExceptions(int num) {
    try {
        if (num == 0) {
            throw "Division by zero error";
        }
        else if (num < 0) {
            throw num;
        }
        else if (num == 1) {
            throw runtime_error("Runtime error");
        }
        else {
            cout << "No exception, number is: " << num << endl;
        }
    }
    catch (const char* e) {
        cout << "Caught an exception: " << e << endl;
    }
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (const runtime_error& e) {
        cout << "Caught a runtime error: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception" << endl;
    }
}

int main() {
    testExceptions(0);   // Division by zero error
    testExceptions(-1);  // Integer exception
    testExceptions(1);   // Runtime error
    testExceptions(2);   // No exception
    return 0;
}
