"""
    Name    :   Md. Babul Hasan
    ID      :   1802027
    REG     :   08437
    Faculty of Computer Science and Engineering
    Patuakhali Science and Technology University
"""


# Deleting after a target node
def deleting_after_a_node(target_value):
    head = linked_list.head_node
    while head.next_location is not None:
        if head.value == target_value:
            break
        prev = head
        head = head.next_location
    prev.next_location = head.next_location
    print("Successfully deleted "+str(target_value)+" from the linked list")


# Deleting at beginning
def deleting_at_beginning():
    linked_list.head_node = linked_list.head_node.next_location
    print("Successfully Deleted First Node")


# Deleting at end
def deleting_at_end():
    last_node = linked_list.head_node
    while last_node.next_location is not None:
        prev = last_node
        last_node = last_node.next_location
    prev.next_location = None
    print("Successfully Deleted Last Node")


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
item_5 = Node(5)

# creating the linked list
linked_list = LinkedList()
linked_list.head_node = item_1

# Assigning next pointer
item_1.next_location = item_2
item_2.next_location = item_3
item_3.next_location = item_4
item_4.next_location = item_5

###########################################
# DELETE Operations
deleting_at_beginning()
deleting_at_end()
deleting_after_a_node(4)
############################################

# traversing the linked list
head = linked_list.head_node
while head.next_location is not None:
    print(head.value)
    head = head.next_location
print(head.value)
