# SQL - Exploring Further

- Delve deeper into queries, focusing on permissions, joins, and constraints.

## Usage 🐬

* The scripts [3-force_name.sql](./3-force_name.sql) onward require specifying the database to query from as a MySQL command line argument.

```
$ cat 3-force_name.sql | mysql -hlocalhost -uroot -p hbtn_0d_2
```

* Tasks 3-101 query from the database [hbtn_0d_tvshows.sql](./hbtn_0d_tvshows.sql).
* Tasks 102-103 query from the database [hbtn_0d_tvshows_rate.sql](./hbtn_0d_tvshows_rate.sql).

## Tasks 📃

* **0. My Privileges!**
  * [0-privileges.sql](./0-privileges.sql): MySQL script listing all privileges of the users `user_0d_1` and `user_0d_2`.

* **1. Root User**
  * [1-create_user.sql](./1-create_user.sql): MySQL script creating the user `user_0d_1` with all privileges and password `user_0d_1_pwd`.

* **2. Read User**
  * [2-create_read_user.sql](./2-create_read_user.sql): MySQL script creating the database `hbtn_0d_2` and user `user_0d_2` with password `user_0d_2_pwd`, having only SELECT privilege on `hbtn_0d_2`.

* **3. Mandatory Name**
  * [3-force_name.sql](./3-force_name.sql): MySQL script creating the table `force_name`.
  * Description:
    * `id`: INT
    * `name`: VARCHAR(256) (mandatory field)

* **4. Non-Null ID**
  * [4-never_empty.sql](./4-never_empty.sql): MySQL script creating the table `id_not_null`.
  * Description:
    * `id`: INT (default value = 1)
    * `name`: VARCHAR(256)

* **5. Unique ID**
  * [5-unique_id.sql](./5-unique_id.sql): MySQL script creating the table `unique_id`.
  * Description:
    * `id`: INT (default value = 1, must be unique)
    * `name`: VARCHAR(256)

* **6. States Table**
  * [6-states.sql](./6-states.sql): MySQL script creating the database `hbtn_0d_usa` with a table `states`.
  * `states` description:
    * `id`: INT (unique, auto-generated, non-null, primary key)
    * `name`: VARCHAR(256) (non-null)

* **7. Cities Table**
  * [7-cities.sql](./7-cities.sql): MySQL script creating the database `hbtn_0d_usa` with a table `cities`.
  * `cities` description:
    * `id`: INT (unique, auto-generated, non-null, primary key)
    * `state_id`: INT (non-null, foreign key referencing `id` of `states` table)
    * `name`: VARCHAR(256) (non-null)

* **8. California Cities**
  * [8-cities_of_california_subquery.sql](./8-cities_of_california_subquery.sql): MySQL script listing all cities of California from `hbtn_0d_usa`, ordered by ascending city id.

* **9. Cities by States**
  * [9-cities_by_state_join.sql](./9-cities_by_state_join.sql): MySQL script listing all cities from `hbtn_0d_usa`, ordered by ascending city id.

* **10. Genre ID by Show**
  * [10-genre_id_by_show.sql](./10-genre_id_by_show.sql): MySQL script listing shows from `hbtn_0d_tvshows` with at least one linked genre, ordered by ascending `tv_shows.title` and `tv_show_genres.genre_id`.

* **11. Genre ID for All Shows**
  * [11-genre_id_all_shows.sql](./11-genre_id_all_shows.sql): MySQL script listing all shows from `hbtn_0d_tvshows`, showing genre id if linked, ordered by ascending `tv_shows.title` and `tv_show_genres.genre_id`, displaying `NULL` for shows without a genre.

* **12. No Genre**
  * [12-no_genre.sql](./12-no_genre.sql): MySQL script listing shows from `hbtn_0d_tvshows` without a linked genre, ordered by ascending `tv_shows.title` and `tv_show_genres.genre_id`.

* **13. Number of Shows by Genre**
  * [13-count_shows_by_genre.sql](./13-count_shows_by_genre.sql): MySQL script listing all genres from `hbtn_0d_tvshows` and the number of linked shows, ordered by descending number of linked shows, excluding genres without linked shows.

* **14. Dexter's Genres**
  * [14-my_genres.sql](./14-my_genres.sql): MySQL script listing all genres of the show Dexter from `hbtn_0d_tvshows`, ordered by ascending genre name.

* **15. Comedy Only**
  * [15-comedy_only.sql](./15-comedy_only.sql): MySQL script listing all comedy shows from `hbtn_0d_tvshows`, ordered by ascending show title.

* **16. Shows and Genres**
  * [16-shows_by_genre.sql](./16-shows_by_genre.sql): MySQL script listing all shows and their linked genres from `hbtn_0d_tvshows`, ordered by ascending show title and genre name.

* **17. Non-Dexter Genres**
  * [100-not_my_genres.sql](./100-not_my_genres.sql): MySQL script listing genres not linked to the show Dexter from `hbtn_0d_tvshows`, ordered by ascending genre name.

* **18. No Comedy Tonight!**
  * [101-not_a_comedy.sql](./101-not_a_comedy.sql): MySQL script listing shows without the genre comedy from `hbtn_0d_tvshows`, ordered by ascending show title.

* **19. Rotten Tomatoes**
  * [102-rating_shows.sql](./102-rating_shows.sql): MySQL script listing shows from `hbtn_0d_tvshows_rate` by their rating, ordered by descending rating.

* **20. Best Genre**
  * [103-rating_genres.sql](./103-rating_genres.sql): MySQL script listing genres from `hbtn_0d_tvshows_rate` by their rating, ordered by descending rating.