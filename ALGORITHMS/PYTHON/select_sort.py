#select sort

def addElementTab(array,n):

    for i in range(n):
        numbers = int(input("Enter a number: "))
        array.append(numbers)

def showTab(array):

    for i in array:
        print(f" {i} ")


def selectSort(array,n):

    for i in range(n):
        minIndex = i
        for j in range(i + 1,n):
            if array[j] < array[minIndex]:
                minIndex = j
        

        temp =   array[i]
        array[i] = array[minIndex]
        array[minIndex] = temp



array = []
n = 5

addElementTab(array,n)
print("Array before sorting:")
showTab(array)
selectSort(array,n)
print("Array after sorting:")
showTab(array)


