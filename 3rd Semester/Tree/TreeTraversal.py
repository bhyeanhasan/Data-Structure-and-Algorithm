"""
    Name    :   Md. Babul Hasan
    ID      :   1802027
    REG     :   08437
    Faculty of Computer Science and Engineering
    Patuakhali Science and Technology University
"""


##########################################################
# traversing the Tree

def PreOrderTraversal(root):
    if root is not None:
        print(root.data)
        PreOrderTraversal(root.left)
        PreOrderTraversal(root.right)


def InOrderTraversal(root):
    if root is not None:
        InOrderTraversal(root.left)
        print(root.data)
        InOrderTraversal(root.right)


def PostOrderTraversal(root):
    if root is not None:
        PostOrderTraversal(root.left)
        PostOrderTraversal(root.right)
        print(root.data)

##########################################################

# creating Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


# creating Linked List Class
class Tree:
    def __init__(self):
        self.Root = None


# Assigning Nodes
item_1 = Node(1)
item_2 = Node(2)
item_3 = Node(3)
item_4 = Node(4)
item_5 = Node(5)

# Assigning the Root
tree = Tree()
tree.Root = item_1

# creating the Tree
tree.Root.left = item_2
tree.Root.right = item_3
item_2.left = item_4
item_2.right = item_5

print("Preorder Traversal")
PreOrderTraversal(tree.Root)

print("Inorder Traversal")
InOrderTraversal(tree.Root)

print("Postorder Traversal")
PostOrderTraversal(tree.Root)