#include<iostream>
using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    string groups[n];
//
//    for (int i = 0; i < n; i++) {
//        cin >> groups[i];
//    }
//
//    for (string name : groups) {
//        cout << name << endl;
//    }
//
//
//    return 0;
//}


//int a;
//
//
//int main() {
//    int grade[3]; //(?)(?)(?) 12Byte
//
//    cout << grade[0] << endl;
//
//    grade[0] = 90; //kor
//    grade[1] = 90; //mat
//    grade[2] = 90; //eng
//
//    cout << grade[0] << endl;
//
//    int grade2[] = { 88,78,93 };
//
//    cout<<grade2[1]<<endl;
//
//    //반복문을 써서 총점과 평균 출력
//
//    int i;
//    int sum = 0;
//    
//
//    for (i = 0; i < 3; i++)
//        sum += grade2[i];
//
//    cout << sum/3.0 << endl;
//
//
//    return 0;
//}

//int main() {
//    int n;
//    scanf_s("%d", &n);
//    int *Arr = new int[n];
//    int i;
//    for (i = 0; i < n; i++)
//        scanf_s("%d", &Arr[i]);
//    for (i = n-1; i >= 0; i--) {
//        printf("%d ", Arr[i]);
//    }
//
//    delete Arr;
//
//    return 0;
//}

int main() {
    int i,n;
    int max,min = 0;
    int Arr[n];
    for (i = 0; i < n; i++)
        cin >> Arr[i];
    for (i = 0; i < n; i++) {
        if (Arr[i] > max)
            max = Arr[i];
    }
    for (i = 0; i < n; i++) {
        if (Arr[i] < min)
            min = Arr[i];
    }
    
    cout << max << min << endl;

    return 0;

}