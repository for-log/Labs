#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Integer13");
    int a;
    pt >> a;
    int result = a % 100;
    int d = a / 100;
    pt << result * 10 + d;
}
