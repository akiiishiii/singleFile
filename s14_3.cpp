// s14_3.cpp
#include <cctype>
#include <cstring>
#include <iostream>

class String {
  private:
    char *s1, *s2;

  public:
    String(char const *str);
    ~String();
    void delsame();
    void show() { std::cout << "s1=" << s1 << "\ns2=" << s2 << '\n'; }
};

int main(int argc, char const *argv[]) {
    String test("concoon");
    test.delsame();
    test.show();
    return 0;
}

String::String(char const *str) {
    size_t len = strlen(str);
    s1 = new char[len];
    s2 = new char[len];
    strcpy(s1, str);
}

String::~String() {
    delete[] s1;
    delete[] s2;
}

void String::delsame() {
    size_t len1 = strlen(s1), len2 = 0;
    bool exist[26 * 2] = {false};
    for (size_t i = 0; i < len1; i++) {
        if (isupper(s1[i])) {
            if (!exist[s1[i] - 'A' + 26]) {
                s2[len2++] = s1[i];
                exist[s1[i] - 'A' + 26] = true;
            }
        } else {
            if (!exist[s1[i] - 'a']) {
                s2[len2++] = s1[i];
                exist[s1[i] - 'a'] = true;
            }
        }
    }
    s2[len2] = '\0';
}
