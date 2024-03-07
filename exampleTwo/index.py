import os

class main ():

    def __init__(self):
        self.path = os.path.dirname(os.path.realpath(__file__))
        self.name = os.getenv("USERNAME")
        self.title = "Test Action"
        self.description = "This is a test action"

    def run(self):
        name= self.name
        return print(f"Hello {name}, {self.title} - {self.description} - {self.path}")
     
if __name__ == "__main__":
    main().run()