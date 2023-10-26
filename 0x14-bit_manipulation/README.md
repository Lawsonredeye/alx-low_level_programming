# Bit Manipulation and Bitwise Operators
Bit manipulation is a fundamental concept in computer science and programming that involves the manipulation of individual bits within a binary representation of data. It is a powerful technique used to perform various operations at the bit level, allowing for efficient and often low-level control over data.
`Bitwise Operators`  are the tools or operations that enable bit manipulation.

## Bitwise Operators
Bitwise operators are used to perform specific operations on individual bits of binary data. There are several common bitwise operators in most programming languages, including:

1. AND (&): The bitwise AND operator compares each bit of two operands. If both corresponding bits are 1, the result is 1; otherwise, it's 0. It is often used for masking or clearing specific bits.

2. OR (|): The bitwise OR operator compares each bit of two operands. If either corresponding bit is 1, the result is 1. It is used for setting or turning on specific bits.

3. XOR (^): The bitwise XOR (exclusive OR) operator compares each bit of two operands. If the bits are different, the result is 1; if they are the same, the result is 0. XOR is often used for toggling bits.

4. NOT (~): The bitwise NOT operator (also called complement or negation) inverts each bit. It changes 0 to 1 and 1 to 0.

5. Left Shift (<<): The left shift operator moves the bits of a number to the left by a specified number of positions, effectively multiplying the number by 2 raised to the power of the shift amount.

6. Right Shift (>>): The right shift operator moves the bits of a number to the right by a specified number of positions, effectively dividing the number by 2 raised to the power of the shift amount. This is often used for arithmetic shifts.

###Note
when trying to solve tasks using bitwise operators its important to always use a truth table especially when youre having difficulties in remembering what a particular operator is used for.
Also, when we mention bitwise operator its important to note that whenever youre trying to do any specific task then you should convert your value to binary as bitwise operators deals with `0s` and `1s`.
