#include <iostream>
#include <vector>
using namespace std;

void A_course_173()
{
    /**
    +1) ввод чисел
    +2) вывод чисел
    +3) вывод пар
    +4) вывод троек
    +5) вывод подходящих троек
    6) подсчёт подходящих троек
6
5
4
3
2
8
7
    */
    int n(0), summa = 0;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0); i < n; i++)
        for (int j(i+1); j<n; j++)
            for (int k(j+1); k < n; ++k)
                if ((numbers[i] + numbers[j] + numbers[k]) % 4 == 0)
                    cout << numbers[i]<<" "<<numbers[j] << " "<<numbers[k] << endl;

}
int main()
{
    A_course_173();
    return 0;
}
