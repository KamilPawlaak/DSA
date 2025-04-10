#list 

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None



n1 = Node(121)
n2 = Node(29)
n3 = Node(35)
n4 = Node(45)


n1.next = n2
n2.next = n3
n3.next = n4
n4.next = None

currentNode = n1

while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print("NULL")