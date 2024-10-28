/*1. Користувач вводить з клавіатури дві межі діапазону і число. Якщо число не потрапляє в діапазон, 
програма просить користувача повторно ввести число, і так доти, доки він не введе число правильно.
2. Написати імітацію касового апарату для крамниці, яка торгує новорічними товарами. 
Касир має вибрати товар зі списку, ввести його кількість, потім вибрати наступний товар. 
Після завершення введення вивести на екран всю суму покупки. Передбачити наявність знижки. 
У списку товарів має бути не менше ніж 4 товари, має відображатися їхня ціна. 
Передбачити неправильно введені дані.
■ Реалізувати можливість обслуговування декількох клієнтів поспіль;
■ Зберігання загальної виручки крамниці;
■ Обмежити кількість товару в крамниці.
3. Написати програму, яка перевіряє користувача на знання таблиці множення. 
Програма виводить на екран два числа, користувач має ввести їхній добуток. 
Розробити кілька рівнів складності (відрізняються складністю та кількістю питань). 
Вивести користувачеві оцінку його знань.
4. Вивести на екран ромб із зірочок.*/

#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Oberite zadachy:\n"
		<< "1. Zadacha z potraplannam chisla v diapazon;\n"
		<< "2. Imetasia kasovogo aparata;\n"
		<< "3. Tablutsa mnozenna;\n"
		<< "4. Romb iz zirochok.\n";
	cin >> a;
	switch (a) {
	case 1: {
		/*1. Користувач вводить з клавіатури дві межі діапазону і число. Якщо число не потрапляє в діапазон,
			програма просить користувача повторно ввести число, і так доти, доки він не введе число правильно.*/
		int x, x1, x2, n;
		cout << "Vvedite dvi mezi diapazony: ";
		cin >> x1 >> x2;
		if (x1 > x2) {
			n = x1;
			x1 = x2;
			x2 = n;
		}
		while (true) {
			cout << "Vvedite chislo: ";
			cin >> x;
			if (x >= x1 && x <= x2) {
				cout << "\nVitaiy!!!\nVase chislo " << x << " potrapulo v diapazon chisel " << x1 << " ta " << x2 << "!\n";
				break;
			}
			else {
				cout << "\nVase chislo " << x << " ne potraplae v diapazon chisel " << x1 << " ta " << x2 << "!\n";
			}
		}
	}
		  break;
	case 2: {
		/*2. Написати імітацію касового апарату для крамниці, яка торгує новорічними товарами.
			Касир має вибрати товар зі списку, ввести його кількість, потім вибрати наступний товар.
			Після завершення введення вивести на екран всю суму покупки.Передбачити наявність знижки.
			У списку товарів має бути не менше ніж 4 товари, має відображатися їхня ціна.
			Передбачити неправильно введені дані.
			■ Реалізувати можливість обслуговування декількох клієнтів поспіль;
		    ■ Зберігання загальної виручки крамниці;
		    ■ Обмежити кількість товару в крамниці.*/
		int i = 0, j, n, s, S, K, G, D = 0, Sum = 0, Vur = 0;
		float C;
		cout << "Vvedite kilkist klientiv: ";
		cin >> K;
		while (i < K) {
			j = 0;
			i++;
			cout << "\nKlient " << i << endl;
			
			cout << "\nVvedite kilkist vsogo vudiv tovary iaki maete\n"
				<< "(Novorichni kylki, ialunku, gerlandu, misyra, hlopavku, podarynku): ";
			cin >> G;
			while (j < G) {
				j++;
				cout << "\nOberite " << j << " tovar zi spusky : \n"
					<< "1. Novorichni kylki\n"
					<< "2. Novorichni ialunku\n"
					<< "3. Novorichni gerlandu\n"
					<< "4. Novorichna misyra\n"
					<< "5. Novorichni hlopavku\n"
					<< "6. Novorichni podarynku\n";
				cin >> n;
				switch (n) {
				case 1: {
					D = 0;
					C = 20;
					S = 550;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist kylok: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnux kylok kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				case 2: {
					D = 0;
					C = 250;
					S = 50;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist ialunok: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnux ialunok kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				case 3: {
					D = 0;
					C = 120;
					S = 500;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist gerland: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnux gerland kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				case 4: {
					D = 0;
					C = 23;
					S = 10000;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist misyru: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnoi misyru kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				case 5: {
					D = 0;
					C = 7;
					S = 5000000;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist hlapysek: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnux hlapysek kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				case 6: {
					D = 0;
					C = 130;
					S = 100000;
					cout << "\nCina za 1 shtyky: " << C << endl;
					while (true) {
						cout << "\nVvedite kilkist podarynkiv: ";
						cin >> s;
						if (s <= S) {
							D = s * C;
							Sum += D;
							cout << s << " novorichnux podarynkiv kostyyt " << D << endl;
							break;
						}
						else {
							cout << "\nTakoi kilkosti tovary nemae!\n";
						}
					}
				}
					  break;
				default:cout << "\nTovary nemae.\n";
				}
			}
			if (Sum >= 1000) {
				cout << "\nY vas e znuzka 5% i syma do splatu byde " << Sum - ((Sum * 5) / 100) << endl;
				Vur += (Sum - ((Sum * 5) / 100));
			}
			else if (Sum >= 2000) {
				cout << "\nY vas e znuzka 10% i syma do splatu byde " << Sum - (Sum / 10) << endl;
				Vur += (Sum - (Sum / 10));
			}
			else if (Sum >= 3000) {
				cout << "\nY vas e znuzka 15% i syma do splatu byde " << Sum - ((Sum * 15) / 100) << endl;
				Vur += (Sum - ((Sum * 15) / 100));
			}
			else {
				cout << "\nY vas nemae znuzku. Syma do splatu byde " << Sum << endl;
				Vur += Sum;
			}
		}
		cout << "\n\nVurychka magazuny: " << Vur << endl;
	}
		  break;
	case 3: {
		/*3. Написати програму, яка перевіряє користувача на знання таблиці множення.
			Програма виводить на екран два числа, користувач має ввести їхній добуток.
			Розробити кілька рівнів складності(відрізняються складністю та кількістю питань).
			Вивести користувачеві оцінку його знань.*/
		int z = 1, d = 0, o, a = 0, b = 0, c = 0;
		for (int i = 1; i <= 3; i++) {
			cout << "\nRIVEN " << i << "!\n\n"
				<< "Daite vidpovid na " << i + 2 << " putanna:\n";
			z += 3;
			o = 0;
			for (int j = 1; j <= i + 2; j++) {
				cout << j << ". " << j + j + i << " * " << j + z << " = ";
				cin >> d;
				if (((j + j + i) * (j + z)) == d) {
					o += 1;
				}
				z += 5;
			}
			if(i == 1 && o > 0){
				a = o;
				cout << "Vasa otsinka za riven " << a << " baliv!\n";
			}
			else if (i == 2 && o > 0) {
				b = o;
				cout << "Vasa otsinka za riven " << b << " baliv!\n";
			}
			else if (i == 3 && o > 0) {
				c = o;
				cout << "Vasa otsinka za riven " << c << " baliv!\n";
			}
			else {
				cout << "Balu ne nabrani!\n";
			}
		}
		if (o < 3) {
			cout << "\nVasa ekzamenasina otsinka 2 balu!\nPotribna perezdacha!\n";
		}
		else {
			cout << "\nVasa ekzamenasina otsinka " << a + b + c << endl;
		}
	}
		  break;
	case 4: {
		//4. Вивести на екран ромб із зірочок.
		char x;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if ((i + j == 4 || i + 5 == j) || (i == j + 5 || (i + j) - 5 == 9)) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			cout << endl;
		}
		cout << endl;
	}
		  break;
	default:cout << "Ne virno obrana zadacha!";
	}
}