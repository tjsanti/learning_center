function usd2eur(x::Float64)::Float64
    # current conversion is 1 usd = 0.845379 eur
    r = 0.845379

    return x*r
end

function eur2usd(x::Float64)::Float64
    # current conversion is 1 eur = 1.1829612 usd
    r = 1.1829612

    return x*r
end

print("What currency would you like to convert to (usd/eur)? ")
cur = readline()
if lowercase(cur) == "usd"
    print("Enter an amount of EUR: ")
    eur = readline()
    eur = parse(Float64, eur)
    print(round(eur2usd(eur), digits=2))
elseif lowercase(cur) == "eur"
    print("Enter an amount of USD: ")
    usd = readline()
    usd = parse(Float64, usd)
    print(round(usd2eur(usd), digits=2))
else
    print("Unsupported currency")
end