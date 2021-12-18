#include <iostream>
#include <vector>
using namespace std;

void num_sum_multiple_distance_ineff()
{
    /**
     1)считать последовательность чисел
     2) вывести пары удовлетворяющие первому условию
     3) вывести пары удовлетворяющие второму условию
     4) вывести ответ
    */
   int n;
   cin >> n;
   vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    
    int count = 0;
    for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
    {
        if (abs(i - j) % 7 == 0 and ((numbers[i] + numbers[j]) % 55 == 0))
            count += 1;
    }
    cout << count;
}
int main()
{
    num_sum_multiple_distance_ineff();
    return 0;
}
