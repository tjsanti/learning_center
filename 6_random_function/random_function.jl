function first_func()
    return "I am the first function"
end

function second_func()
    return "I am the second function"
end

function third_func()
    return "I am the third function"
end

f = rand((1, 2, 3))

f == 1 ? print(first_func()) : f == 2 ? print(second_func()) : print(third_func())