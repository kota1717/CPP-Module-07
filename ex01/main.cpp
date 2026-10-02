/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:01:37 by ikota             #+#    #+#             */
/*   Updated: 2026/10/02 13:30:25 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void display_const_num(const int& num) {
	std::cout << num << " ";
}

void display_num(int& num) {
	std::cout << num << " ";
}

void display_string(std::string& str) {
	std::cout << str << " ";
}

void display_const_string(const std::string& str) {
	std::cout << str << " ";
}

int main() {
	int int_arr[10];
	for (int i = 0; i < 10; i++) {
		int_arr[i] = i;
	}
	iter(int_arr, 10, display_const_num);
	std::cout << std::endl;
	iter(int_arr, 10, display_num);
	std::cout << std::endl;

	std::string string_arr[] = {"42", "tokyo"};
	iter(string_arr, 2, display_string);
	std::cout << std::endl;

	iter(string_arr, 2, display_const_string);
	std::cout << std::endl;
}

// テストケースを含む main.cpp ファイルを提出してください。テスト実行ファイルを生成できる十分なコードを含めてください。
// `iter` 関数テンプレートは、あらゆる種類の配列で動作するように設計してください。
// 3番目のパラメータは、インスタンス化された関数テンプレートでも構いません。
// 3番目のパラメータとして渡す関数は、文脈に応じて const 参照または非 const 参照で引数を受け取ることができます。
// `iter` 関数で const 要素と非 const 要素の両方を適切に処理する方法について、十分に検討してください。
