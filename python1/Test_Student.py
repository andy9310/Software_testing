import unittest
from Course_Student import Student  # Assuming you have a Student class defined in a Course_Student.py file

class StudentTest(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_constructor(self):
        # Create a student object
        stu = Student("Tan Meng Chee", "94-1111B-13")

        # Check that the object is constructed correctly
        student_name = stu.get_stu_name()
        self.assertEqual(student_name, "Tan Meng Chee")

        student_number = stu.get_stu_number()
        self.assertEqual(student_number, "94-1111B-13")

    def test_assign_and_retrieve_grades(self):
        # Create a student
        stu = Student("Jimmy", "946302B")

        # Assign a few grades to this student
        stu.assign_grade("cs2102", 60)
        stu.assign_grade("cs2103", 70)
        stu.assign_grade("cs3215", 80)

        # Verify that the assignment is correct
        self.assertEqual(stu.get_grade("cs2102"), 60)
        self.assertEqual(stu.get_grade("cs2103"), 70)

        # Attempt to retrieve a course that does not exist
        self.assertEqual(stu.get_grade("cs21002"), -1)

# if __name__ == '__main__':
#     # Create a test suite
#     suite = unittest.TestLoader().loadTestsFromTestCase(StudentTest)

#     # Create a test runner
#     runner = unittest.TextTestRunner()

#     # Run the tests
#     result = runner.run(suite)

#     # Check if the tests were successful
#     if result.wasSuccessful():
#         print("All tests passed!")
#         exit_code = 0
#     else:
#         print("Some tests failed.")
#         exit_code = 1

#     exit(exit_code)