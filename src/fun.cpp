// Copyright 2022 UNN-IASR
#include "fun.h"
#include <string.h>
#include <iostream>

unsigned int faStr1(const char* str) {
int count_digits = 0;
int count_words = 0;

for (int i = 0; i < strlen(str); i++) {
if (str[i] > 47 && str[i] < 58)count_digits++;

if (str[i] == ' ' || i == strlen(str) - 1) {
if (count_digits == 0 && !(((str[i] == ' ' && str[i - 1] == ' ' && i != 0)) 
|| (str[i] == ' ' && i == 0)))count_words++;
count_digits = 0;
}
}

return count_words;
}

unsigned int faStr2(const char* str) {
int count_words = 0;
bool fits = true;
bool capital = false;

for (int i = 0; i < strlen(str); i++) {
if ((str[i] <= 96 || str[i] >= 123) && str[i] != ' ')fits = false;
if (str[i] > 64 && str[i] < 91 && (str[i - 1] == ' ' || i == 0)) {
capital = true; fits = true; 
}

if (str[i] == ' ' || i == strlen(str) - 1) {
if (!(((str[i] == ' ' && str[i - 1] == ' ' && i != 0)) 
|| (str[i] == ' ' && i == 0))) {
count_words++;
if (!(fits && capital))count_words--;
fits = true;
capital = false;
}
}
}

return count_words;
}

unsigned int faStr3(const char* str) {
double count_symbols = 0;
double count_words = 0;

for (int i = 0; i < strlen(str); i++) {
if (i > 0 && str[i - 1] != ' ' && str[i] == ' ' || 
(i == strlen(str) - 1 && str[i] != ' '))count_words++;
if (str[i] != ' ')count_symbols++;
}

double result = count_symbols / count_words;

if (result - static_cast<int>(count_symbols / count_words) > 0.5) {
return result + 1;
} else {
return result;
}
}
