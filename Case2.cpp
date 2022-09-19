#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Case2");
    int k;
    pt >> k;
    switch (k) {
    case 1:
        pt << "плохо";
        break;
    case 2:
        pt << "неудовлетворительно";
        break;
    case 3:
        pt << "удовлетворительно";
        break;
    case 4:
        pt << "хорошо";
        break;
    case 5:
        pt << "отлично";
        break;
    default: 
        pt << "ошибка";
    };
}
