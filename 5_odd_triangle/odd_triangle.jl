function odd_triangle(n::Int)::Nothing
    n >= 1 || error("The value must be >= 1")

    for i=1:n
        if i % 2 != 0
            println("*"^i)
        end
    end
end

print("Enter a value for the base: ")
n = readline()
n = parse(Int, n)
odd_triangle(n)