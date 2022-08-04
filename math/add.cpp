#include <iostream>

using namespace std;

int add_num(int a, int b) {
    return a + b;
}

int main() {
    for (int i = 0; i < 10; i ++) {
        cout << i << " + " << i+1 << " = " << add_num(i, i+1) << endl;
    }

    return 0;
}
