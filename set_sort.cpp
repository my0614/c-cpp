#include <iostream>
#include <set>

using namespace std;

template <typename T>
void print_set(set<T>& s) {
    // 셋의 모든 원소들을 출력하기
    cout << "[ ";
    for (typename set<T>::iterator itr = s.begin(); itr != s.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << " ] " << endl;
}
int main() {
    int n;
    int value;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        s.insert(value);
    }
 
    cout << "순서대로 정렬되서 나온다" << endl;
    print_set(s);

}
