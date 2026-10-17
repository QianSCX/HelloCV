#include <iostream>
#include "unitlib.h"
using namespace std;
int main() 
{
    int choice;
    double value;cout << "===== 单位转换器 =====" << endl;
cout << "1. 摄氏度 → 华氏度" << endl;
cout << "2. 华氏度 → 摄氏度" << endl;
cout << "3. 米 → 英尺" << endl;
cout << "4. 英尺 → 米" << endl;
cout << "5. 磅 → 千克" << endl;
cout << "6. 千克 → 磅" << endl;
cout << "0. 退出程序" << endl;
cout << "请输入选项(0-6): ";
cin >> choice;
if (choice == 0) 
{
    cout << "程序已退出" << endl;
    return 0;
}
cout << "请输入数值: ";
cin >> value;
switch (choice) 
{
    case 1:
        cout << value << " ℃ = " << celsius_to_fahrenheit(value) << " ℉" << endl;
        break;
    case 2:
        cout << value << " ℉ = " << fahrenheit_to_celsius(value) << " ℃" << endl;
        break;
    case 3:
        cout << value << " 米 = " << meter_to_foot(value) << " 英尺" << endl;
        break;
    case 4:
        cout << value << " 英尺 = " << foot_to_meter(value) << " 米" << endl;
        break;
    case 5:
        cout << value << " 磅 = " << pound_to_kilogram(value) << " 千克" << endl;
        break;
    case 6:
        cout << value << " 千克 = " << kilogram_to_pound(value) << " 磅" << endl;
        break;
    default:
        cout << "无效选项，请输入0-6之间的数字" << endl;
}
return 0;
}


