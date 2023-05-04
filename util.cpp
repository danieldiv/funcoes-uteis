// g++ -o res util.cpp && ./res

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include <chrono>
#include <ctime>
#include <ratio>

using namespace std;
using namespace std::chrono;

using type_map = unordered_map<int, pair<string, pair<float, float>>>; // alias para unordered_map

#define loopStr(str) for (long unsigned d_inc = 0; d_inc < str.length(); d_inc++)
#define tolowerStr(str) loopStr(str) str[d_inc] = tolower(str[d_inc])

int main() {

    vector<int> vec;

    for (const auto &it : vec) { cout << it << endl; } // iterador constante (apenas leitura)
    for (auto it = vec.begin(); it != vec.end(); ++it) { cout << *it << endl; } // iterador normal
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) { cout << *it << endl; } // iterador reverso

    string str = "string para teste";
    string sub_str = str.substr(0, 6); // pega substring
    for (auto it = str.begin(); it != str.end(); ++it) { cout << *it << endl; } // iterador normal

    char c = '5';
    int val = c - '0'; // converte char para int

    unordered_map<string, int> map;
    map.insert({ { "a", 91 }, { "b", 21 }, { "c", 312 } });

    vector<std::pair<string, int>> arr;
    for (const auto &item : map)
        arr.emplace_back(item); // cria vector sem precisar de variavel auxiliar

    std::sort(arr.begin(), arr.end(),
        [](const auto &x, const auto &y) {return x.second < y.second; }); // ordena por valor
    for (const auto &[key, value] : arr) { cout << key << " " << value << endl; }

    steady_clock::time_point t1;
    steady_clock::time_point t2;

    t1 = steady_clock::now();
    // codigo
    t2 = steady_clock::now();
    double tempo = duration_cast<duration<double>>(t2 - t1).count();

    string str_M = "Possui caractereS MAiuscUlos";
    tolowerStr(str_M); // converte string para minusculo

    return 0;
}