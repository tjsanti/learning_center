function find_permutations(s::String, start_idx::Int=1, end_idx::Int=4, seen::Array=[])
    s = lowercase(s)
    if start_idx == end_idx && !(s in seen)
        push!(seen, s)
        println(s)
    else
        s_arr = collect(s)
        for i=start_idx:end_idx
            s_arr[start_idx], s_arr[i] = s_arr[i], s_arr[start_idx]
            find_permutations(String(s_arr), start_idx+1, end_idx, seen)
            s_arr[start_idx], s_arr[i] = s_arr[i], s_arr[start_idx]
        end
    end
end

find_permutations("test")