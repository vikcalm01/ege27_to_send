#include <iostream>
#include <vector>
using namespace std;

void min_sum_distance_eff()
{
    /**
    + 1) считать 4 числа в червяка
    + 2) число в хвосте червяка - потенциальный минимум из пройденных
    + 3) сдвинуть все числа в червяке влево (0123 -> 1234)
    + 4) счиатт пятое число в зубы червяку
    + 5) найти минимальную пару - мин число в зубах и мин число, которое вышло
    + 6) из всех пар найти минимальную
    **/

    int n, probably_min = 9999, min_sum = 8000;
    cin >> n;
    vector<int> vector_num(4, 0); //4 потому что это дистанция между нашими числами
    for (int i(0); i < 4; i++)
            cin >> vector_num[i];

    for (int j(0); j < n - 4; j++)
    {
        int left_num = vector_num[0];
        probably_min = min(probably_min, left_num);

        for (int i = 0; i < 3; ++i)
            vector_num[i] = vector_num[i+1];

        cin >> vector_num[3];

        if (min_sum > probably_min + vector_num[3])
            min_sum = probably_min + vector_num[3];

    }
        cout << min_sum;

}

int main()
{
    min_sum_distance_eff();
    return 0;
}
