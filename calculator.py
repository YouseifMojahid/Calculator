first_number = float(input("The first number is: "))
second_number = float(input("The second number is: "))
calc = input("What do you want to do? (+, -, *, /): ")
result = ""

if calc == "+":
    result = first_number + second_number
elif calc == "-":
    result = first_number - second_number
elif calc == "*":
    result = first_number * second_number
elif calc == "/":
    result = first_number / second_number
else:
    print("Please choose from the bracket")

print(result)