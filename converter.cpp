#include <iostream>
#include <cctype>
#include <cstdint>
#include <cstddef>
#include "converter.h"

/*
 * 関数名 : convertText
 * 機能   : 入力された文字列を
 *          A=1 ～ Z=26 に変換して表示する
 * 引数   : text - 変換対象の文字列
 * 戻り値 : なし
 */
void ConvertText(const std::string& text) {
    int32_t result{0};

    // 1文字ずつ処理
    for (std::size_t i{0}; i < text.length(); i++) {

        // 大文字へ変換
        int32_t upperChar{std::toupper(text[i])};

        if ((upperChar >= 'A') && (upperChar <= 'Z')) {

            // A=1 ～ Z=26
            int32_t number{upperChar - 'A' + 1};
            result += number;

            // 変換結果を表示
            std::cout << text[i] << " = " << number << std::endl;
        }
    }

    // 変換結果表示
    std::cout << "変換結果 = " << result << std::endl;
}