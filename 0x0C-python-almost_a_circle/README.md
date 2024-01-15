# Python - Almost a Circle

Dive into the world of Python with a comprehensive review covering a spectrum of essential topics.

## Tests :heavy_check_mark:

* [tests/test_models](./tests/test_models): 

## Classes :cl:

### Base
A foundational class for all others in the project, featuring:

* Private class attribute `__nb_objects = 0`.
* Public instance attribute `id`.
* Class constructor `def __init__(self, id=None):`
  * Incrementing `__nb_objects` if `id` is `None`.
  * Setting `id` to the provided value if not `None`.
* Static method `def to_json_string(list_dictionaries):` for JSON string serialization of dictionaries.
* Class method `def save_to_file(cls, list_objs):` for writing JSON serialization of objects to a file.
* Static method `def from_json_string(json_string):` for deserializing a JSON string into a list of objects.
* Class method `def create(cls, **dictionary):` for instantiating an object with provided attributes.
* Class method `def load_from_file(cls):` for returning a list of objects instantiated from a JSON file.
* Class method `def save_to_file_csv(cls, list_objs):` for writing CSV serialization of objects to a file.
* Class method `def load_from_file_csv(cls):` for returning a list of objects instantiated from a CSV file.
* Static method `def draw(list_rectangles, list_squares):` for drawing `Rectangle` and `Square` instances using the `turtle` module.

### Rectangle
Representing a rectangle, inheriting from `Base` with private instance attributes (`__width`, `__height`, `__x`, and `__y`), class constructor, and methods for area calculation, display, updating, and dictionary representation.

### Square
Extending the functionality of `Rectangle`, the `Square` class inherits and adapts attributes and methods accordingly to represent a square, offering seamless integration into the project's object-oriented design.