# NOX Finder

This project leverages sensor technology to monitor environmental variables in real-time and uses machine learning models to detect toxic emissions.


## Requirements

- Python 3.x
- CMake
- A C++ compiler

## Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/Mudhathir/NOX-Finder-.git
   cd NOX-Finder
Install dependencies
pip install -r requirements.txt

Build C++
mkdir build
cd build
cmake ..
make

Run Project:
./NOXFinder


Description
sensor_data.h/cpp: Defines a class to simulate reading sensor data.
main.cpp: Main C++ program that integrates with Python to use a machine learning model for NOX detection.
nox_model.py: Python script to load the pre-trained model and make predictions.
train_model.py: Python script to generate synthetic data, train the model, and save it as nox_model.pkl.


Training the Model
Run the training script to generate and save the model:
python train_model.py


### Explanation:
- **CMakeLists.txt**: Configures the CMake build system.
- **sensor_data.h/cpp**: Simulates sensor data.
- **main.cpp**: Main program that uses Pybind11 to call the Python script for NOX detection.
- **nox_model.py**: Python script for loading the model and making predictions.
- **train_model.py**: Python script for training and saving the machine learning model.
- **requirements.txt**: Lists the Python dependencies.
