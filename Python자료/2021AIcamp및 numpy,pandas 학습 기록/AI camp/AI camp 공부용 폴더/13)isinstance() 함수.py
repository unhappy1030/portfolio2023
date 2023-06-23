#isinstance(인스턴스, 클래스)
class Student:
    def __init__(self):
        pass
#학생 선언
student = Student()

#인스턴스 확인
print("isinstance(student,Student) :", isinstance(student, Student))
#단순한 인스턴스 확인
print(type(student) == Student)
#type 확인
print(type(student))