#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, w, x, y;
    char a[32][32], k = 48;
    cin >> n >> m;
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            a[i][j] = 48;
        }
    }
    cin >> w;
    for (i = 0;i < w;i++) {
        cin >> x >> y;
        a[x - 1][y - 1] = 42;
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            if (a[i][j] != 42) {
                if ((!i && !j) || (!i && j == m - 1) || (i == n - 1 && !j) || (i == n - 1 && j == m - 1)) {
                    if (!i && !j) {
                        if (a[0][1] == 42)
                            k++;
                        if (a[1][0] == 42)
                            k++;
                        if (a[1][1] == 42)
                            k++;
                        a[i][j] = k;
                        k = 48;
                    }
                    if (!i && j == m - 1) {
                        if (a[0][m - 2] == 42)
                            k++;
                        if (a[1][m - 1] == 42)
                            k++;
                        if (a[1][m - 2] == 42)
                            k++;
                        a[i][j] = k;
                        k = 48;
                    }
                    if (i == n - 1 && !j) {
                        if (a[n - 2][0] == 42)
                            k++;
                        if (a[n - 1][1] == 42)
                            k++;
                        if (a[n - 2][1] == 42)
                            k++;
                        a[i][j] = k;
                        k = 48;
                    }
                    if (i == n - 1 && j == m - 1) {
                        if (a[n - 1][m - 2] == 42)
                            k++;
                        if (a[n - 2][m - 1] == 42)
                            k++;
                        if (a[n - 2][m - 2] == 42)
                            k++;
                        a[i][j] = k;
                        k = 48;
                    }
                }
                else {
                    if (!j || !i || i == n - 1 || j == m - 1) {
                        if (!j) {
                            if (a[i - 1][0] == 42)
                                k++;
                            if (a[i + 1][0] == 42)
                                k++;
                            if (a[i - 1][1] == 42)
                                k++;
                            if (a[i][1] == 42)
                                k++;
                            if (a[i + 1][1] == 42)
                                k++;
                            a[i][j] = k;
                            k = 48;
                        }
                        if (!i) {
                            if (a[0][j - 1] == 42)
                                k++;
                            if (a[0][j + 1] == 42)
                                k++;
                            if (a[1][j - 1] == 42)
                                k++;
                            if (a[1][j] == 42)
                                k++;
                            if (a[1][j + 1] == 42)
                                k++;
                            a[i][j] = k;
                            k = 48;
                        }
                        if (i == n - 1) {
                            if (a[n - 1][j - 1] == 42)
                                k++;
                            if (a[n - 1][j + 1] == 42)
                                k++;
                            if (a[n - 2][j - 1] == 42)
                                k++;
                            if (a[n - 2][j] == 42)
                                k++;
                            if (a[n - 2][j + 1] == 42)
                                k++;
                            a[i][j] = k;
                            k = 48;
                        }
                        if (j == m - 1) {
                            if (a[i - 1][j] == 42)
                                k++;
                            if (a[i + 1][j] == 42)
                                k++;
                            if (a[i - 1][j - 1] == 42)
                                k++;
                            if (a[i][j - 1] == 42)
                                k++;
                            if (a[i + 1][j - 1] == 42)
                                k++;
                            a[i][j] = k;
                            k = 48;
                        }
                    }
                    else {
                        if (a[i - 1][j - 1] == 42)
                            k++;
                        if (a[i - 1][j] == 42)
                            k++;
                        if (a[i - 1][j + 1] == 42)
                            k++;
                        if (a[i][j - 1] == 42)
                            k++;
                        if (a[i][j + 1] == 42)
                            k++;
                        if (a[i + 1][j - 1] == 42)
                            k++;
                        if (a[i + 1][j] == 42)
                            k++;
                        if (a[i + 1][j + 1] == 42)
                            k++;
                        a[i][j] = k;
                        k = 48;
                    }
                }
            }
        }
    }
    for (i = 0;i < n;i++) {
        for (j = 0;j < m;j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
