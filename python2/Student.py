# Student.py

from Course import Course  # Import the Course class from course.py

class Student:
    MAXNUM = 20  # Assuming MAXNUM is defined as a constant

    def __init__(self, name, number):
        self.name = name
        self.number = number
        self.no_of_courses = 0
        self.course_grades = [None] * self.MAXNUM

    def get_stu_name(self):
        return self.name

    def get_stu_number(self):
        return self.number

    def assign_grade(self, course_name, grade):
        # Check whether the maximum number of courses have been taken
        if self.no_of_courses == self.MAXNUM:
            print("You have exceeded the maximum number of courses!")
            return

        # Create a new course
        course = Course(course_name, grade)
        self.course_grades[self.no_of_courses] = course
        self.no_of_courses += 1

    def get_grade(self, course_name):
        for i in range(self.no_of_courses):
            # Check if course name is the same as course_name
            if self.course_grades[i].get_course_name() == course_name:
                return self.course_grades[i].get_course_grade()

        return -1
