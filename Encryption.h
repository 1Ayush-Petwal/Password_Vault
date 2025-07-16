#ifndef ENCRYPT_H
#define ENCRYPT_H
#include<string>

std::string encryption(std::string password, int key, int digit);

std::string decryption(std::string password, int key);

#endif 