"""
    Name    :   Md. Babul Hasan
    ID      :   1802027
    REG     :   08437
    Faculty of Computer Science and Engineering
    Patuakhali Science and Technology University
"""


##########################################################

def InorderSuccessor(root):
    last = root
    while root.left is not None:
        last = root.left
    return last


def Delete(root, key):
    if root is None:
        return root
    if root.data < key:
        root.right = Delete(root.right, key)
    elif root.data > key:
        root.left = Delete(root.left, key)
    else:
        if root.left is None:
            child = root.right
            root = None
            return child

        elif root.right is None:
            child = root.left
            root = None
            return child

        inordersuccessor = InorderSuccessor(root.right)
        root.data = inordersuccessor.data
        root.right = Delete(root.right, inordersuccessor.data)
        
    return root


##########################################################


class BSTree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


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


# traversing the Tree
def PreOrderTraversal(root):
    if root is not None:
        print(root.data)
        PreOrderTraversal(root.left)
        PreOrderTraversal(root.right)


# Assigning the Root
bstree = BSTree(50)
bstree = insert(bstree, 40)
bstree = insert(bstree, 60)
bstree = insert(bstree, 30)
bstree = insert(bstree, 500)
bstree = insert(bstree, 200)

print("Binary Search Tree after Insertion")
PreOrderTraversal(bstree)

print("Binary Search Tree after DELETE")
Delete(bstree,30)
PreOrderTraversal(bstree)
