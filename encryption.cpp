#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <bitset>
#include <sstream>

#define AES_KEYLEN 32 // 256-bit key
#define AES_IVLEN 16  // 128-bit IV
#define RSA_KEYLEN 2048

// Function to generate a random key of given length
std::vector<unsigned char> generateRandomKey(size_t length) {
    std::vector<unsigned char> key(length);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<unsigned char> distrib(0, 255);
    
    for (size_t i = 0; i < length; i++) {
        key[i] = distrib(gen);
    }
    return key;
}

// Simple XOR-based AES-like encryption (for demonstration purposes only)
std::vector<unsigned char> encryptAES(const std::string &plaintext, const std::vector<unsigned char> &key) {
    std::vector<unsigned char> ciphertext(plaintext.begin(), plaintext.end());
    
    for (size_t i = 0; i < ciphertext.size(); i++) {
        ciphertext[i] ^= key[i % key.size()];
    }
    return ciphertext;
}

// Function to generate a simple RSA-like key pair (basic prime-based key generation simulation)
std::pair<unsigned long long, unsigned long long> generateRSAKeyPair() {
    unsigned long long p = 61, q = 53; // Small prime numbers
    unsigned long long n = p * q;
    unsigned long long phi = (p - 1) * (q - 1);
    unsigned long long e = 17; // Public exponent
    unsigned long long d = 2753; // Private exponent (precomputed for simplicity)
    return {e, n}; // Public key (e, n)
}

// Simple RSA-like encryption (modular exponentiation simulation)
std::vector<unsigned long long> encryptRSA(const std::string &plaintext, unsigned long long e, unsigned long long n) {
    std::vector<unsigned long long> encrypted;
    for (char c : plaintext) {
        unsigned long long enc = 1;
        for (unsigned long long i = 0; i < e; i++) {
            enc = (enc * c) % n;
        }
        encrypted.push_back(enc);
    }
    return encrypted;
}

// Print encrypted data in hex format
void printHex(const std::vector<unsigned char> &data) {
    for (unsigned char c : data) {
        printf("%02X", c);
    }
    printf("\n");
}

// Print RSA-encrypted data
void printRSA(const std::vector<unsigned long long> &data) {
    for (unsigned long long num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter a string to encrypt: ";
    std::getline(std::cin, input);

    // Generate AES key
    std::vector<unsigned char> aesKey = generateRandomKey(AES_KEYLEN);

    // Encrypt with AES
    std::vector<unsigned char> aesEncrypted = encryptAES(input, aesKey);
    std::cout << "AES Encrypted Output: ";
    printHex(aesEncrypted);

    // Generate RSA key pair
    auto [e, n] = generateRSAKeyPair();

    // Encrypt with RSA
    std::vector<unsigned long long> rsaEncrypted = encryptRSA(input, e, n);
    std::cout << "RSA Encrypted Output: ";
    printRSA(rsaEncrypted);

    return 0;
}
