# FizzBuzz Project

This project implements the classic FizzBuzz problem in C. The program takes two integer arguments and checks all the numbers between these arguments (inclusive). Depending on the value of each number, it prints either "Fizz", "Buzz", "FizzBuzz", or the number itself.

## How It Works

The FizzBuzz program takes two integer arguments: `term1` and `term2`. It then iterates through all the numbers from `term1` to `term2` (inclusive) and applies the following rules:

- If a number is divisible by 3, it prints "Fizz".
- If a number is divisible by 5, it prints "Buzz".
- If a number is divisible by both 3 and 5, it prints "FizzBuzz".
- If a number does not meet any of the above conditions, it prints the number itself.

## Usage

To compile and run the program, follow these steps:

1. **Clone the repository:**
    ```sh
    git clone https://github.com/yourusername/fizzbuzz.git
    ```

2. **Navigate to the project directory:**
    ```sh
    cd fizzbuzz
    ```

3. **Compile the program:**
    ```sh
    make
    ```

4. **Run the program with two integer arguments:**
    ```sh
    ./fizzbuzz <term1> <term2>
    ```

   For example:
    ```sh
    ./fizzbuzz 1 15
    ```

   This command will output:
    ```
    1
    2
    Buzz
    4
    Fizz
    Buzz
    7
    8
    Buzz
    Fizz
    11
    Buzz
    13
    14
    FizzBuzz
    ```

## Error Handling

The program includes basic error handling for incorrect usage:
- If the number of arguments is not exactly two, the program prints a usage message and exits with an error code.
- If the second argument is less than or equal to the first argument, the program prints an error message and exits with an error code.

## Example Output

Here's an example of what the program prints for various inputs:

```sh
$ ./fizzbuzz 10 20
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
