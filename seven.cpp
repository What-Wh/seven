#include <iostream>

using namespace std;

//1 task
//int stepin(int a, int b) {
//    int c = 1;
//    for (int i = 1; i <= b; i++) {
//        c *= a;
//    }
//    return c;
//}

//2 task
//int sum(int a, int b) {
//    int c = 0;
//    for (int i = a; i <= b; i++) {
//        c += i;
//    }
//    return c;
//}

//3 task
//int dos(int a, int b) {
//    int c = 0;
//    int sum = 0;
//    for (int i = a; i <= b; i++) {
//        sum = 0;
//        for (int j = 1; j < i; j++) {
//            if (i % j == 0) {
//                sum += j;
//            }
//        }
//        if (sum == i) {
//            c++;
//        }
//
//    }
//    return c;
//}

//4 task
//void karta(char a, char b) {
//    if ((int)a == 6) {
//        cout << b << "піки";
//    }
//    else if ((int)a == 5) {
//        cout << b << "хрести";
//    }
//    else if ((int)a == 4) {
//        cout << b << "бубни";
//    }
//    else if ((int)a == 3) {
//        cout << b << "чіврви";
//    }
//}


//5 task
//int luckyNumber(int a) {
//    int c = 0;
//    int sum = 0;
//    for (int i = 1; i < 7; i++) {
//        if (i <= 3) {
//            c += a % 10;
//        }
//        else {
//            sum += a % 10;
//        }
//        a = (a - (a % 10)) / 10;
//    }
//    if (c == sum) {
//        return 'Y';
//    }
//    else {
//        return 'N';
//    }
//}

//6 task
//int foundByKey(int a[5], int b, int c) {
//    int d = 0;
//    for (int i = 0; i < b; i++) {
//        if (c == a[i]) {
//            d++;
//        }
//    }
//    return d;
//}

//7 task
//int binarSearch(int a[10], int b, int c) {
//    int middle = (0 + b) / 2;
//    if (a[middle] == c) {
//        return middle;
//    }
//    else if (a[middle] > c) {
//        for (int i = 0; i < middle; i++) {
//            if (c == a[i]) {
//                return i;
//            }
//        }
//    }
//    else {
//        for (int i = middle; i < b; i++) {
//            if (c == a[i]) {
//                return i;
//            }
//        }
//    }
//}

//8 task
//int dod(int a) {
//    int sum = 0;
//    int i = 0;
//    while (a != 0) {
//        sum += (a % 10) * pow(2, i);
//        if (a % 10 == 1) {
//            a = (a - 1) / 10;
//        }
//        else {
//            a /= 10;
//        }
//        i++;
//    }
//    return sum;
//}

int main()
{
    //cout << stepin(3, 3);

    //cout << sum(1, 4);

    //cout << dos(3, 32000);

    /*karta('', 'T');*/

    //cout << (char)luckyNumber(145640);

    /*int a[10] = { 2, 4, 6, 8, 10, 12, 16, 18, 20, 22};
    int b = sizeof(a) / sizeof(a[0]);*/
    //cout << foundByKey(a, b, 3);

    //cout << binarSearch(a, b, 8);

    /*int a = 111000;
    cout << dod(a);*/
}