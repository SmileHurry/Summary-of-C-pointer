#include<iostream>

using namespace std;

struct jiegouti
{
	int year;
};

int main()
{
	jiegouti s01, s02, s03;
	s01.year = 1998;
	jiegouti *pa = &s02;
	pa->year = 1999;
	jiegouti *pb = &s03;
	pb->year = 2000;
	jiegouti trio[3];                               //创建结构体数组
	trio[0].year = 2003;
	trio[1].year = 2004;
	trio[2].year = 2005;
	cout << "trio year:" << "\t" << trio->year << endl;
	cout << "trio[0] year:" << "\t" << trio[0].year << endl;
	cout << "trio[1] year:" << "\t" << trio[1].year << endl;
	cout << "trio[2] year:" << "\t" << trio[2].year << endl;
	cout << "---------------------------------------------" << endl;
	const jiegouti *arp[3] = { &s01, &s02, &s03 };   //创建结构体指针数组
	cout << "arp[0] year:" << "\t" << arp[0]->year << endl;
	cout << "arp[1] year:" << "\t" << arp[1]->year << endl;
	cout << "arp[2] year:" << "\t" << arp[2]->year << endl;
	cout << "---------------------------------------------" << endl;
	const jiegouti **ppa = arp;
	auto ppb = ppa;
	cout << "s01=\t" << (*ppb)->year << endl;
	cout << "s02=\t" << (*ppb + 1)->year << endl;    //注意这句和下句的区别
	cout << "s02=\t" << (*(ppb + 1))->year << endl;
	cout << "---------------------------------------------" << endl;
	cout << (int *)"home of the jolly bytes";
	cin.get();
	return 0;
}