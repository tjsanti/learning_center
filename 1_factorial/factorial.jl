function factorial(x::Int)::Int
    x < 0 && error("Number must be non-negative.")
    x <= 1 && 1

    res = 1
    while x > 1
        res *= x
        x -= 1
    end
    return res
end

print("Enter a number: ")
num = readline()
num = parse(Int, num)
println(factorial(num))