#include "func.h"
#include <locale>

using namespace std;

int main() {
    system("chcp 65001 > nul");

    Triangle t;
    cout << "Введіть координати трикутника (x1 y1 x2 y2 x3 y3): ";
    cin >> t.A.x >> t.A.y >> t.B.x >> t.B.y >> t.C.x >> t.C.y;

    if (t.A.x == t.B.x && t.A.y == t.B.y || t.A.x == t.C.x && t.A.y == t.C.y || t.C.x == t.B.x && t.C.y == t.B.y) {
        cout << "Ви ввели щонайменше 2 однакові точки";
        return 0;
    }

    if (t.isDegenerate()) {
        cout << "Трикутник вироджений!" << endl;
    }

    int methodId = 0;

    while (true) {
        cout << "Який метод використовуємо?" << endl;
        cout << "1. Метод площі (З методички)" << endl;
        cout << "2. Альтернативний метод (векторний добуток)" << endl;
        cin >> methodId;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Некоректне введення! Введіть 1 або 2." << endl;
            continue;
        }

        if (methodId == 1 || methodId == 2) {
            break;
        }

        cout << "Некоректний вибір! Введіть 1 або 2." << endl;
    }

    switch (methodId) {
        case 1:
            int n;
            cout << "Введіть кількість точок для перевірки: ";
            cin >> n;

            for (int i = 0; i < n; ++i) {
                Point p;
                cout << "Введіть координати точки (x y): ";
                cin >> p.x >> p.y;

                if (t.contains(p)) {
                    cout << "Точка належить трикутнику" << endl;
                } else {
                    cout << "Точка не належить трикутнику" << endl;
                }
            }
            break;
        case 2:
            int k;
            cout << "Введіть кількість точок для перевірки: ";
            cin >> k;

            for (int i = 0; i < k; ++i) {
                Point p;
                cout << "Введіть координати точки (x y): ";
                cin >> p.x >> p.y;

                if ((p.x == t.A.x && p.y == t.A.y) || (p.x == t.B.x && p.y == t.B.y) || (
                        p.x == t.C.x && p.y == t.C.y)) {
                    cout << "Точка рівна вершині трикуткика" << endl;
                } else if (t.containsVec(p)) {
                    cout << "Точка належить трикутнику" << endl;
                } else {
                    cout << "Точка не належить трикутнику" << endl;
                }
            }
            break;

        default:
            break;
    }


    return 0;
}
