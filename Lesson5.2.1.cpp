/*1. �������� ��������, ��� �������� ���� ����� ����� �� � �� 500 (�������� a ��������� � ���������).
2. �������� ��������, ��� ������ ��� ����� ����� x � y, ���� ���� �������� � �������� �������� x � ������ y.
3. ������ ������ ����������� ��� ����� ����� �� 1 �� 1000.
4. ������ ������� ��� ����� ����� �� a �� 20 (�������� a ��������� � ���������: 1 <= a <= 20).
5. �������� ��������, ��� �������� �� ����� ������� �������� �� k, �� k � ����� �������. 
���������, ��� 7-�� �������:
7 x 2 = 14;
7 x 3 = 21.
6. ϳ��������� ������� ����� ����� � ������� �� 100 �� 999, �� ����� �� ������� �����.
7. ϳ��������� ������� ����� ����� � ������� �� 100 �� 999, � ���� �� ����� ���.
8. ���������� ������� ����-��� ���� �����. 
��������� � ����� ������ ����� �������� �� ����� 3 � 6 � ������� ����� �� �����.
9. ���������� ������� ����-��� ���� ����� �.
��������� ������� �� ��� ����� �, ��� ���� � ������� ��� ������� �� �*� � �� ������� ��� ������� �� �*�*�.
10. ���������� ������� ���� ����� �. �������� �� ���������, �� ��� ���� ���� ����� ����� ������� �*�.
11. ���������� ������� ���� �����. ��������� ������� �� ��� �����, �� �� ������ ����� ������� ��� �������.
12. ���������� ������� ��� ����� �����. ��������� ������� �� ��� �����, �� �� ������ ������ ����� ������� ��� �������.*/

