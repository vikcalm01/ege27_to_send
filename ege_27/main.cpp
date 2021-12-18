#include <iostream>
#include <vector>
using namespace std;

void min_sum_distance_eff()
{   /**
    cur_iteration
tail_ix = cur_iteration%4
num[tail_ix] -> min_num
cin >> num[tail_ix] //it's a head now

ЦИКЛИЧЕСКИЙ БУФЕР

1. считываются числа в червяка
2. выводится каждая версия червяка как циклического буфера (после каждого шага/продвижения на одно число)
3. для каждого шага червяка выводится его содержимое и минимальное пройденное число
4. для каждого шага червяка выводится пара из числа в зубах и минимального пройденного
5. ищется минимум среди сгенерированных пар

1. считать числа
2. для каждого числа вывести номер его среза
3. для каждого среза найти максимальное число (6 максимумов) и вывести максимумы после перебора всех чисел
4. для каждого среза найти два максимума
5. собрать суммы в каждом срезе, выбрать максимальную
**/


    int n, min_num = 9999, min_sum = 8000;
    cin >> n;
    vector<int> vector_num(4, 0); //4 потому что это дистанция между нашими числами
    for (int i(0); i < 4; i++)
        cin >> vector_num[i];
    for (int i = 4; i < n; ++i)
    {
        int tail = i % 4;

        min_num = min(vector_num[tail], min_num);
        // cout << vector_num[tail] << endl;
        cin >> vector_num[tail];
        min_sum = min((min_num + vector_num[tail]), min_sum);
        
    }
    cout << min_sum;

}

int main()
{
    min_sum_distance_eff();
    return 0;
}
