"""
    Name    :   Md. Babul Hasan
    ID      :   1802027
    REG     :   08437
    Faculty of Computer Science and Engineering
    Patuakhali Science and Technology University
"""


# creating Node Class
class Node:
    def __init__(self, value):
        self.value = value
        self.next_location = None


# creating Linked List Class
class LinkedList:
    def __init__(self):
        self.head_node = None


# Assigning Nodes
item_1 = Node(1)
item_2 = Node(2)
item_3 = Node(3)
item_4 = Node(4)

# creating the linked list
linked_list = LinkedList()
linked_list.head_node = item_1

# Assigning next pointer
item_1.next_location = item_2
item_2.next_location = item_3
item_3.next_location = item_4

##########################################################
# traversing the linked list
head = linked_list.head_node
while head.next_location is not None:
    print(head.value)
    head = head.next_location
print(head.value)
##########################################################