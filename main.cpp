#include<iostream>
#include"store.h"
using namespace std;

int main()
{
    store A;

    cout << A.total() << " won" << endl;
    cout << A.total(1000) << " dollar" << endl;
    return 123;
}