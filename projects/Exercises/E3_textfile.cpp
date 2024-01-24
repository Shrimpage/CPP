#include <iostream>
#include <fstream>
#include <string>

float calcAverage(int& line_count, int& char_count);
void combineAllRows();

int main () {
    int total_char = 0;
    int total_lines = 0;

    std::string line;
    std::ifstream in_file("E3_textfile.txt");

    if (in_file.is_open()) {
        while (std::getline(in_file, line)) {
            total_char += line.length();
            total_lines += 1;
        }

        in_file.close();
        std::cout << "Line count: " << total_lines << std::endl;
        std::cout << "Total chars: " << total_char << std::endl;
        std::cout << "Average line: " << calcAverage(total_lines, total_char) << std::endl;
    }

    combineAllRows();

    return 0;
}

float calcAverage(int& line_count, int& char_count) {
    return (float)char_count/line_count;
}

void combineAllRows() {
    std::ifstream in_file("E3_textfile.txt");
    std::ofstream out_file("new_file.txt");

    std::string readline;

    if(in_file.is_open()) {
        while (std::getline(in_file, readline)) {
            out_file << readline;
        }
    }
    in_file.close();
    out_file.close();
}