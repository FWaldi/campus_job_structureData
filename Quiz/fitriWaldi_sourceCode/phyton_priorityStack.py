import heapq

class PriorityQueue:
    def __init__(self):
        self._queue = []
        self._index = 0

    def push(self, item, priority):
        heapq.heappush(self._queue, (-priority, self._index, item))
        self._index += 1

    def pop(self):
        return heapq.heappop(self._queue)[-1]

class Queue:
    def __init__(self):
        self._queue = []

    def enqueue(self, item):
        self._queue.append(item)

    def dequeue(self):
        return self._queue.pop(0)

    def is_empty(self):
        return len(self._queue) == 0

pq = PriorityQueue()

pq.push("apple", 3)
pq.push("banana", 2)
pq.push("orange", 1)

while not pq.is_empty():
    print(pq.pop())

q = Queue()

q.enqueue("apple")
q.enqueue("banana")
q.enqueue("orange")

while not q.is_empty():
    print(q.dequeue())
