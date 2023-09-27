# Course.py

class Course:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

    def get_course_name(self):
        return self.name

    def get_course_grade(self):
        return self.grade
