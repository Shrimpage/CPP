#include <iostream>

int main () {
    int arr[5]; // Declare an array of 5 integers

    for(int i = 0; i < 5; i++) { // Fill the array with integers
        arr[i] = i * 100;
    }

    for(int i = 0; i < 5; i++) {
        char* bytePointer = reinterpret_cast<char*>(&arr[i]);

        for(size_t j=0; j < sizeof(int); j++) {
            std::cout << "Byte " << j+1 << " at address " << (void*)(bytePointer+j) << " : " << static_cast<int>(bytePointer[j]) << std::endl;
        }
    }
}