#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int multi(int a, int b)
{
    return (a * b);
}

int divi(int a, int b)
{
    return (a / b);
}

int main()
{
    int a, b;
    char c;

    cout << "해당 코드는 입력한 두 수를 사칙연산하는 코드입니다." <<endl;
    cout << ('\n') << endl;

    cout << "원하는 정수를 두 개 입력한 후 원하는 사칙연산의 기호를 입력하십시오." << endl;
    cin >> a;
    cin >> b;
    
    cout << "(더하기: +, 빼기: -, 곱하기: *, 나누기: /)" << endl;
    cin >> c;

    switch(c){
        case '+':
            cout << sum(a, b);
            break;
        case '-':
            cout << sub(a, b);
            break;
        case '*':
            cout << multi(a, b);
            break;
        case '/':
            cout << divi(a, b);
            break;
    }

    return 0;
}