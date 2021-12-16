// s15_3.cpp
#include <cstring>
#include <iostream>

class Str {
  private:
    char *p;

  public:
    Str(char *s);
    ~Str();
    void fun(char *s, int n1, int n2);
    void print() { std::cout << "result=" << p << '\n'; }
};

int main(int argc, char const *argv[]) {
    int begin, len;
    char s1[] = "abcdefg", s2[] = "12345678";
    Str s(s1);
    std::cout << "string1=" << s1 << "\nstring2=" << s2
              << "\n输入起始的位置和字符个数：";
    std::cin >> begin >> len;
    s.fun(s2, begin, len);
    s.print();
    return 0;
}

Str::Str(char *s) {
    p = new char[strlen(s) + 1];
    strcpy(p, s);
}

Str::~Str() {
    if (p)
        delete[] p;
}

void Str::fun(char *s, int n1, int n2) {
    int len = strlen(p) + n2 + 1;
    char *tmp = new char[strlen(p) + 1];
    strcpy(tmp, p);
    delete[] p;
    p = new char[len];
    strcpy(p, tmp);
    delete[] tmp;
    strncat(p, s + n1, n2);
}
