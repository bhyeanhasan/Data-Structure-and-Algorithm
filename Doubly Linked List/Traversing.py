class DoublyLinkedList:
    def __init__(self):
        self.head_node = None


class Node:
    def __init__(self, value):
        self.value = value
        self.previous = None
        self.next = None

item_1 = Node(1)
item_2 = Node(2)
item_3 = Node(3)
item_4 = Node(4)
item_5 = Node(5)

doublyLinkedList = DoublyLinkedList()

doublyLinkedList.head_node = item_1
item_1.next = item_2
item_2.previous = item_1
item_2.next = item_3
item_3.next = item_4
item_3.previous = item_2
item_4.next = item_5
item_5.previous = item_4

head = doublyLinkedList.head_node

while head is not None:
    print(head.value)
    head = head.next
