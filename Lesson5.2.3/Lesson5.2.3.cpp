/*1. Вивести на екран фігури, заповнені зірочками.
* * * * *   *        * * * * *             * * * * *
  * * * *   * *        * * *                 * * *
    * * *   * * *        *         *           * 
      * *   * * * *              * * *       * * *
        *   * * * * *          * * * * *   * * * * *  
    a)          b)        c)       d)          e)

*       *   *             *    * * * * *           *
* *   * *   * *         * *    * * * *           * *
* * * * *   * * *     * * *    * * *           * * *
* *   * *   * *         * *    * *           * * * *
*       *   *             *    *           * * * * * 
    f)        g)       i)        j)            k)  
Діалог з користувачем реалізувати за допомогою меню.
2. Користувач вводить число. 
Визначити кількість цифр у цьому числі, порахувати їхню 
суму та середнє арифметичне. Визначити кількість нулів у цьому числі.
Спілкування з користувачем організувати через меню.
3. Написати програму, яка виводить на екран
шахову дошку із заданим розміром клітинки. Наприклад,
***---***---***---***---
***---***---***---***---
***---***---***---***---
---***---***---***---***
---***---***---***---***
---***---***---***---***
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Oberite zadachy:\n"
        << "1. Figyru\n"
        << "2. Dii z chislom\n"
        << "3. Saxova doska\n";
    cin >> n;
    switch (n) {
    case 1: {
        /*1. Вивести на екран фігури, заповнені зірочками.
        * * * * *   *        * * * * *             * * * * *
          * * * *   * *        * * *                 * * *
            * * *   * * *        *         *           *
              * *   * * * *              * * *       * * *
                *   * * * * *          * * * * *   * * * * *
             a)          b)        c)       d)          e)

        *       *   *             *    * * * * *           *
        * *   * *   * *         * *    * * * *           * *
        * * * * *   * * *     * * *    * * *           * * *
        * *   * *   * *         * *    * *           * * * *
        *       *   *             *    *           * * * * *
            f)        g)       i)        j)            k)
         Діалог з користувачем реалізувати за допомогою меню.*/
        int r;
        char a;
        cout << "Vvedite rozmir figyr: ";
        cin >> r;
        if (r > 5) {
            cout << "\nVvuberite figyry:\n"
                << "a. Pravui verxnii trukytnuk\n"
                << "b. Livui nuznui trukytnuk\n"
                << "c. Verxnii trukytnuk\n"
                << "d. Nuznui trukytnuk\n"
                << "e. Vertukalnui bant\n"
                << "f. Gorizontalnui bant\n"
                << "g. Livui trukytnuk\n"
                << "i. Pravui trukytnuk\n"
                << "j. Livui verxnii trukytnuk\n"
                << "k. Pravui nuznui trukytnuk\n";
            cin >> a;
            switch (a) {
            case 'a': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i < j) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'b': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i > j) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'c': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i < j && i + j < r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'd': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i > j && i + j > r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'e': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if ((i < j && i + j < r - 1) || (i > j && i + j > r - 1)) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'f': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if ((i > j && i + j < r - 1) || (i < j && i + j > r - 1)) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'g': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i > j && i + j < r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'i': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i < j && i + j > r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'j': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i + j < r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            case 'k': {
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < r; j++) {
                        if (i + j > r - 1) {
                            cout << " * ";
                        }
                        else {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
                    break;
            default:cout << "Ne virno obrana figyra";
            }
        }
        else {
            cout << "\nMalui rozmir dla zobrazenna figyru!\n";
        }
    }
          break;
    case 2: {
        /*2. Користувач вводить число.
            Визначити кількість цифр у цьому числі, порахувати їхню
            суму та середнє арифметичне.Визначити кількість нулів у цьому числі.
            Спілкування з користувачем організувати через меню.*/
        int N, A, C, H, Sum = 0, SA = 0, i;
        cout << "Vvedite chislo: ";
        cin >> N;
        C = N;
        cout << "\nOberite neobxidne:\n"
            << "1. Kilkist cifr v chesli\n"
            << "2. Suma ta seredne arefmetuchne cifr chisla\n"
            << "3. Kilkist nyliv v chesli\n";
        cin >> A;
        switch (A) {
        case 1: {
            i = 0;
            if (N < 0) {
                N *= -1;
            }
            else if (N == 0) {
                N = 1;
            }
            while (N > 0) {
                N /= 10;
                i++;
            }
            cout << i << " cifer v chesli " << C << endl;
        }
              break;
        case 2: {
            i = 0;
            if (N < 0) {
                N *= -1;
            }
            else if (N == 0) {
                cout << "\n0 suma chesla " << C << endl
                    << "0 seredne arefmetuchne chisla " << C << endl;
                break;
            }
            while (N > 0) {
                H = N % 10;
                Sum += H;
                N /= 10;
                i++;
            }
            SA = Sum / i;
            cout << Sum << " suma chesla " << C << endl
                << SA << " seredne arefmetuchne chisla " << C << endl;
        }
              break;
        case 3: {
            i = 0;
            if (N < 0) {
                N *= -1;
            }
            else if (N == 0) {
                cout << "\n1 nyl v chesli " << C << endl;
                break;
            }
            while (N > 0) {
                H = N % 10;
                if (H == 0) {
                    i++;
                }
                N /= 10;
            }
            cout << i << " nyliv v chesli " << C << endl;
        }
              break;
        default:cout << "Ne virnui vubir varianta!\n";
        }
    }
          break;
    case 3: {
        /*3. Написати програму, яка виводить на екран
             шахову дошку із заданим розміром клітинки. Наприклад,
         ***---***---***---***---
         ***---***---***---***---
         ***---***---***---***---
         ---***---***---***---***
         ---***---***---***---***
         ---***---***---***---***
         */
        int N;
        cout << "Vvedite rozmir klitunu shaxovoi doshku: ";
        cin >> N;
        for (int k = 0; k < N * 2; k++) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < N * 2; j++) {
                    if ((j < N && k < N) || (j >= N && k >= N)) {
                        cout << " * ";
                    }
                    else cout << " - ";
                }
            }
            cout << endl;
        }
    }
          break;
    default:cout << "Ne virno zroblenui vubir!\n";
    }
}
