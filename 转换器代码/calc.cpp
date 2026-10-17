#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "输入示例: 3 + 5\n";
    cin >> a >> op >> b;
    double res;
    switch(op)
    {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/':
            if(b == 0){cout<<"divide zero error\n";return -1;}
            res = a / b;
            break;
        default:
            cout<<"invalid operator\n";
            return -1;
    }
    cout << "result = " << res << endl;
    return 0;
}
