#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> num;    // STL�е�vector����
  	int element;

	// �ӱ�׼�����豸����������
	// ֱ��������Ƿ���������Ϊֹ
    while (cin >> element)
	    num.push_back(element);

    // STL�е������㷨
    sort(num.begin(), num.end());

    // ���������������׼����豸
    for (int i = 0; i < num.size(); i++)
	     cout << num[i] << "\n";
}
