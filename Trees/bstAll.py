class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def insert(self, root, data):
        if root is None:
            return Node(data)

        if data < root.data:
            root.left = self.insert(root.left, data)
        else:
            root.right = self.insert(root.right, data)

        return root

    def printInorder(self, root):
        if root is None:
            return None
        self.printInorder(root.left)
        print(root.data, end=" ")
        self.printInorder(root.right)


root = None
bst = Node(None)
root = bst.insert(root, 10)
bst.insert(root, 5)
bst.insert(root, 20)
bst.insert(root, 3)
bst.insert(root, 7)
bst.insert(root, 30)
bst.insert(root, 40)
bst.printInorder(root)


"""
# multiline comment
         10
       /    \\
      5      30       
    /   \   /  \\ 
    3   7  20   40 

"""
