# 🏃‍♂️ Deep Learning-Based Human Activity Recognition (HAR) Using Wearable Sensors & Edge Computing

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![Python](https://img.shields.io/badge/Python-3.x-brightgreen.svg)](https://www.python.org/)
[![TensorFlow](https://img.shields.io/badge/Framework-TensorFlow-orange.svg)](https://www.tensorflow.org/)

Welcome to the **Deep Learning-Based Human Activity Recognition (HAR) using Wearable Sensors & Edge Computing** project! This repository showcases a cutting-edge project that leverages deep learning techniques, wearable sensors, and edge computing to achieve real-time human activity recognition. The implementation is optimized for low-power devices like the Arduino Nano 33 BLE, making it suitable for practical applications in healthcare, sports, and daily activity monitoring.

## 🚀 Introduction

Human Activity Recognition (HAR) plays a crucial role in various domains such as healthcare, fitness, and surveillance. This project aims to build an efficient HAR system using deep learning models that can run on low-power edge devices like the Arduino Nano 33 BLE. By utilizing wearable sensors, such as accelerometers and gyroscopes, the system recognizes activities such as walking, running, and jumping in real-time. 
The project focuses on creating an end-to-end solution that combines the power of deep learning with edge computing to enable real-time activity recognition while minimizing power consumption and ensuring data privacy.

## ❓ Problem Statement

The primary objective of this project is to develop a scalable and efficient deep learning-based HAR system using wearable sensors. The specific challenges addressed include:
- **Real-time Recognition**: Ensuring accurate and real-time activity recognition using low-power devices.
- **Model Compression**: Reducing the size of deep learning models without sacrificing accuracy, making them deployable on edge devices.
- **Edge Computing**: Deploying models on edge devices to reduce latency and eliminate the need for cloud processing.

📊 Datasets Used
- **UCI-HAR** Dataset: Recognizes six basic activities (walking, standing, sitting, etc.)
- **PAMAP2** Dataset: Identifies more complex activities (cycling, vacuuming, etc.)
- **WISDM** Dataset: Tracks daily activities like running, standing, and sitting

## 🔬 Methodology

The methodology involves the following steps:

1. **Model Development**: Three deep learning models were developed and compared:
   - **CNN 1-D**: A 1D convolutional neural network for extracting temporal features.
   - **CNN-LSTM**: A hybrid model combining CNN with Long Short-Term Memory (LSTM) networks to capture sequential dependencies.
   - **CNN-GRU**: A variant of the hybrid model using Gated Recurrent Units (GRUs) for improved performance.
2. **Model Compression**: The highest-performing models were pruned and quantized to reduce their size by up to 10x, making them suitable for deployment on low-power devices.
3. **Edge Deployment**: The compressed models were deployed on the **Arduino Nano 33 BLE** sensor board for real-time activity recognition.

![image](https://github.com/user-attachments/assets/4a6495b0-662e-47c1-9a6d-417d871b55f6)

## ✨ Features

- **High Accuracy Recognition**: Recognizes various human activities with over 97% accuracy.
- **Edge Computing**: Deploys compressed deep learning models on the Arduino Nano 33 BLE for real-time inference.
- **Low Power Consumption**: Optimized for low-power wearable devices, making it ideal for practical applications in healthcare and fitness.
- **Scalable Solution**: Designed to handle larger datasets and more complex models as needed.

## 🛠️ Technology Stack

- **Python**: Programming language used for the entire project.
- **TensorFlow**: Deep learning framework used to build and train the models.
- **TensorFlow Lite**: Used for model optimization and deployment on microcontrollers.
- **OpenCV**: Library used for sensor data processing.
- **BLEAK**: Bluetooth Low Energy library for communication between the Arduino board and external devices.
- **Arduino Nano 33 BLE**: The hardware used for real-time activity recognition.

## 🛠️ Installation

To set up the project locally:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/deep-learning-har.git
   cd deep-learning-har](https://github.com/shri11081999/HAR-using-Wearable-devices.git

2. Run the application

3. Deploy on Arduino:

Use the Arduino IDE to upload the arduino_code/har_inference.ino file to your Arduino Nano 33 BLE Sense board.

## 📸 Result Screenshots

![image](https://github.com/user-attachments/assets/44347356-5572-4a1e-991b-cbdad0f6a255)
![image](https://github.com/user-attachments/assets/fc152c2e-a86c-47e4-a3fb-281767616e4d)

## 📊 Results

The system achieved excellent performance across all datasets, with significant improvements in model size and inference speed after compression:
- **UCI-HAR**: 97% accuracy (CNN 1-D)
- **WISDM**: 98% accuracy (CNN-GRU)
- **PAMAP2**: 99% accuracy (CNN 1-D)

After pruning and quantization, the models retained high accuracy while reducing the size by up to 3x.

## 🧑‍💻 What I Learned
During this project, I enhanced my skills in:

- Deep Learning: Building and optimizing deep learning models (CNN-1D, CNN-LSTM, CNN-GRU) for HAR.
- Edge Computing: Deploying optimized models on low-power edge devices (Arduino Nano 33 BLE).
- Model Compression: Implementing pruning and quantization to reduce model size for edge deployment.
- BLE Communication: Using BLE to transmit real-time predictions from the edge device to external systems.
- Problem-Solving: Overcoming challenges related to deploying deep learning models on resource-constrained devices.

## 📝 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 📧 Contact
I am actively seeking job opportunities in AI, Machine Learning, and Edge Computing. Feel free to reach out or connect with me:

Name: Shriniket Dixit
Email: dixitshriniket976@gmail.com

## 🌟 Acknowledgments
Special thanks to my mentor and the entire research team for their guidance during this internship project. 
