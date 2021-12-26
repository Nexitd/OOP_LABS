#include <iostream>
using namespace std;

template <typename T1, typename T2> T1 max(T1 a, T2 b)
{
	cout << "manual" << endl;
	return (a > b) ? a : b;
}
int main(){
   	char i = max('a', '1');
    int d = max(17, 18);
    const char* ch = max("Hello","World");
    cout << "i = " << i << endl;
    cout << "d = " << d << endl;
    cout << "ch = " << ch << endl;

	return 0;
}
