#include <iostream>
#include <unistd.h>
using namespace std;

int main(int argc, char **argv)
{
    int opt;
    while ((opt = getopt(argc, argv, "sep")) != -1) {
        switch(opt) {
        case 's':
            int x, y, t, sum;
            cout << "Введите число(от 2 до 4): " << endl;
            cin >> t;
            if (t >= 2 and t <= 4) {
                sum = 0;
                for (int i = 0; i < t; i++) {
                    cin >> x;
                    sum += x;
                }
                cout << sum << endl;
            }
            break;
        case 'e':
            cout << "Введите число(от 2 до 4): " << endl;
            cin >> t;
            if (t >= 2 and t <= 4) {
                cout << "Уменьшаемое: " << endl;
                cin >> x;
                for (int i = 0; i < t; i++) {
                    cin >> y;
                    x -= y ;
                }
                cout << x << endl;
            break;
            }
        case 'p':
            cout << "-p - справка о программе" << endl;
            cout << "-s - сумма вводимых чисел(от 2 до 4)" << endl;
            cout << "-e - разность(от первого числа вычитаются все последующие)" << endl;
            break;
        default:
            cout << "-p - справка о программе" << endl;
            cout << "-s - сумма вводимых чисел(от 2 до 4)" << endl;
            cout << "-e - разность(от первого числа вычитаются все последующие)" << endl;
        }
    }
}
