// s15_1.cpp
#include <cctype>
#include <cstring>
#include <iostream>

class Word {
    char *p;
    char a[100][20];
    int n;
    char maxWord[20];

  public:
    Word(char *str);
    ~Word();
    int alph(char c) { return isalpha(c); }
    void fun();
    void print();
};

int main(int argc, char const *argv[]) {
    char source[100] = "I will pass the examination.Yes I can.";
    Word word(source);
    word.fun();
    word.print();
    return 0;
}

Word::Word(char *str) {
    p = new char[strlen(str) + 1];
    strcpy(p, str);
}

Word::~Word() {
    if (p)
        delete[] p;
}

void Word::fun() {
    int j = 0, maxlength = 0;
    for (int i = 0, k; *(p + i) != '\0'; i++) {
        for (k = 0; alph(*(p + i)); i++, k++)
            a[j][k] = *(p + i);
        if (k > 0) {
            a[j][k] = '\0';
            if (k > maxlength) {
                strcpy(maxWord, a[j]);
                maxlength = k;
            }
            j++;
            i--;
        }
    }
    n = j;
}

void Word::print() {
    std::cout << "Test string:" << p << '\n';
    std::cout << "word:\n";
    for (int i = 0; i < n; i++)
        std::cout << a[i] << '\n';
    std::cout << "longest word:" << maxWord << '\n'
              << "length=" << strlen(maxWord) << '\n';
}
