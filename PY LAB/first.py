#Write a program that displays “Hello to Python programming”
#Write a program to read two integers and perform arithmetic operations on them

print("Hello To Python Programming \n")
num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))

# Performing arithmetic operations
addition = num1 + num2
subtraction = num1 - num2
multiplication = num1 * num2

# Handling division and avoiding division by zero
if num2 != 0:
    division = num1 / num2
else:
    division = "Undefined (division by zero)"

# Displaying the results
print(f"Addition: {num1} + {num2} = {addition}")
print(f"Subtraction: {num1} - {num2} = {subtraction}")
print(f"Multiplication: {num1} * {num2} = {multiplication}")
print(f"Division: {num1} / {num2} = {division}")

