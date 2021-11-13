"""
    Name    :   Md. Babul Hasan
    ID      :   1802027
    REG     :   08437
    Faculty of Computer Science and Engineering
    Patuakhali Science and Technology University
"""


##########################################################

# inserting in Binary Search Tree
def insert(root, key):
    if root is None:
        return BSTree(key)
    else:
        if root.data == key:
            return root
        elif root.data < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root

##########################################################


class BSTree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


# Assigning the Root
bstree = BSTree(50)
bstree = insert(bstree, 40)
bstree = insert(bstree, 60)
bstree = insert(bstree, 30)
bstree = insert(bstree, 500)
bstree = insert(bstree, 200)


# traversing the Tree
def PreOrderTraversal(root):
    if root is not None:
        print(root.data)
        PreOrderTraversal(root.left)
        PreOrderTraversal(root.right)


print("Binary Search Tree after Insertion")
PreOrderTraversal(bstree)
