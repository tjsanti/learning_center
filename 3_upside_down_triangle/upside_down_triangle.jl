function upside_down_triangle(n::Int)::Nothing
    n >= 1 || error("Value must be >= 1")

    for i=0:n
        println("*"^(n-i))
    end
end

print("Enter a number for the base: ")
n = readline()
n = parse(Int, n)
upside_down_triangle(n)