#include<iostream>
using namespace std;
int main() {
	int n, a, sum = 0, s, x1, x2, x3;
	cout << "Oberite zadachy:\n"
		<< "1. Obchislenna sumu\n"
		<< "2. Zvedenna y stepin\n"
		<< "3. Vuznachenna serednogo arefmetuchnogo\n"
		<< "4. Vuznachenna dobytky\n"
		<< "5. Tablutsa mnozenna\n"
		<< "6. Pidrahynok odnakovux chusel v diapazoni\n"
		<< "7. Pidrahynok riznux chusel v diapazoni\n"
		<< "8. Vudalenna sifer z chisla\n"
		<< "9. Vuvedenna chisel dla iakux A diletsa bez zalusky na B*B i ne diletsa bez zalusky na B*B*B\n"
		<< "10. Kub sumu chisla = A*A\n"
		<< "11. Vsi sili chusla na yaki cheslo dilutsa bez zalusky\n"
		<< "12. Vsi sili chusla na yaki dva chesla dilutsa bez zalusky\n";
	cin >> n;
	switch (n) {
	case 1: {
		//1. �������� ��������, ��� �������� ���� ����� ����� �� � �� 500 (�������� a ��������� � ���������).
		cout << "Vvedite chislo do 500: ";
		cin >> a;
		for (int i = a; i <= 500; i++) {
			sum += i;
		}
		cout << "Suma chisel vid " << a << " do 500 = " << sum << endl;
	}
		  break;
	case 2: {
		//2. �������� ��������, ��� ������ ��� ����� ����� x � y, ���� ���� �������� � �������� �������� x � ������ y.
		float x1, x2;
		cout << "Vvedite chislo ta stepin v iaky potribno vozvestu se chislo: ";
		cin >> x1 >> x2;
		float a = 1;
		float s = x1;
		if (x2 == 0) {
			cout << "Chislo " << s << " y stepeni " << x2 << " dorivnye 1\n";
		}
		else if (x2 < 0 && x1 == 0) {
			cout << "Chislo " << s << " y stepeni " << x2 << " ne mae zmisty!\n";
		}
		else if (x2 < 0 && x1 > 0) {
			x2 *= -1;
			while (a < x2) {
				x1 *= s;
				a++;
			}
			cout << "Chislo " << s << " y stepeni " << x2 * -1 << " dorivnye " << 1 / x1 << endl;
		}
		else if (x2 > 0 && x1 < 0) {
			int f = x2;
			while (a < x2) {
				x1 *= s;
				a++;
			}
			if (f % 2 == 0) {
				cout << "Chislo " << s << " y stepeni " << x2 << " dorivnye " << x1 << endl;
			}
			else {
				cout << "Chislo " << s << " y stepeni " << x2 << " dorivnye " << x1 * -1 << endl;
			}
		}
		else if (x2 < 0 && x1 < 0) {
			int f = x2;
			x2 *= -1;
			while (a < x2) {
				x1 *= s;
				a++;
			}
			if (f % 2 == 0) {
				cout << "Chislo " << s << " y stepeni " << x2 * -1 << " dorivnye " << 1 / x1 << endl;
			}
			else {
				cout << "Chislo " << s << " y stepeni " << x2 * -1 << " dorivnye " << (1 / x1) * -1 << endl;
			}
		}
		else {
			while (a < x2) {
				x1 *= s;
				a++;
			}
			cout << "Chislo " << s << " y stepeni " << x2 << " dorivnye " << x1 << endl;
		}
	}
		  break;
	case 3: {
        //3. ������ ������ ����������� ��� ����� ����� �� 1 �� 1000.
		float f = 0, k = 0;
		for (float i = 1; i <= 1000; i++) {
			f += i;
			k++;
			  }
		cout << "Seredne arefmetuchne chisel vid 1 do 1000 = " << f / k << endl;
	}
		  break;
	case 4: {
		//4. ������ ������� ��� ����� ����� �� a �� 20 (�������� a ��������� � ��������� : 1 <= a <= 20).
		cout << "Vvedite chislo ne bilse 20: ";
		cin >> a;
		s = a;
		for (int i = a; i < 20;) {
			i++;
			a *= i;
		}
		cout << "Dobytok vsix silux chisel vid " << s << " do 20 = " << a << endl;
	}
		  break;
	case 5: {
		/*5. �������� ��������, ��� �������� �� ����� ������� �������� �� k, �� k � ����� �������.
			���������, ��� 7 - �� ������� :
		7 x 2 = 14;
		7 x 3 = 21.*/
		int k;
		cout << "Vvedite chislo na iake vuvestu tablusy mnozenna: ";
		cin >> k;
		for (int i = 1; i <= 10; i++) {
			cout << k << " * " << i << " = " << k * i << endl;
		}
	}
		  break;
	case 6: {
		//6. ϳ��������� ������� ����� ����� � ������� �� 100 �� 999, �� ����� �� ������� �����.
		int nn = 0;
		for (int i = 100; i <= 999; i++) {
			a = i;
			x1 = a % 10;
			a /= 10;
			x2 = a % 10;
			x3 = a / 10;
			if (x1 == x2 || x2 == x3 || x1 == x3) {
				cout << ' ' << x3 << ' ' << x2 << ' ' << x1 << endl;
				nn++;
			}
		}
		cout << "Odnakovux sifer v chuslax y diapazoni vid 100 do 999 " << nn << endl;
	}
		  break;
	case 7: {
		//7. ϳ��������� ������� ����� ����� � ������� �� 100 �� 999, � ���� �� ����� ���.
		int nn = 0;
		for (int i = 100; i <= 999; i++) {
			a = i;
			x1 = a % 10;
			a /= 10;
			x2 = a % 10;
			x3 = a / 10;
			if (x1 != x2 && x2 != x3 && x1 != x3) {
				cout << ' ' << x3 << ' ' << x2 << ' ' << x1 << endl;
				nn++;
			}
		}
		cout << "Neodnakovux sifer v chuslax y diapazoni vid 100 do 999 " << nn << endl;
	}
		  break;
	case 8: {
		/*8. ���������� ������� ���� - ��� ���� �����.
			��������� � ����� ������ ����� �������� �� ����� 3 � 6 � ������� ����� �� �����.*/
		cout << "Vvedite chislo: ";
		cin >> a;
		x1 = 0, x2 = 0, x3 = 0;
		for (int i = 0; a > 0; i++) {
			x1 = a % 10;
			if (x1 == 3 || x1 == 6) {
				a /= 10;
				continue;
			}
			else {
				a /= 10;
				x2 = (x2 * 10) + x1;
			}
		}
		for (int j = 0; x2 > 0; j++) {
			x3 = x2 % 10;
			a = (a * 10) + x3;
			x2 /= 10;
		}
		cout << "Chislo bez 3 ta 6 = " << a << endl;
	}
		  break;
	case 9: {
		/*9. ���������� ������� ���� - ��� ���� ����� �.
			��������� ������� �� ��� ����� �, ��� ���� � ������� ��� ������� �� �*� � �� ������� ��� ������� �� �*�*�.*/
		int A, B = 0, C;
		cout << "Vvedite chislo: ";
		cin >> A;
		for (int i = 1; A >= i; i++) {
			B = i * i;
			C = i * i * i;
			if (A % B == 0 && A % C != 0) {
				cout << i << ' ';
			}
		}
		cout << endl;
	}
		  break;
	case 10: {
		//10. ���������� ������� ���� ����� �.�������� �� ���������, �� ��� ���� ���� ����� ����� ������� �*�.
		int A;
		cout << "Vvedite chislo: ";
		cin >> A;//1 27
		
		s = A, a = 1, x2 = 1;
		for (int i = 0; s > 0; i++) {
			x1 = s % 10;
			sum += x1;
			s /= 10;
		}
		for (int j = 0; j < 3; j++) {
			a *= sum;
		}
		if (a == A * A) {
			cout << "Kyb symu sufr chisla " << A << " dorivnye " << A << " * " << A << endl;//1 27
		}
		else {
			cout << "Kyb symu sufr chisla " << A << " ne dorivnye " << A << " * " << A << endl;
		}
		 //x1 = 0, x2 = 1, x3 = 0;
		//for (int i = 1; i <= 1000000; i++) {
		//	int a = i;
		//	int sum = 0;
		//	for (; a > 0;) {
		//		int x1 = a % 10;
		//		sum += x1;
		//		a /= 10;
		//	}
		//	/*for (unsigned long long l = 0; l < 3; l++) {
		//		x2 *= sum;
		//	}*/
		//	int x2 = sum * sum * sum;
		//	if (x2 == i * i) {
		//		cout << i << ' ';//1, 27
		//	}
		//}
		cout << endl;
	}
		  break;
	case 11: {
		//11. ���������� ������� ���� �����.��������� ������� �� ��� �����, �� �� ������ ����� ������� ��� �������.
		cout << "Vvedite chislo: ";
		cin >> a;
		for (int i = 1; i <= a; i++) {
			if (a % i == 0) {
				cout << i << ' ';
			}
		}
	}
		  break;
	case 12: {
		//12. ���������� ������� ��� ����� �����.��������� ������� �� ��� �����, �� �� ������ ������ ����� ������� ��� �������.
		cout << "Vvedite dva chisla: ";
		cin >> x1 >> x2;
		for (int i = 1; i<=x1||i<=x2 ; i++) {
			if (x1 % i == 0 && x2 % i == 0) {
				cout << i << ' ';
			}
		}

	}
		  break;
	default:cout << "Ne virno obrana zadacha!\n";
	}
}