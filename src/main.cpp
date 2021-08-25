#include "txtformat.h"

#include <fstream>
#include <string>
#include <iostream>
#include <vector>

int main(void) {
    auto inp_file_name = std::string{"test.txt"};
    auto in_file = std::fstream(inp_file_name, std::ios::in);
    
    if (not in_file.is_open()) {
        std::cerr << "Failed to open " << inp_file_name << std::endl;
    } else {
        std::cerr << "Opened " << inp_file_name << std::endl;
        std::string inp;
        auto word_vec = std::vector<std::string>{};
        while (in_file >> inp) {
            // std::cout << inp << "\n";
            word_vec.push_back(inp);
        }
        auto formatted_vec = txtformat::format(word_vec, 20);

        auto out_file_name = std::string{"out.txt"};
        auto out_file = std::fstream(out_file_name, std::ios::out);
        for (auto const& line : formatted_vec) {
            out_file << line << std::endl;
        }
    }
    return 0;
}