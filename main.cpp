#include <iostream>
#include <chrono>
#include <fstream>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    std::ofstream outputFile("/app/output/output.txt");
    for (int i = 0; i < 1000000; ++i) {
        for (int j = 0; j < 20000; ++j) {

        }
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    if (outputFile.is_open()) {
        std::cout << "Время работы программы: " << elapsed.count() << " секунд" << std::endl;
        outputFile.close();
    } else {
        std::cerr << "Unable to open file" << std::endl;
    }

    return 0;
}
