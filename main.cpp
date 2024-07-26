#include <iostream>
#include <vector>
#include "sensor_data.h"
#include <pybind11/embed.h>

namespace py = pybind11;

int main() {
    py::scoped_interpreter guard{};

    SensorData sensor;
    std::vector<float> data = sensor.get_sensor_data();

    py::module_ nox_model = py::module_::import("nox_model");
    py::object detect_nox = nox_model.attr("detect_nox");

    py::list sensor_data;
    for (const auto &val : data) {
        sensor_data.append(val);
    }

    bool result = detect_nox(sensor_data).cast<bool>();

    if (result) {
        std::cout << "NOX detected!" << std::endl;
    } else {
        std::cout << "NOX levels normal." << std::endl;
    }

    return 0;
}
