#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b;

    cout << "해당 코드는 입력한 두 수를 더하는 코드입니다." <<endl;
    cout << ('\n') << endl;

    cout << "원하는 정수를 입력하십시오." << endl;
    cin >> a;
    
    cout << "원하는 정수를 하나 더 입력하십시오." << endl;
    cin >> b;

    cout << a << " + " << b << " = " << sum(a, b) << endl;
    return 0;
}
