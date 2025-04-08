tab=[7,15,2,4,23]

size = len(tab)

def minVal(tab):
    minVal = tab[0]
    for i in tab:
        if i <minVal:
            minVal=i
    
    return minVal


def maxVal(tab):
    maxVal = tab[0]
    for i in tab:
        if i >maxVal:
            maxVal=i
    
    return maxVal


def avarageVal(tab):

    size = len(tab)

    i = 0
    suma = 0
    while i<size:
        suma+=tab[i]
        i+=i

    avarage = suma/size
    return avarage        


print(f"MIN: {minVal(tab)}\n")
print(f"MAX: {maxVal(tab)}\n")
print(f"AVARAGE: {avarageVal(tab)}\n")
