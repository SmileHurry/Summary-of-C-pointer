#include<iostream>
using namespace std;
struct jiegouti
{
	int year;
};

//int main()
{
	jiegouti s01, s02, s03;
	s01.year = 1998;
	jiegouti *pa = &s02;                           //�����ṹ��ָ��
	pa->year = 1999;
	jiegouti trio[3];                              //�����ṹ������
	trio[0].year = 2003;
	cout << trio->year << endl;
	const jiegouti *arp[3] = { &s01, &s02, &s03 }; //�����ṹ��ָ������
	cout << arp[1]->year << endl;
	const jiegouti **ppa = arp;                    //����ָ�����������ָ��
	auto ppb = ppa;
	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;
	cout << (int *)"home of the jolly bytes";
	cin.get();
	return 0;
}