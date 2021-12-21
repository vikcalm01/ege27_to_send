#include <iostream>
#include <vector>

using namespace std;
void B_test_course_173()
{
    /**
    +1) ввод чисел
    +2) вывод чисел
    +3) поиск 3 минимальных чисел
    +4) сумма этих трех
    */
    int n(0), min_1 = 2000, min_2 = 2000, min_3 = 2000, c =0, summa = 0;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i] < min_1 and numbers[i] < min_2 and numbers[i] < min_3)
                {
                    c = min_1;
                    min_1 = numbers[i];
                    min_3 = min_2;
                    min_2 = c;
                }
            else if (numbers[i] < min_2 and numbers[i] < min_3)
            {
                c = min_2;
                min_2 = numbers[i];
                min_3 = c;
            }
            else if (numbers[i] < min_3)
            {
                min_3 = numbers[i];
            }
            if ((min_1 + min_2 + min_3) % 4 == 0)
                summa = min_1 + min_2 + min_3;
        }
        cout << summa;

}
int main()
{
    B_test_course_173();
    return 0;
}
