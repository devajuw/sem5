
score = float(input("Enter score between 0.0 and 1.0: "))


if 0.0 <= score <= 1.0:
    if score >= 0.9:
        grade = "A"
    elif score >= 0.8:
        grade = "B"
    elif score >= 0.7:
        grade = "C"
    elif score >= 0.6:
        grade = "D"
    else:
        grade = "F"
    print("Grade:", grade)
else:
    print("Error: Score out of range")
