function triangle(n::Int)::Nothing
    n >= 1 || error("Value must be >= 1")

    for i=1:n
        println("*"^i)
    end
end

print("Enter a number for the base: ")
n = readline()
n = parse(Int, n)
triangle(n)