#include "sensor_data.h"
#include <vector>
#include <cstdlib>
#include <ctime>

SensorData::SensorData() {
    std::srand(std::time(nullptr)); // use current time as seed for random generator
}

std::vector<float> SensorData::get_sensor_data() {
    std::vector<float> data(5);
    for (auto &val : data) {
        val = static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX);
    }
    return data;
}
