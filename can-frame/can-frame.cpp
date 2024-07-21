#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
#include <thread>

// Define a CAN frame structure
struct CANFrame {
    uint32_t can_id;  // CAN ID
    uint8_t can_dlc;  // Data length code
    uint8_t data[8];  // Data bytes
};

int main() {
    // Initialize random number generator
    std::mt19937 rng(std::time(0)); // Seed the random number generator with the current time
    std::uniform_int_distribution<int> dist_data(0, 255); // For generating random bytes
    std::uniform_int_distribution<int> dist_dlc(1, 8); // For generating random DLC (1 to 8)

    while (true) {
        // Construct a CAN frame
        CANFrame frame;
        frame.can_id = 0x123; // CAN ID

        // Generate a random DLC
        frame.can_dlc = dist_dlc(rng); 

        // Generate random data bytes based on the DLC
        for (int i = 0; i < frame.can_dlc; ++i) {
            frame.data[i] = dist_data(rng);
        }

        // Print the CAN frame
        std::cout << "CAN ID: 0x" << std::hex << std::setw(3) << std::setfill('0') << frame.can_id << std::dec << std::endl;
        std::cout << "Data Length Code: " << static_cast<int>(frame.can_dlc) << std::endl;
        std::cout << "Data: ";
        for (int i = 0; i < frame.can_dlc; ++i) {
            std::cout << "0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(frame.data[i]) << " ";
        }
        std::cout << std::dec << std::endl;

                // Decode and print the data
        std::cout << "Decoded Data: ";
        for (int i = 0; i < frame.can_dlc; ++i) {
            std::cout << static_cast<int>(frame.data[i]) << " ";
        }
        std::cout << std::endl;

        // Sleep for 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
