# function == methods

# #ek object create kara
# thar = car()
# #car ki kuch property print karwadi
# print(thar.catg[1], thar.tyre)
class Student:
    college_name = "ABC College"
    
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
    
    def get_avg(self):
        sum = 0
        for val in self.marks:
            sum += val
        print("hi", self.name, "avg score is :", sum/ len(self.marks))
        
s1 = Student("Bagha", [99, 98, 97])
s1.get_avg()


 
