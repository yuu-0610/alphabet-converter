#include <iostream>
#include <windows.h>
#include "input.h"
#include "converter.h"

int main() {
    // コンソールをUTF-8に固定（文字化け対策）
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string text{InputText()};
    ConvertText(text);

    return 0;
}