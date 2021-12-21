#include <iostream>
#include <vector>

using namespace std;
void B_test_course_173()
{
    /**
    1) ввод чисел
    2) вывод чисел
    3) поиск 3 минимальных чисел
    4) сумма этих трех
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        {
            cin >> numbers[i];
            cout << numbers[i] << ' ';
        }
}
int main()
{
    B_test_course_173();
    return 0;
}
