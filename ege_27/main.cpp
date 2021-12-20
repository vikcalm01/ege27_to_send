#include <iostream>


using namespace std;
void num_sum_max_distance_eff_2318_3()
{
    /*/
    1) сортируем поступающие числа на множества 7 множеств (расстояние между множествами кратно 7, то есть 
    [i % 7] ([i], [7i] и тд))
    2) для каждого множества создаем счетчик для подсчета остатков от деления на 55 (сумма ратна 55 по 
    заданию), по факту у нас будет двумерный массив
    counters[номер множества][остаток от деления на 55]
    3) поступающее число закидываем в его множество и затем в ЕГО множестве смотрим комплементарные остатки
    4) к глобальному счетчику записываем counters[номер множества][остаток от деления на 55
    */

    int n, global_count = 0;
    long int array[7][55] = {};
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        if (num % 55 == 0)
            global_count += array[i % 7][0]; // считываем пару чисел кратных 55 (у них остаток = 0)
        else global_count += array[i % 7][55 - (num % 55)]; // считываем пару чисел, чьи остатки 
        // комплементарны
        array[i % 7][num % 55] += 1; // только после проверки того, делится ли число нацело на 55, мы 
        // добавляем его остаток к счетчику
    }
    cout << global_count;
}
int main()
{
    num_sum_max_distance_eff_2318_3();
    return 0;
}
