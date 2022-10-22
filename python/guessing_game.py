import random


secret_number = random.randint(1, 100)

while True:
  try:
    guess = int(input("Guess the number: "))
  except:
    print("please type a number!")
    continue
  
  print(f"You guessed {guess}")

  if (guess > secret_number):
    print("Too big!")
  elif (guess < secret_number):
    print("Too small!")
  else:
    print("You Won!")
    break
