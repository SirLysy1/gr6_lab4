#include <iostream>
using namespace std;

/*ZADANIE 1*/
/*/int main() {
	string imie = "Marcel";
	cout << "Czesc, " << imie << endl;
	return 0;
}*/

/*ZADANIE 2*/
/*int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << "\n";
    }
    return 0;
}*/

/*ZADANIE 3*/
/*int liczby(int a, int b);
int wyswietlanie(int a, int b);

int main() {
    int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    liczby(a, b);
    wyswietlanie(a, b);
    return 0;
}

int liczby(int a, int b) {
    if (a > b) {
        cout << "Wieksza jest liczba a"<< endl; 
    }
    else if (b > a) {
        cout << "Wieksza jest liczba b"<< endl; 
    }
    else {
        cout << "Liczby sa rowne"<< endl; 
    }
    return 0;
}

int wyswietlanie(int a, int b) {
    if (a > b) {
        cout << a; 
    }
    else if (b > a) {
        cout << b; 
    }
    else {
        cout << a << " " << b; 
    }
    return 0;
}*/

/*ZADANIE 4*/
/*int liczby(int a, int b, int c);
int wyswietlanie(int a, int b, int c);

int main() {
    int a, b, c;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    liczby(a, b, c);
    wyswietlanie(a, b, c);
    return 0;
}

int liczby(int a, int b, int c) {
    if (a > b && a > c) {
        cout << "Najwieksza jest liczba a" << endl;
    }
    else if (b > a && b > c) {
        cout << "Najwieksza jest liczba b" << endl;
    }
    else if (c > b && c > a) {
        cout << "Najwieksza jest liczba c" << endl;
    }
    else {
        cout << "Liczby sa rowne" << endl;
    }
    return 0;
}

int wyswietlanie(int a, int b, int c) {
    if (a > b && a > c) {
        cout << a;
    }
    else if (b > a && b > c) {
        cout << b;
    }
    else if (c > b && c > a) {
        cout << c;
    }
    else {
        cout << a << " " << b << " " << c;
    }
    return 0;
}*/

/*ZADANIE 5*/
/*float trojkat(float a, float h);

int main() {
    float a, h;
    cout << "Podaj dlugosc podstawy: ";
    cin >> a;
    cout << "Podaj wysokosc: ";
    cin >> h;
    float pole1 = (a * h);
    cout << "Podwojone pole trojkata wynosi: " << pole1 << endl;
    trojkat(a, h);
    return 0;
}

float trojkat(float a, float h) {
    float pole2 = (a * h) / 2;
    cout << "Pole trojkata wynosi: " << pole2 << endl;
    return 0;
}*/

/*ZADANIE 6*/
/*int main() {
    int n;
    cout << "Podaj liczbe naturalna wieksza od 0: ";
    cin >> n;
    if (n <= 0) {
        cout << "Liczba musi byc wieksza od 0!" << endl;
        return 0;
    }
    else {
        for(int i=1; i <= n; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    }
}*/

/*ZADANIE 7*/
/*int main() {
	int o1, w1, o2, w2;
    cout << "Podaj pierwsza ocene: ";
    cin >> o1;
	cout << "Podaj wage pierwszej oceny: ";
	cin >> w1;
	cout << "Podaj druga ocene: ";
	cin >> o2;
	cout << "Podaj wage drugiej oceny: ";
	cin >> w2;
	float s = (o1 * w1 + o2 * w2) / (w1 + w2);
	cout << "Srednia wazona wynosi: " << s << endl;
}*/

/*ZADANIE 8*/
/*int main() {
    int a, b;
	cout << "Podaj pierwsza przyprostokatna: ";
	cin >> a;
	cout << "Podaj druga przyprostokatna: ";
	cin >> b;
	int c = sqrt(a * a + b * b);
	cout << "Przeciwprostokatna wynosi: " << c << endl;
}*/

/*ZADANIE 9*/
/*int main() {
    int p = 0;
    while (p == 0) {
        float x, y, w;
        char z;
        cout << "Podaj pierwsza liczbe: ";
        cin >> x;
        cout << "Podaj znak dzialania (+, -, *, /): ";
        cin >> z;
        cout << "Podaj druga liczbe: ";
        cin >> y;
        switch (z) {
            case '+':
                w = x + y;
                cout << "Wynik dzialania to: " << w << endl;
                break;
            case '-':
                w = x - y;
                cout << "Wynik dzialania to: " << w << endl;
                break;
            case '*':
                w = x * y;
                cout << "Wynik dzialania to: " << w << endl;
                break;
            case '/':
                if (y == 0) {
                    cout << "!!!!!Nie mozna dzielic przez 0!!!!!!" << endl;
                } else {
                    w = x / y;
                    cout << "Wynik dzialania to: " << w << endl;
                }
                break;
            default:
                cout << "Nieznany znak dzialania!" << endl;
        }
        cout << "Czy chcesz zakonczyc dzialanie programu? (0=NIE, 1=TAK): ";
        cin >> p;
    }
}*/

