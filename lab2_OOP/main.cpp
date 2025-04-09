#include "func.h"
#include <locale>

using namespace std;

int main() {
    system("chcp 65001 > nul");

    Triangle t;
    cout << "Введіть координати трикутника (x1 y1 x2 y2 x3 y3): ";
    cin >> t.A.x >> t.A.y >> t.B.x >> t.B.y >> t.C.x >> t.C.y;

    cout << "Вершина A(" << t.A.x << ", " << t.A.y << "), B(" << t.B.x << ", " << t.B.y << "), C(" << t.C.x << ", " << t
            .C.y << ")" << endl;

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
            while (true) {
                cout << "Введіть кількість точок для перевірки: ";
                cin >> n;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Некоректне введення! Введіть додатне число " << endl;
                    continue;
                }
                if (n > 0) {
                    break;
                }
                cout << "Некоректний вибір! Введіть додатне число" << endl;
            }

            for (int i = 0; i < n; ++i) {
                Point p;
                cout << "Введіть координати точки (x y): ";
                cin >> p.x >> p.y;

                if ((p.x == t.A.x && p.y == t.A.y) || (p.x == t.B.x && p.y == t.B.y) || (
                        p.x == t.C.x && p.y == t.C.y)) {
                    cout << "Точка рівна вершині трикуткика" << endl;
                        }
                else if ( pointOnLine(p, t.A, t.B) || pointOnLine(p, t.B, t.C) || pointOnLine(p, t.C, t.A)) {
                    cout << "Точка лежить на межі трикутника" << endl;
                }
                else if (t.containsVec(p)) {
                    cout << "Точка належить трикутнику" << endl;
                } else {
                    cout << "Точка не належить трикутнику" << endl;
                }
            }
            break;
        case 2:
            int k;
            while (true) {
                cout << "Введіть кількість точок для перевірки: ";
                cin >> k;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Некоректне введення! Введіть додатне число" << endl;
                    continue;
                }
                if (k > 0) {
                    break;
                }
                cout << "Некоректний вибір! Введіть додатне число" << endl;
            }

            for (int i = 0; i < k; ++i) {
                Point p;
                cout << "Введіть координати точки (x y): ";
                cin >> p.x >> p.y;

                if ((p.x == t.A.x && p.y == t.A.y) || (p.x == t.B.x && p.y == t.B.y) || (
                        p.x == t.C.x && p.y == t.C.y)) {
                    cout << "Точка рівна вершині трикуткика" << endl;
                }
                else if ( pointOnLine(p, t.A, t.B) || pointOnLine(p, t.B, t.C) || pointOnLine(p, t.C, t.A)) {
                    cout << "Точка лежить на межі трикутника" << endl;
                }
                else if (t.containsVec(p)) {
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
