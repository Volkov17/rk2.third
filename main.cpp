#include <iostream>
using namespace std;

int main()
{
    int n, i, j, a, b, t;
    cin >> a >> b;
    int arr[a][b];
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            cin >> arr[i][j];
    i = j = 0;
    cin >> n;
    for (t = 0; t < n; t++)
        while (true) {
            swap(arr[0][0], arr[i][j]);
            if (i == 0 && j == b - 1) {
                i++;
                continue;
            }
            else if (i == 0) {
                j++;
                continue;
            }
            if (i == a - 1 && j == b - 1) {
                j--;
                continue;
            }
            else if (j == b - 1) {
                i++;
                continue;
            }
            if (i == a - 1 && j == 0) {
                i--;
                continue;
            }
            else if (i == a - 1) {
                j--;
                continue;
            }
            if (i == 1 && j == 0) {
                i = j = 0;
                break;
            }
            else if (j == 0) {
                i--;
                continue;
            }
        }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
