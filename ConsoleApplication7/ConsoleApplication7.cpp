#include <iostream>
#include <list>
#include "Matrix.h"
#include "IntArr.h"

using namespace std;

void add(list<double>& Q) {
    int cnt = 0;
    for (auto i : Q)
        cnt += i;
    Q.emplace_back(cnt / Q.size());
}

int main()
{
   
}

