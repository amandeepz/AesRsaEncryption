# Encryption using AES and RSA Algorithms
This project demonstrates AES and RSA encryption techniques implemented using standard C++ libraries. The project provides simple implementations of these encryption methods without relying on external cryptographic libraries like OpenSSL.

## What are AES and RSA Algorithms?

### AES (Advanced Encryption Standard)
AES is a symmetric encryption algorithm widely used for securing data. It operates on fixed-size blocks and uses a secret key for both encryption and decryption. In this project, we simulate AES encryption using a simple XOR-based method for demonstration purposes.

### RSA (Rivest-Shamir-Adleman)
RSA is an asymmetric encryption algorithm that uses a pair of public and private keys. The encryption process involves modular exponentiation to secure messages. In this project, a basic RSA encryption method is implemented using small prime numbers and exponentiation.

## Sample Output
```
Enter a string to encrypt: Hello
AES Encrypted Output: 3C05A0A37E
RSA Encrypted Output: 3000 1313 745 745 2185

Enter a string to encrypt: Hello with Space
AES Encrypted Output: 4F7BAFB7485F84D53453991A07DECB00
RSA Encrypted Output: 3000 1313 745 745 2185 1992 1107 3179 884 2170 1992 2680 612 1632 281 1313

Enter a string to encrypt: Hello with Space and Numbers 123
AES Encrypted Output: 6837FE45B4FC390085272B2383422AE2CBD9D4E11371447CEEA21F016FD441DD
RSA Encrypted Output: 3000 1313 745 745 2185 1992 1107 3179 884 2170 1992 2680 612 1632 281 1313 1992 1632 2235 1773 1992 3165 2160 2271 2570 1313 2412 1230 1992 2906 538 368

Enter a string to encrypt: Hello with Space and Numbers 4562 and Symbols @$&()
AES Encrypted Output: 60C9D64BD6A7DC5DE0C855D010FAF86ADE95E1DAC6CCB0BF13372ABD2EC5F4571A8CDB49DDA7F84DF9C21AEF13BBDB2BD8DCA6
RSA Encrypted Output: 3000 1313 745 745 2185 1992 1107 3179 884 2170 1992 2680 612 1632 281 1313 1992 1632 2235 1773 1992 3165 2160 2271 2570 1313 2412 1230 1992 529 1802 1962 538 1992 1632 2235 1773 1992 2680 487 2271 2570 2185 745 1230 1992 1577 46 891 642 3199

```
## Conclusion

This project provides a fundamental understanding of how AES and RSA encryption work using standard C++ libraries. While the implementations are simplified, they demonstrate the core concepts of symmetric and asymmetric encryption methods. Future enhancements could involve integrating robust cryptographic libraries for real-world security applications.
