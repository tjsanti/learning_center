function area(r::Float64)
    return π * r^2
end

function radius_from_area(A::Float64)
    return sqrt(A / π)
end

function get_value()
    print("Enter a value for the measurement: ")
    val = readline()
    return parse(Float64, val)
end

function output_measures(A, r, d)
    println("Area: $(A)")
    println("Radius: $(r)")
    println("Diameter: $(d)")
end

print("What measurement will you input? (area/radius/diameter) ")
measure = readline()

if measure == "area"
    A = get_value()
    r = radius_from_area(A)
    d = r * 2
    output_measures(A, r, d)
elseif measure == "radius"
    r = get_value()
    A = area(r)
    d = r * 2
    output_measures(A, r, d)
elseif measure == "diameter"
    d = get_value()
    r = d / 2
    A = area(r)
    output_measures(A, r, d)
else
    print("Not a supported input measurement.")
end