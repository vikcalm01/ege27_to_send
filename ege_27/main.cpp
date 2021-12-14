#include <iostream>
#include <vector>
using namespace std;

void sum_max_num()
{
    /**
     1) считать и запомнить числа
     2) найти наибольшее четное и наибольшее нечетное числа
     3) вывести сумму наибольших чисел
    */
     int n(0);
    cin >> n;
    vector <int> numbers(n);
    int max_div_2 = -2000;
    int max_not_div_2 = -2000;
    for (int i(0); i<n; i++)
            {
                cin>> numbers[i];
                if (numbers[i] % 2 == 0)
                    {   if (numbers[i] > max_div_2)
                        max_div_2 = numbers[i];
                    }

                else if (numbers[i] % 2 != 0) 
                        if (numbers[i] > max_not_div_2)
                            max_not_div_2 = numbers[i];
            }
    cout << max_not_div_2 + max_div_2;

}

int main()
{
    sum_max_num();
    return 0;
}
