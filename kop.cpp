/*#include <iostream>
using namespace std;

int main() {
cout « "Hello, World!" « std::endl;
return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
cout « 2 * 3 + 5;
return 0;
}*/


/* // Программа для вывода а + b в красивом формате
#include <iostream>
using namespace std;
int main() {
int a, b;
cin » a » b;
cout « a « " + " « b « " = " « a + b;
return 0;
}*/

/*
#include <iostream>
using namespace std;
int main() {
int a, b;
cin » a » b;
cout « a « " + " « b « " = " « a + b « endl;
cout « a « " - " « b « " = " « a - b;
return 0;
} // endl переносит вывод строки на следующую
*/

/*
#include <iostream>
using namespace std;
int main() {
int v, t, g = 10;
cin » t;
v = g * t;
int vm = v / 2;
int s = vm * t;
cout « "a thing flying: " « s;
return 0;
}
*/


// Программа для вывода округления в большую сторону
// Но если число четное, то округления не будет

/*#include <iostream>
using namespace std;
int main() {
int a, b;
cin » a » b;
cout « (a + b - 1) / b;
return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << b % a;
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x % 10;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = x * 0.1;
    cout << y;
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int a, b, c, c1, d;
    cin >> a; //476
    b = a % 10;
    c = a * 0.1;
    c1 = c % 10;
    d = a * 0.01;
    cout << b + c1 + d;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    cout << (a1 + a2 + a3) / 2;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int k = 0, n = 3, m = 3;
    int a[n][m];
    int i, j;
    for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
    cin >> a[i][j];
    for (i = 0; i < n; i++)
    for (j = 1; j < m; j++)
    if ((a[i-1][j-1] < a[i][j]) && (a[i][j] < a[i+1][j+1])) k++;
    for (i = 0; i < n; i++)
    {
    for (j = 0; j < m; j++)
        {
        cout << a[i][j] << "\t";
        }
    cout << endl;
    }
    cout << k << endl;

}*/

#include <iostream>
using namespace std;
int main() {

    int m,n,k,l,i,j,t,bl;
    char **a;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите m: ";
    cin >> m;
    a = new char*[n];
    for(i = 0;i < n;i++)
        a[i]=new char[m];
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            cout << "Bведите a["<<i<<"]["<<j<<"] ";
            cin >> a[i][j];
        }
    }
    for(i = 0;i < n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << 5 << a[i][j];
        }
        cout<<endl;
        }
        t=0;
        for(i = 0;i < n;i++) {
            for (j = 0; j < m; j++) {
                bl = true;
                for (k = 0; k < (i + 1); k++) {
                    for (l = 0; l < (i + 1); l++) {
                        if (a[i][i] == a[k][l]) {
                            bl = false;
                            break;
                        }
                    }
                    if (bl) t++;
                }
            }
        }
        cout << "Ответ: "<< t <<endl;
        for(i = 0;i < m;i++)
            delete a[i];
        delete []a;
        a = NULL;
        return 0;
}

