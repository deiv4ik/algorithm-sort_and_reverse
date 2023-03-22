#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, string>> data;
    int count;
    cin >> count;
    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cin >> name >> age;
        data.push_back({age, name});
    }

    sort(data.begin(), data.end());
    reverse(data.begin(), data.end());

    for (const auto& x : data) {
        cout << x.second << endl;
    }


    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
}
