#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

#include <vector>

class SensorData {
public:
    SensorData();
    std::vector<float> get_sensor_data();
};

#endif //SENSOR_DATA_H
