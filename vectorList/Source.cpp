#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include<time.h>
using namespace std;



void main()
{
	srand(time(NULL));



	int n = 10;
	ostream_iterator<int> os(cout, "\t");
	vector<vector<int>> math(n);

	for_each(begin(math), end(math), [n,&os](auto&v) {

		v.resize(n);
		generate_n(begin(v), n, []() {
			return rand() % 100;
		});
		copy(begin(v), end(v), os);
		cout << endl;
	});

	sort(begin(math), end(math), [](auto&v1, auto&v2) {
		return v1[9] < v2[9];
	});
	cout << endl;

	for_each(begin(math), end(math), [n, &os](auto&v) {



		copy(begin(v), end(v), os);
		cout << endl;
	});


	//6
	//int size = 10;
	//ostream_iterator<int> os(cout, "\t");
	//vector<vector<int>> math(size);
	//int cnt = 1;
	//for_each(begin(math), end(math), [size,&os,&cnt](auto&v){
	//	int counter = 1;
	//	v.resize(size);
	//	generate_n(begin(v), size, [&counter,cnt]() {
	//		return cnt * counter++;
	//	});
	//	copy(begin(v), end(v), os);
	//	cout << endl;
	//	cnt++;
	//});



	//5
	//list<int>l(20);
	//generate_n(begin(l), 20, []() {return -100 + rand() % 200; });
	//ostream_iterator<int> os(cout, " ");
	//copy(begin(l), end(l), os);
	//cout << endl;
	//l.remove_if([](int num) {return num < 0; });
	//copy(begin(l), end(l), os);



	//4
	//vector<int> a(10);
	//generate_n(begin(a), 10, []() {return 0 + rand() % 10; });

	//vector<int> b(10);
	//generate_n(begin(b), 10, []() {return 10 + rand() % 10; });

	//vector<int> c(begin(a), begin(a) + 5);
	//c.insert(begin(c) + 5,begin(b)+5,end(b));

	//ostream_iterator<int> os(cout, " ");

	//copy(begin(a), end(a), os);
	//cout << endl;
	//copy(begin(b), end(b), os);
	//cout << endl;
	//copy(begin(c), end(c), os);

	//3
	//list<int> l(100);

	//generate_n(begin(l), 100, []() {
	//	return rand() % 1000;
	//});
	//l.remove_if([](int num) {return num <500; });

	//ostream_iterator<int> os(cout, " ");
	//copy(begin(l), end(l), os);


	//2
	//vector<int> v(10);

	//int cnt = 0;
	//for_each(begin(v),end(v),[&cnt](int&i){
	//	i = cnt;
	//cnt++;
	//});

	//v.insert(begin(v) + 9, { 50,50,50 });

	//ostream_iterator<int> os(cout, " ");
	//copy(begin(v), end(v), os);


	//1
	//vector<int> v(10);

	//int cnt = 0;
	//for_each(begin(v),end(v),[&cnt](int&i){
	//	i = cnt * cnt;
	//	cnt++;
	//});

	//ostream_iterator<int> os(cout, " ");
	//copy(rbegin(v), rend(v), os);



	//vector<int> v2(begin(v) + 2, end(v));

	//v.insert(begin(v), { 5,5,6 });
	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}

	system("pause");
}