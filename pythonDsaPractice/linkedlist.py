class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data)
            temp = temp.next

# 1->2->3->4->None  lets insert 5 at head .  newNode = 5 , 5->next = 1 , head = 5 ,  head | head.next | -----> first| first->next ---> None


def detectACycle(self, head):
    if (head.next == None):
        return

    fast = head
    slow = head

    while(fast is None and fast.next is None):
        fast = fast.next.next
        slow = slow.next 


def push(self, new_data):
    newNode = Node(new_data)
    newNode.next = self.head
    self.head = newNode


def push_middle(self, prev_node, new_data):
    if prev_node is None:
        print("Node a node of Linked List")
        return
    newNode = Node(new_data)
    newNode.next = prev_node.next
    prev_node.next = newNode


if __name__ == '__main__':
    llist = LinkedList()
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second
    second.next = third
