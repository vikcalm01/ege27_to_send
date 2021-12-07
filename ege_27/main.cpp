#include <iostream>
#include <vector>
using namespace std;

void min_sum_distance_eff()
{
    /**
    + 1) считать 4 числа в червяка
    + 2) число в хвосте червяка - потенциальный минимум из пройденных
    + 3) сдвинуть все числа в червяке влево (0123 -> 1234)
    4) счиатт пятое число в зубы червяку
    5) ВЫВЕСТИ ЧЕРВЯКА И ПРОЙДЕННЫЙ МИНИМУМ ДЛЯ ПРОВЕРКИ
    6) собоать пару из того, что в зубах червяка, и пройденного минимума
    7) это кандидат на минимульаную пару
    8) один ход червяка закончен, повторяем
    **/

    int n, probably_min = 9999;
    cin >> n;
    vector<int> vector_num(4, 0); //4 потому что это дистанция между нашими числами
    for (int i(0); i < 4; i++)
        {
            cin >> vector_num[i];
            // cout << vector_num[i];
        }
    for (int j(0); j < n - 4; j++)
    {
        int left_num = vector_num[0];
        probably_min = min(probably_min, left_num);

        for (int i = 0; i < 3; ++i)
            vector_num[i] = vector_num[i+1];
        cin >> vector_num[3];

        for (int i(0); i <= 3; ++i) 
            cout << vector_num[i] << ' ';
        
        

        // for (int i(4); i > 0; --i) 
        //     cout << vector_num[i] << ' ';
    }
}

int main()
{
    min_sum_distance_eff();
    return 0;
}