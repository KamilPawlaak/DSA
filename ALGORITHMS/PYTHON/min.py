
tab=[7,15,2,4,23]


minVal = tab[0]

for i in tab:
    if i <minVal:
        minVal=i


print(f"Lowest value in tab: {minVal}")


maxVal = tab[0]

for i in tab:
    if i>maxVal:
        maxVal=i 


print(f"Max value in tab: {maxVal}")