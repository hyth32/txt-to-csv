#include <fstream>
#include <sstream>
#include <map>
#include <vector>

int main() {
    std::ifstream input("data.txt");
    std::map<int, std::vector<std::string>> data;

    std::string line;
    while (std::getline(input, line)) {
        std::stringstream ss(line);
        int threadNum;
        std::string time;
        std::getline(ss, time, ',');
        threadNum = std::stoi(time);
        std::getline(ss, time, ',');
        data[threadNum].push_back(line);
    }

    for (const auto& pair : data) {
        std::ofstream output(std::to_string(pair.first) + ".csv");
        for (const auto& line : pair.second) {
            output << line << "\n";
        }
    }

    return 0;
}