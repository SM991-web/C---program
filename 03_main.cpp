/**
 * The `std::endl` is an I/O manipulator in C++ that is used to insert a newline character (`\n`) into the output stream and flush the stream.
 * 
 * Usage:
 * - It is used when you want to ensure that the output is immediately flushed to the output device (e.g., console).
 * - It is necessary to use `std::endl` when you need to force the output to be written out immediately, which can be important in certain situations like debugging or when interacting with real-time systems.
 * - In most cases, using the newline character (`\n`) is sufficient and more efficient, as it does not force a flush of the output buffer.
 * 
 * Example:
 * std::cout << "Hello, world!" << std::endl; // This will print "Hello, world!" followed by a newline and flush the output stream.
 */
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
