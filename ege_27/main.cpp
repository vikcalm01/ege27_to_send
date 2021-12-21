#include <iostream>
#include <vector>
using namespace std;

void A_course_173()
{
    /**
    +1) ввод чисел
    +2) вывод чисел
    +3) вывод пар
    4) вывод троек
    5) вывод подходящих троек
    6) подсчёт подходящих троек
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0); i < n; i++)
        for (int j(i+1); j<n; j++)
            cout << numbers[j]<<" "<<numbers[i]<< endl;

}
int main()
{
    A_course_173();
    return 0;
}
