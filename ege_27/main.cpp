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
    +6) подсчёт подходящих троек
6
5
4
3
2
8
7
5 4 3 =  12
5 4 7 = 16
5 3 8=  16
5 8 7= 20
3 2 7=12
    */
    int n(0), summa = 0, min_summa = 4000;
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0); i < n; i++)
        for (int j(i+1); j<n; j++)
            for (int k(j+1); k < n; ++k)
            {
                summa = numbers[i] + numbers[j] + numbers[k];
                if (summa % 4 == 0 and summa < min_summa)
                    min_summa = summa;
                    //cout << numbers[i]<<" "<<numbers[j] << " "<<numbers[k] << endl;
            }
            cout << min_summa;


}
int main()
{
    A_course_173();
    return 0;
}
