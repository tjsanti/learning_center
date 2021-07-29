function count_vowels(s::String)
    vowels = ['a', 'e', 'i', 'o', 'u']

    num_vowels = 0
    for c in s
        if c ∈ vowels
            num_vowels += 1
        end
    end

    num_cons = length(s) - num_vowels

    return num_vowels, num_cons
end

print("Enter a word: ")
s = readline()
num_vowels, num_cons = count_vowels(s)
print("$(s) has $(num_vowels) vowels and $(num_cons) consonants.")