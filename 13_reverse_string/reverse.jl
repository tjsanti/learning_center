function my_reverse(s::String)::String
    if length(s) < 2
        return s
    end

    return s[end] * my_reverse(s[1:end-1])
end

print("Enter a string: ")
s = lowercase(readline())
s = my_reverse(s)
print(s)