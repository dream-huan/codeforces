class queue:
    a=[]
    def push(self,x):
        queue.self=self
        self.a.append(x)
    def pop(self):
        queue.self=self
        del self.a[0]
    def __init__(self):
        queue.self=self
    def print(self):
        queue.self=self
        return self.a

a1=queue()
a1.push(1)
a1.pop()
print(a1.print())