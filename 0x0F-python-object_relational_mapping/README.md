 # Python - Object-Relational Mapping

- Mastery of `ORM`, `MySQLdb`, and `sqlalchemy` for CRUD operations on MySQL Database.

## Tests :heavy_check_mark:

* [tests](./tests): Directory containing SQL and Python scripts for testing.

## Tasks :page_with_curl:

* **0. Retrieve all states**
  * [0-select_states.py](./0-select_states.py): Python script utilizing MySQLdb to retrieve and list all states from the database `hbtn_0e_0_usa`.
  * Usage: `./0-select_states.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `states.id`.

* **1. Filter states**
  * [1-filter_states.py](./1-filter_states.py): Python script utilizing MySQLdb to filter and list all states with names starting with `N` from the database `hbtn_0e_0_usa`.
  * Usage: `./1-filter_states.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `states.id`.

* **2. Filter states by user input**
  * [2-my_filter_states.py](./2-my_filter_states.py): Python script utilizing MySQLdb to display all values matching a given name in the `states` table of the database `hbtn_0e_0_usa`.
  * Usage: `./2-my_filter_states.py <mysql username> <mysql password> <database name> <state name searched>`.
  * Results are sorted in ascending order based on `states.id`.
  * Utilizes string formatting to construct the SQL query.

* **3. Protection against SQL Injection**
  * [3-my_safe_filter_states.py](./3-my_safe_filter_states.py): Python script utilizing MySQLdb to display all values matching a given name in the `states` table of the database `hbtn_0e_0_usa`, with protection against SQL injections.
  * Usage: `./3-my_safe_filter_states.py <mysql username> <mysql password> <database name> <state name searched>`.
  * Results are sorted in ascending order based on `states.id`.

* **4. Cities by states**
  * [4-cities_by_state.py](./4-cities_by_state.py): Python script utilizing MySQLdb to list all cities from the database `hbtn_0e_4_usa`.
  * Usage: `./4-cities_by_state.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `cities.id`.

* **5. All cities by state**
  * [5-filter_cities.py](./5-filter_cities.py): Python script utilizing MySQLdb to list all cities of a given state in the database `hbtn_0e_4_usa`.
  * Usage: `./5-filter_cities.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `cities.id`.

* **6. First state model**
  * [model_state.py](./model_state.py): Python module defining a class `State` that inherits from SQLAlchemy `Base` and maps to the MySQL table `states`.

* **7. All states via SQLAlchemy**
  * [7-model_state_fetch_all.py](./7-model_state_fetch_all.py): Python script utilizing SQLAlchemy to list all `State` objects from the database `hbtn_0e_6_usa`.
  * Usage: `./7-model_state_fetch_all.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `states.id`.

* **8. First state**
  * [8-model_state_fetch_first.py](./8-model_state_fetch_first.py): Python script utilizing SQLAlchemy to print the first `State` object from the database `hbtn_0e_6_usa`, ordered by `states.id`.
  * Usage: `./8-model_state_fetch_first.py <mysql username> <mysql password> <database name>`.
  * If the `states` table is empty, prints `Nothing`.

* **9. States containing 'a'**
  * [9-model_state_filter_a.py](./9-model_state_filter_a.py): Python script utilizing SQLAlchemy to list all `State` objects that contain the letter `a` in the database `hbtn_0e_6_usa`.
  * Usage: `./9-model_state_filter_a.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `states.id`.

* **10. Retrieve a state**
  * [10-model_state_my_get.py](./10-model_state_my_get.py): Python script utilizing SQLAlchemy to print the `id` of the `State` object with a name matching the one passed as an argument in the database `hbtn_0e_6_usa`.
  * Usage: `./10-model_state_my_get.py <mysql username> <mysql password> <database name> <state searched name>`.
  * Displays the `id` of the matched `State`.
  * If no match is found, prints `Not found`.

* **11. Add a new state**
  * [11-model_state_insert.py](./11-model_state_insert.py): Python script utilizing SQLAlchemy to add the `State` object "Louisiana" to the database `hbtn_0e_6_usa`.
  * Usage: `./11-model_state_insert.py <mysql username> <mysql password> <database name>`.
  * Prints the `id` of the new `State` after creation.

* **12. Update a state**
  * [12-model_state_update_id_2.py](./12-model_state_update_id_2.py): Python script utilizing SQLAlchemy to change the name of the `State` object with `id = 2` in the database `hbtn_0e_6_usa` to "New Mexico".
  * Usage: `./12-model_state_update_id_2.py <mysql username> <mysql password> <database name>`.

* **13. Delete states**
  * [13-model_state_delete_a.py](./13-model_state_delete_a.py): Python script utilizing SQLAlchemy to delete all `State` objects with a name containing the letter `a` from the database `hbtn_0e_6_usa`.
  * Usage: `./13-model_state_delete_a.py <mysql username> <mysql password> <database name>`.

* **14. Cities in state**
  * [model_city.py](./model_city.py): Python module defining a class `City` that inherits from SQLAlchemy `Base` and maps to the MySQL table `cities`.
    * Includes a class attribute `state_id` which is a foreign key to `states.id`.
  * [14-model_city_fetch_by_state.py](./14-model_city_fetch_by_state.py): Python script utilizing SQLAlchemy to list all `City` objects in the database `hbtn_0e_14_usa`.
  * Usage: `./14-model_city_fetch_by_state.py <mysql username> <mysql password> <database name>`.
  * Results are sorted in ascending order based on `cities.id`.

* **15. City relationship**
  * [relationship_state.py](./relationship_state.py): Python module defining a class `State` that inherits from SQLAlchemy `Base` and maps to the MySQL table `states`.
    * It is identical to the `State` class defined in [model_state.py](./model_state.py).
    * Includes a class attribute `cities` that represents a relationship with the class `City`. If the `State` object is deleted, all linked `City` objects are also deleted. `State` objects are backreferenced to `City` objects as `state`.
  * [relationship_city.py](./relationship_city.py): Python module defining a class `City` that inherits from SQLAlchemy `Base` and maps to the MySQL table `cities`.
    * Identical to the `City` class defined in [model_city.py](./model_city.py).
  * [100-relationship_states_cities.py](./100-relationship_states_cities.py): Python script utilizing SQLAlchemy to add the `State` "California" with `City` "San Francisco" to the database `hbtn_0e_100_usa`.
  * Usage: `./100-relationship_states_cities.py <mysql username> <mysql password> <database name>`.
  * Utilizes the `cities` relationship for all `State` objects.

* **16. List relationship**
  * [101-relationship_states_cities_list.py](./101-relationship_states_cities_list.py): Python script utilizing SQLAlchemy to list all `State` and corresponding `City` objects in the database `hbtn_0e_101_usa`.
  * Usage: `./101-relationship_states_cities_list.py <mysql username> <mysql password> <database name>`.
  * Utilizes the `cities` relationship for all `State` objects.
  * Results are sorted in ascending order based on `states.id` and `cities.id`.

* **17. List city**
  * [102-relationship_cities_states_list.py](./102-relationship_cities_states_list.py): Python script utilizing SQLAlchemy to list all `City` objects from the database `hbtn_0e_101_usa`.
  * Usage: `./102-relationship_cities_states_list.py <mysql username> <mysql password> <database name>`.
  * Utilizes the `state` relationship to access the `State` objects linked to `City` objects.
  * Results are sorted in ascending order based on `cities.id`.