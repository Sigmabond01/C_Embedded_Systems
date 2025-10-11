#include <stdio.h>  // Include the standard input/output header for printf()

// =============================
// FUNCTION: Circular Left Shift
// =============================
// Rotates bits of an 8-bit unsigned integer (value) to the LEFT
// by the number of positions specified by 'shift'.
unsigned int circularLeftShift(unsigned int value, unsigned int shift) {
    // Ensure shift is within 0–7 range using modulo (in case shift >= 8)
    shift = shift % 8;

    // Perform the rotation:
    // 1. Shift bits left by 'shift' → (value << shift)
    // 2. Shift bits right by (8 - shift) → (value >> (8 - shift))
    // 3. OR the results together to wrap around the bits
    // 4. Use '& 0xFF' to keep result within 8 bits (masking out higher bits)
    return ((value << shift) | (value >> (8 - shift))) & 0xFF;
}

// ==============================
// FUNCTION: Circular Right Shift
// ==============================
// Rotates bits of an 8-bit unsigned integer (value) to the RIGHT
// by the number of positions specified by 'shift'.
unsigned int circularRightShift(unsigned int value, unsigned int shift) {
    // Again, normalize shift value to 0–7 range
    shift = shift % 8;

    // Perform the rotation:
    // 1. Shift bits right by 'shift' → (value >> shift)
    // 2. Shift bits left by (8 - shift) → (value << (8 - shift))
    // 3. OR the two results to wrap around the bits
    // 4. Mask with 0xFF to limit result to 8 bits
    return ((value >> shift) | (value << (8 - shift))) & 0xFF;
}

int main() {
    // Declare unsigned integers:
    // 'value' is initialized to 172 (binary 10101100)
    // 'left' and 'right' will hold the rotated results
    unsigned int value = 172, left, right;

    // =====================
    // Perform LEFT rotation
    // =====================
    // Rotate 'value' left by 3 bits
    left = circularLeftShift(value, 3);

    // Display original value in hexadecimal format (0xAC for 172)
    printf("Original value: 0x%x\n", value);

    // Display left-shifted result in hexadecimal format
    printf("Circular LEFT shift by 3: 0x%x\n", left);

    // ======================
    // Perform RIGHT rotation
    // ======================
    // Rotate 'value' right by 2 bits
    right = circularRightShift(value, 2);

    // Display right-shifted result
    printf("Circular RIGHT shift by 2: 0x%x\n", right);

    // Return 0 indicates successful execution
    return 0;
}
