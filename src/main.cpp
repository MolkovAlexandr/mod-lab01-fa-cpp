// Copyright 2022 UNN-IASR
#include<iostream>
#include<string>
#include "fun.h"

int main() {
setlocale(LC_ALL, "1251");

const char* s1 = 
"один д2ва три че4тыре пят5ь шесть сем7ь восемь девять дес10ять";

/*
* ФУНКЦИЯ 1:
* Подходящие слова: один, три, шесть, восемь, девять
* Количество подходящих слов: 5
*/

const char* s2 = "One tWo THree FoUr fIve siX SevEn eIght NiNe Ten";

/*
* ФУНКЦИЯ 2:
* Подходящие слова: One, THree, FoUr, SevEn, NiNe, Ten
* Кол-во подходящих слов: 6
* Кол-во строчных латинских букв в подходящих словах: 2 + 3 + 2 + 3 + 2 + 2 = 14
*/

const char* s3 = "ah2 4a asf2u5 ac0psv4 cn132 9fs13la afj2 ac3vk";

/*
* ФУНКЦИЯ 3:
* Кол-во символов: 3 + 2 + 6 + 7 + 5 + 7 + 4 + 5 = 39
* Кол-во слов: 8
* Итоговый ответ: 39 / 8 = 4.875, что округляется до 5
*/

std::cout << "функция 1 вернула значение " << faStr1(s1) << std::endl;
std::cout << "функция 2 вернула значение " << faStr2(s2) << std::endl;
std::cout << "функция 3 вернула значение " << faStr3(s3) << std::endl;

return 0;
}
