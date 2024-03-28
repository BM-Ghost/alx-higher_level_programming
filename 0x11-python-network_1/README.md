# Python - Network #1

This repository focuses on utilizing the `urllib` and `requests` Python libraries for handling HTTP requests and responses, including interactions with URLs and APIs, such as the GitHub API.

## Objectives :page_with_curl:

* **0. Current Status Check**
  * [0-hbtn_status.py](./0-hbtn_status.py): Python script to retrieve the status from `https://intranet.hbtn.io/status`.
  * Utilizes `urllib`.

* **1. Response Header Value Extraction**
  * [1-hbtn_header.py](./1-hbtn_header.py): Python script to extract the `X-Request-Id` response header from a given URL.
  * Syntax: `./1-hbtn_header.py <URL>`
	* Utilizes `urllib`.

* **2. Sending Email via POST**
  * [2-post_email.py](./2-post_email.py): Python script to send a `POST` request containing an email to a specified URL and display the response body.
  * Syntax: `./2-post_email.py <URL> <email>`.
	* Utilizes `urllib`.

* **3. Handling Error Codes**
  * [3-error_code.py](./3-error_code.py): Python script to send a request to a given URL and handle HTTP errors, displaying the response body.
	* Utilizes `urllib`.

* **4. Current Status Check - Enhanced**
  * [4-hbtn_status.py](./4-hbtn_status.py): Python script to fetch the status from `https://intranet.hbtn.io/status`.
  * Utilizes `requests`.

* **5. Response Header Value Extraction - Enhanced**
  * [5-hbtn_header.py](./5-hbtn_header.py): Python script to extract the `X-Request-Id` response header from a given URL.
  * Syntax: `./5-hbtn_header.py <URL>`
	* Utilizes `requests`.

* **6. Sending Email via POST - Enhanced**
  * [6-post_email.py](./6-post_email.py): Python script to send a `POST` request containing an email to a specified URL and display the response body.
  * Syntax: `./6-post_email.py <URL> <email>`.
	* Utilizes `requests`.

* **7. Handling Error Codes - Enhanced**
  * [7-error_code.py](./7-error_code.py): Python script to send a request to a given URL and handle HTTP errors, displaying the response body.
	* Utilizes `requests`.

* **8. API Search**
  * [8-json_api.py](./8-json_api.py): Python script to send a `POST` request to `http://0.0.0.0:5000/search_user` with a specified letter as a parameter.
  * Syntax: `./8-json_api.py <letter>`
	* The letter is sent as the value of the variable `q`.
	* If no letter is provided, `q` is set to `""`.
	* If the response body is properly formatted and non-empty, it displays `[<id>] <name>`.
  * Utilizes `requests`.

* **9. GitHub Identification**
  * [10-my_github.py](./10-my_github.py): Python script to authenticate with GitHub using credentials (username and password) and retrieve the corresponding ID.
  * Syntax: `./10-my_github.py <username> <password>`
	* Utilizes `requests`.

* **10. Interview Time!**
  * [100-github_commits.py](./100-github_commits.py): Python script to list the 10 most recent comments of a specified GitHub repository using the GitHub API.
  * Syntax: `./100-github_commits.py <repository name> <owner name>`
	* Utilizes `requests`.