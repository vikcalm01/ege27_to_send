#include <iostream>
#include <vector>
using namespace std;

void A_course_173()
{
    /**
    +1) ���� �����
    +2) ����� �����
    +3) ����� ���
    4) ����� �����
    5) ����� ���������� �����
    6) ������� ���������� �����
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];

    for (int i(0); i < n; i++)
        for (int j(i+1); j<n; j++)
            cout << numbers[j]<<" "<<numbers[i]<< endl;

}
int main()
{
    A_course_173();
    return 0;
}
