class Solution(object):
    def mergeKLists(self, lists):
        # Create an empty heap
        heap = []
        for List in lists:
            pointer = List
            # Traverse the current linked list and push each node's value onto the heap
            while pointer:
                heappush(heap, pointer.val)
                pointer = pointer.next
        # Create a dummy node to serve as the head of the merged linked list
        head = ListNode(0)
        curr = head
        # Pop values from the heap and create nodes in the merged linked list
        while len(heap) != 0:
            curr.next = ListNode(heappop(heap))
            curr = curr.next
        return head.next