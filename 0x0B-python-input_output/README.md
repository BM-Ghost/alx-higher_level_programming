## Description

### Function Prototypes 💾
Here are the prototypes for functions written in this repository:

1. **Read Operations**
   * `def read_file(filename="")`
   * `def number_of_lines(filename="")`
   * `def read_lines(filename="", nb_lines=0)`

2. **Write Operations**
   * `def write_file(filename="", text="")`
   * `def append_write(filename="", text="")`

3. **JSON Operations**
   * `def to_json_string(my_obj)`
   * `def from_json_string(my_str)`
   * `def save_to_json_file(my_obj, filename)`
   * `def load_from_json_file(filename)`
   * `def class_to_json(obj)`

4. **Specific Operations**
   * `def pascal_triangle(n)`
   * `def append_after(filename="", search_string="", new_string="")`

5. **Object Handling**
   * `def add_item(filename="")`
   * `def class_to_json(obj)`
   * `def to_json(self)`
   * `def to_json(self, attrs=None)`
   * `def reload_from_json(self, json)`

6. **Advanced Operations**
   * `def read_write_heap(pid, search_string, replace_string)`
   * `def log_parsing()`

### Tasks 📃
1. **Read and Output**
   * [0-read_file.py](./0-read_file.py): Display the contents of a UTF8 text file.
   * [1-number_of_lines.py](./1-number_of_lines.py): Count the lines in a text file.
   * [2-read_lines.py](./2-read_lines.py): Print `n` lines of a UTF8 text file.

2. **Write and Modify**
   * [3-write_file.py](./3-write_file.py): Write a string to a UTF8 text file.
   * [4-append_write.py](./4-append_write.py): Append a string to the end of a text file.

3. **JSON Operations**
   * [5-to_json_string.py](./5-to_json_string.py): Convert an object to a JSON string.
   * [6-from_json_string.py](./6-from_json_string.py): Convert a JSON string to a Python object.
   * [7-save_to_json_file.py](./7-save_to_json_file.py): Save an object to a text file in JSON format.
   * [8-load_from_json_file.py](./8-load_from_json_file.py): Load an object from a `.json` file.

4. **Data Handling**
   * [9-add_item.py](./9-add_item.py): Store command line arguments to a Python list in a file.
   * [10-class_to_json.py](./10-class_to_json.py): Describe Python data structures to a dictionary.

5. **Object Representation**
   * [11-student.py](./11-student.py): Define a `Student` class and its representation.
   * [12-student.py](./12-student.py): Customize `Student` class object representation.
   * [13-student.py](./13-student.py): Modify `Student` class attributes using dictionary pairs.

6. **Specialized Operations**
   * [14-pascal_triangle.py](./14-pascal_triangle.py): Generate Pascal's Triangle.
   * [100-append_after.py](./100-append_after.py): Insert text after specific strings in a file.

7. **Log Analysis and System Manipulation**
   * [101-stats.py](./101-stats.py): Analyze log files and compute metrics.
   * [read_write_heap.py](./read_write_heap.py): Modify a running process's heap.
