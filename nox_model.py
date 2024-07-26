import numpy as np
import joblib

# Load the pre-trained model
model = joblib.load('nox_model.pkl')

def detect_nox(sensor_data):
    sensor_data = np.array(sensor_data).reshape(1, -1)
    prediction = model.predict(sensor_data)
    return bool(prediction[0])
