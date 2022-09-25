#include <iostream>
int main() {
	int a;
	bool r;
	std::cin >> a;
	r = a > 0;
	std::cout << r << std::endl;

//Boolean2◦. Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».
	int A;
	bool res;
	std::cin >> A;
	res = A % 2;
	std::cout << std::boolalpha << res << std::endl;

	//Boolean3◦. Дано целое число A.Проверить истинность высказывания : «Число A является четным».

	int E;
	bool g;
	std::cin >> E;
	g = A % 2 ==2;
	std::cout << std::boolalpha << g << std::endl;

// Boolean4◦. Даны два целых числа : A, B.Проверить истинность высказывания : «Справедливы неравенства A > 2 и B ≤ 3».
	int A1, B;
	bool t;
	std::cin >> A1 >> B;
	t = A1 > 2 && B <= 3;
	std::cout << std::boolalpha << t << std::endl;

// Boolean5◦. Даны два целых числа : A, B.Проверить истинность высказывания. «Справедливы неравенства A ≥ 0 или B < −2»  
	int A2, B1;
	bool rsl;
	std::cin >> A2 >> B1;
	rsl = A2 >= 0 || B1 < -2;
	std::cout << std::boolalpha << rsl << std::endl;

//Boolean6◦. Даны три целых числа : A, B, C.Проверить истинность высказывания : «Справедливо двойное неравенство A < B < C». 
	int A3, B2, C;
	bool re;
	std::cin >> A3 >> B2 >> C;
	re = A3 < B2  &&  B2 < C;
	std::cout << std::boolalpha << re << std::endl;

//Boolean7◦. Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C».
	int A4, B3, C1;
	bool rs;
	std::cin >> A4 >> B3 >> C1;
	rs = (A4 < B3 && B3 < C1) || (A4 > B3 && B3 > C1);
	std::cout << std::boolalpha << rs << std::endl;

//Boolean8◦. Даны два целых числа : A, B.Проверить истинность высказывания : «Каждое из чисел A и B нечетное».
	int a1, b;
	bool rl;
	std::cin >> a1 >> b;
	rl = a1 % 2 && b % 2;
	std::cout << std::boolalpha << rl << std::endl;

//Boolean9◦. Даны два целых числа : A, B.Проверить истинность высказывания : «Хотя бы одно из чисел A и B нечетное».
	int a2, b1;
	bool rt;
	std::cin >> a2 >> b1;
	rt = a2 % 2 || b1 % 2;
	std::cout << std::boolalpha << rt << std::endl;

//Boolean10◦. Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное».
	int a3, b2;
	bool re;
	std::cin >> a3 >> b2;
	re = a3 % 2 != b2 % 2;
	std::cout << std::boolalpha << re << std::endl;

}