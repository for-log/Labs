#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Case2");
    int k;
    pt >> k;
    switch (k) {
    case 1:
        pt << "�����";
        break;
    case 2:
        pt << "�������������������";
        break;
    case 3:
        pt << "�����������������";
        break;
    case 4:
        pt << "������";
        break;
    case 5:
        pt << "�������";
        break;
    default: 
        pt << "������";
    };
}
