//
// Created by raphaelsoul on 9/20/18.
//

#include <iostream>
#include <openssl/sha.h>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

std::stringstream sha256(const std::string &data) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX ctx;
    SHA256_Init(&ctx);
    SHA256_Update(&ctx, data.c_str(), data.length());
    SHA256_Final(hash, &ctx);

    std::stringstream ss;
    ss << std::hex << hash;

    return ss;
}

int main () {
    std::string data = "Hello, World";
    std::stringstream hash = sha256(data);

    string hashStr = hash.str();

    stringstream ss;
    char c[2];

    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        sprintf(c,"%02x", (unsigned int)(unsigned char)hashStr[i]);
        ss << c;
    }

    cout << ss.str() << endl;

    return 0;
}