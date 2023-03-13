#include <iostream>
#include <string>
using namespace std;

int main()
{
    string entrada, num1_str, num2_str,num3_str;
    int soma = 0;
    int N = 0;
    cin >> N;
    while(N--){
        num1_str.clear();
        num2_str.clear();
        num3_str.clear();
        cin >> entrada;
        num1_str = entrada.substr(2,2);
        num2_str = entrada.substr(5,3);
        num3_str = entrada.substr(11,2);
        soma = stoi(num1_str) + stoi(num2_str) + stoi(num3_str);
        cout << soma << endl;
    }

    return 0;
}
