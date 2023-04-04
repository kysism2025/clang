#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> um;

    if (um.empty()) {
        cout << "unordered_map�� ����ֽ��ϴ�" << endl;
    }

    um.insert(make_pair("key", 1));
    um["banana"] = 2;
    um.insert({ "melon",3 });

    cout << "unordered_map�� ũ��� " << um.size() << " �Դϴ�" << endl;

    // auto�� �ص� ����
    for (pair<string, int> elem : um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
    }

    // find ��� count�� Ȯ�� ����
    if (um.find("banana") != um.end()) {
        um.erase("banana");
    }

    cout << "unordered_map�� ũ��� " << um.size() << " �Դϴ�" << endl;
    for (auto elem : um) {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
    }

    return 0;
}