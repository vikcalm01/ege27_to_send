#include <iostream>
#include <vector>

using namespace std;
void B_test_course_173()
{
    /**
    1) ���� �����
    2) ����� �����
    3) ����� 3 ����������� �����
    4) ����� ���� ����
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
