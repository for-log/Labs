#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Boolean21");
    bool flag = true;
    int x;
    int last = 10;
    pt >> x;
    while (x > 0) {
        int next = x % 10;
        if (last <= next) {
            flag = false;
            break;
        }
        last = next;
        x /= 10;
    }
    pt << flag;
}