/*ZADANIE 10*/
/*int main() {
    int a;
    float s = 0;
    float l;
    cout << "Ile liczb chcesz zsumowac: ";
    cin >> a;
	if (a <= 0) {
		cout << "Liczba musi byc wieksza od 0!" << endl;
		cout << "Ile liczb chcesz zsumowac: ";
		cin >> a;
	}
    else {
        for (int i = 1; i <= a; i++) {
            cout << "Podaj liczbe nr " << i << ": ";
            cin >> l;
            s += l;
        }
        cout << "Suma podanych liczb to: " << s << endl;
        return 0;
    }
}*/

/*ZADANIE 11*/
/*int main() {
    float a, b, o;
	cout << "Podaj dlugosc pierwszego boku: ";
	cin >> a;
	cout << "Podaj dlugosc drugiego boku: ";
    cin >> b;
	o = 2 * (a + b);
	cout << "Obwod prostokata wynosi: " << o << endl;
}*/

/*ZADANIE 12*/
/*int main() {
	int a, b, c, o;
	cout << "Podaj pierwsza krawedz: ";
	cin >> a;
	cout << "Podaj druga krawedz: ";
	cin >> b;
	cout << "Podaj trzecia krawedz: ";
	cin >> c;
    o = a * b * c;
	cout << "Objetosc prostopadloscianu wynosi: " << o << endl;
}*/

/*ZADANIE 13*/
/*int main() {
    int a, b, p;
	cout << "Podaj liczbe do spotegowania: ";
    cin >> a;
	cout << "Podaj wykladnik potegi: ";
    cin >> b;
	if (a <= 0 || b <= 0) {
		cout << "Liczby maja byc wieksze od 0!" << endl;
        cout << "Podaj liczbe do spotegowania: ";
        cin >> a;
        cout << "Podaj wykladnik potegi: ";
        cin >> b;
	}
    else {
        p = 1;
        for (int i = 1; i <= b; i++) {
            p *= a;
        }
        cout << "Wynik potegi to: " << p << endl;
    }
}*/

/*ZADANIE 14*/
/*int main() {
    int n;
    cout << "Podaj liczbe naturalna wieksza od 0: ";
    cin >> n;
    if (n <= 0) {
        cout << "Liczba musi byc wieksza od 0!" << endl;
        cout << "Podaj liczbe naturalna wieksza od 0: ";
        cin >> n;
    }
    else {
		int s = 1;
		for (int i = 1; i <= n; i++) {
            s *= i;
        }
        cout << "Silnia liczby " << n << " to: " << s << endl;
    }
}*/

/*ZADANIE 15.1*/
/*int main() {
    int n, p;
    cout << "Podaj wykladnik potegi: ";
    cin >> n;
    if (n <= 0) {
        cout << "Liczby maja byc wieksze od 0!" << endl;
        cout << "Podaj wykladnik potegi: ";
        cin >> n;
    }
    else {
        p = 1;
        for (int i = 1; i <= n; i++) {
            p *= 2;
        }
        cout << "Wynik potegi to: " << p << endl;
    }
}*/

/*ZADANIE 15.2*/
/*int main() {
    int n, p;
    cout << "Podaj wykladnik potegi: ";
    cin >> n;
    if (n <= 0) {
        cout << "Liczby maja byc wieksze od 0!" << endl;
        cout << "Podaj wykladnik potegi: ";
        cin >> n;
    }
    else {
		p = pow(2, n);
        cout << "Wynik potegi to: " << p << endl;
    }
}*/

/*ZADANIE 16*/
/*int main() {
    int sn, il, iw = 0;
	cout << "Podaj szczesliwy numerek: ";
	cin >> sn;
	cout << "Podaj ile liczb losowac [1-10]: ";
	cin >> il;
    for (int i = 0; i < il; ++i) {
        int l = (rand() % 10) + 1;
        cout << l << " ";
        if (l == sn) {
            iw++;
        }
    }
    cout << "Liczba " << sn << " wystapila " << iw << " razy." << endl;
}*/
