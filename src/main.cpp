// Copyright 2022 UNN-IASR
#include<iostream>
#include<string>
#include "fun.h"

int main() {
setlocale(LC_ALL, "1251");

const char* s1 = 
"один д2ва три че4тыре пят5ь шесть сем7ь восемь девять дес10ять";

const char* s2 = 
"One tWo THree FoUr fIve siX SevEn eIght NiNe Ten";

const char* s3 = 
"ah2 4a asf2u5 ac0psv4 cn132 9fs13la afj2 ac3vk";

std::cout << "функция 1 вернула значение " << faStr1(s1) << std::endl;
std::cout << "функция 2 вернула значение " << faStr2(s2) << std::endl;
std::cout << "функция 3 вернула значение " << faStr3(s3) << std::endl;

return 0;
}
