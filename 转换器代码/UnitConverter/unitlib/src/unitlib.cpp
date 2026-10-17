#include "unitlib.h"
// 摄氏度 → 华氏度：F = C × 9/5 + 32
double celsius_to_fahrenheit(double c)
 {
    return c * 9.0 / 5.0 + 32.0;
}
// 华氏度 → 摄氏度：C = (F - 32) × 5/9
double fahrenheit_to_celsius(double f) 
{
    return (f - 32.0) * 5.0 / 9.0;
}
// 米 → 英尺
double meter_to_foot(double m)
 {
    return m * 3.28084;
}
// 英尺 → 米
double foot_to_meter(double ft)
 {
    return ft * 0.3048;
}
// 磅 → 千克
double pound_to_kilogram(double lb) 
{
    return lb * 0.45359237;
}
// 千克 → 磅
double kilogram_to_pound(double kg) 
{
    return kg * 2.20462;
}
 
