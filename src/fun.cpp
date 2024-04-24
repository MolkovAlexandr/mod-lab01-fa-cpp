// Copyright 2022 UNN-IASR
#include "fun.h"
#include <string.h>
#include <iostream>

unsigned int faStr1(const char *str) {
int count_digits = 0;
int count_words = 0;

for (int i = 0; i < strlen(str); i++) {
if (str[i] > 47 && str[i] < 58)count_digits++;

if (str[i] == ' ' || i == strlen(str) - 1) {
if (count_digits == 0)count_words++;
count_digits = 0;
}
}

return count_words;
}

unsigned int faStr2(const char *str) {
int count_lowercase = 0;
int count_words = 0;
bool fits = false;

for (int i = 0; i < strlen(str); i++) {
if (str[i - 1] == ' ' || i == 0) {
if (str[i] > 64 && str[i] < 91) {
fits = true;
count_words++;
} else fits = false;
}

if (fits && str[i] > 96 && str[i] < 123)count_lowercase++;
}

return count_lowercase;
}

unsigned int faStr3(const char *str) {
double count_symbols = 0;
double count_words = 0;

for (int i = 0; i < strlen(str); i++) {
if (str[i] == ' ' || i == strlen(str) - 1)count_words++;
if (str[i] != ' ')count_symbols++;
}

double result = count_symbols / count_words;

if (result - (int)(count_symbols / count_words) > 0.5) return result + 1; else return result;
}
