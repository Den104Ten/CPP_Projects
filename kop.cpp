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


#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a / 2 + a % 2;
    int y = b / 2 + b % 2;
    int z = c / 2 + c % 2;

    cout << x + y + z;
    return 0;
}



