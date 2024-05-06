# Python - Network #0

This repository explores the utilization of `curl` commands within Bash scripts to handle various HTTP interactions. Below are the tasks included in this project:

## Tests :heavy_check_mark:

* [tests](./tests): This directory contains test files.

## Tasks :page_with_curl:

Please note that all `curl` commands in the Bash scripts are designed to communicate with a server set up on a provided container.

* **0. cURL body size**
  * [0-body_size.sh](./0-body_size.sh): This Bash script sends a `GET` request to a specified URL and displays the size of the response body in bytes.

* **1. cURL to the end**
  * [1-body.sh](./1-body.sh): This script sends a `GET` request to a given URL and displays the response body if the status code is `200`.

* **2. cURL Method**
  * [2-delete.sh](./2-delete.sh): Sends a `DELETE` request to a specified URL and displays the response body.

* **3. cURL only methods**
  * [3-methods.sh](./3-methods.sh): This script displays all HTTP methods accepted by the server of a given URL.

* **4. cURL headers**
  * [4-header.sh](./4-header.sh): Sends a `GET` request to a specified URL with a header variable `X-School-User-Id=98` and displays the response body.

* **5. cURL POST parameters**
  * [5-post_params.sh](./5-post_params.sh): Sends a `POST` request to a specified URL with the variables `email=test@gmail.com` and `subject=I will always be here for PLD`, displaying the response body.

* **6. Find a peak**
  * [6-peak.py](./6-peak.py): This Python program, meant for technical interview preparation, finds a peak in an unsorted list of integers.
  * [6-peak.txt](./6-peak.txt): Text file containing the complexity of the algorithm.

* **7. Only status code**
  * [100-status_code.sh](./100-status_code.sh): Sends a `GET` request to a specified URL without using pipes, redirections, `;`, or `&&`, displaying only the status code of the response.

* **8. cURL a JSON file**
  * [101-post_json.sh](./101-post_json.sh): Sends a JSON `POST` request with the contents of a provided file to a given URL and displays the response body.

* **9. Catch me if you can!**
  * [102-catch_me.sh](./102-catch_me.sh): Sends a request to `0.0.0.0:5000/catch_me`, causing the server to respond with a message containing `You got me!` in the response body.