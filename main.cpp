#include <iostream>
#include <iostream>
#include <string>
#include <stack>


using namespace std;
int main(int argc, char *argv[]) {
    string string3, string4;
    string s1 = argv[1];
    string s2=s1;
    stack<string> string1;
    int cont = 0;


    if (s1.size() == s2.size()) //verifica quantidade de cacarter, se for diferente, não é anagrama//
    {
        for (int i = 0; i < s1.size(); i++) {        //copia caracter por caracter da string original, e //
            string3 = s1[i];                         //  coloca em nova string e vai adicionando 1 x 1 a pilha//
            string1.push(string3);
        }

        for (int i = 0; i < s1.size(); i++) {      // cria nova string, onde le cada posição da pilha e
            string4 = string4 + string1.top();     // incrementa na nova string, ficando inversa a original//
            string1.pop();
        }
        if (string4 == s2) {                       //compara a string1 que esta invertida agora, com a string2
            cout << "VERDADEIRO" << endl;           // nessa stiuação identificar anagrama comum ex: amor roma//
        } else {
            cout << "FALSO" << endl;
        }
    } else {
        cout << "FALSO" << endl; //aqui é o if do inicio, sizeA != sizeB//
    }


}