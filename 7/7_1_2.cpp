#include <iostream>
#include <string>
using namespace std;

template <class T>T swap_(T a, T b) {
    T temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    cout << swap_("Hello", "World") << endl;
    return 0;
}
