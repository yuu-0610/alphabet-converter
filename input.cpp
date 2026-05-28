#include <iostream>
#include <string>
#include <cctype>
#include "input.h"

/*
 * 関数名 : InputText
 * 機能   : ユーザーから文字列を入力する
 *          A～Z以外の文字が入力された場合は再入力させる
 * 引数   : なし
 * 戻り値 : 入力された文字列
 */
std::string InputText() {
    std::string text{""};
    bool isValid{false};

    // 正しい入力まで繰り返す
    while (!isValid) {
        isValid = true;
        std::cout << "文字を入力してください: ";
        std::getline(std::cin, text);

        // 空文字チェック
        if (text.empty()) {
            std::cout << "エラー: 文字を入力してください" << std::endl;
            isValid = false;
            continue;
        }

        // 1文字ずつ確認
        for (std::size_t i{0}; i < text.length(); i++) {
            char c{text[i]};

            // 大文字へ変換
            c = std::toupper(c);

            // A～Z以外をチェック
            if (c < 'A' || c > 'Z') {
                std::cout << "エラー: A～Z の文字のみ入力してください" << std::endl;
                isValid = false;
                break;
            }
        }
    }
    return text;
}