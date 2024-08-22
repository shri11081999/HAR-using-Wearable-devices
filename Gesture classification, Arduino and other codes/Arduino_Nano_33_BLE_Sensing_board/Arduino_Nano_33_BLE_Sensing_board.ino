#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

// Define the number of features and classes in the human activity recognition model
const int NUM_FEATURES = 6;
const int NUM_CLASSES = 6;

// Define the labels for each activity class
const char* class_labels[NUM_CLASSES] = {"Walking", "Jogging", "Upstairs", "Downstairs", "Sitting", "Standing"};

// Define the weights and biases for the pruned and quantized model
const float weights[NUM_CLASSES][NUM_FEATURES] = {
  { 0.0399012 , -0.03271414, -0.00463339,  0.03064406, -0.02650606,  0.03639705},
  {-0.02507146,  0.02489192, -0.02238457, -0.02601191,  0.0343021 , -0.02535578},
  { 0.04126105, -0.03920125,  0.03324834,  0.03483172, -0.03164514,  0.03197003},
  {-0.02637577,  0.02573715,  0.02168509, -0.03422812, -0.02367386,  0.03162022},
  {-0.02462367,  0.02293585,  0.03104647, -0.02853988, -0.03463439, -0.02315794},
  {-0.03198779,  0.03658172, -0.03076456,  0.03408206,  0.0333672 , -0.02399005}
};

const float biases[NUM_CLASSES] = {-0.1434029, -0.15954353, -0.14740413, -0.156065, -0.15859804, -0.1572812};

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
}

void loop() {
  // Read accelerometer and gyroscope data
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // Convert accelerometer and gyroscope data to floating-point values
  float accel_x = ax / 16384.0;
  float accel_y = ay / 16384.0;
  float accel_z = az / 16384.0;
  float gyro_x = gx / 131.0;
  float gyro_y = gy / 131.0;
  float gyro_z = gz / 131.0;

  // Create input vector for human activity recognition model
  float input_vector[NUM_FEATURES] = {accel_x, accel_y, accel_z, gyro_x, gyro_y, gyro_z};

  // Compute output probabilities for each activity class
  float output_probs[NUM_CLASSES];
  for (int i = 0; i < NUM_CLASSES; i++) {
    output_probs[i] = 0.0;
    for (int j = 0; j < NUM_FEATURES; j++) {
      output_probs[i] += input_vector[j] * weights[i][j];
    }
  }
    // Use the output of the model to determine the detected gesture
  

  // Perform the required action based on the detected gesture
  switch (gesture) {
    case 0:
      // Walking
      Serial.println("Walking");
      break;
    case 1:
      // Jogging
      Serial.println("Jogging");
      break;
    case 2:
      // Upstairs
      Serial.println("Climbing upstairs");
      break;
    case 3:
      // Downstairs
      Serial.println("Climbing downstairs");
      break;
    case 4:
      // Sitting
      Serial.println("Sitting");
      break;
    case 5:
      // Standing
      Serial.println("Standing");
      break;
    default:
      // Unknown gesture
      Serial.println("Unknown gesture");
      break;
  }

  // Wait for a short duration before reading the next set of sensor data
  delay(100);

}
   


