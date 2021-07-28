function get_guess()
    print("Guess a number between 1 and 100: ")
    guess = readline()
    guess = parse(Int, guess)
    return guess
end

secret = 47
remaining_guesses = 10

while remaining_guesses > 0
    global secret
    local guess = get_guess()
    if guess == secret
        print("You win!")
        break
    elseif guess > secret
        println("Lower.")
    else
        println("Higher.")
    end
    global remaining_guesses -= 1
end

if remaining_guesses == 0
    print("Sorry, you lose.")
end
