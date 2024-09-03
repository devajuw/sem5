import random


lottery_number = random.randint(00, 99)


user_no = int(input("Enter your 2 digit lottery number guess: "))

# Check if the guess matches
if user_no == lottery_number:
    print("Exact match! You win $10,000")
elif sorted(str(user_no)) == sorted(str(lottery_number)):
    print("All digits match, but not in order! You win $3,000")
elif any(digit in str(lottery_number) for digit in str(user_no)):
    print("One digit matches! You win $1,000")
else:
    print("Sorry, no match.")
