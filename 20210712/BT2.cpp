#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int score[10];

int main(int argc, char **argv)
{
    for (int i = 1; i < 10; i++)
    {
        cin >> score[i];
    }

    sort(score+1, score+1+6);
    cout << (score[4]+score[5]+score[6]) << endl;
    return 0;
}