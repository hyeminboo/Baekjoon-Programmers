weight, height = float(input()), float(input())
BMI = weight / height**2
if BMI > 25:
    print("Overweight")
elif BMI < 18.5:
    print("Underweight")
else:
    print("Normal weight")