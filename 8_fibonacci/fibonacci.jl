function fibonacci(n::Int)
    nums = [1, 1]
    while nums[end] < n
        push!(nums, nums[end] + nums[end-1])
    end

    for num in nums
        if num <=n
            println(num)
        end
    end
end

print("Enter an upper bound: ")
n = readline()
n = parse(Int, n)
fibonacci(n)