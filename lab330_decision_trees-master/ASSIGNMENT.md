#  Lab 3 -- Decision Tree Algorithm

## Lab Details

* Implement the __Decision Tree__ algorithm as presented in chapter 5 in the book.
* You may use libraries to support your algorithm, but you may not used a library to build your decision tree or implement the predict function. (You must implement the algorithm.) Please include a _requirements.txt_ with any libraries that need to be installed.
* Share your project (gitlab repository) with your partner so you can work together on the assignment.
* Test the implementation using the dataset we used in class and the one in the book.

## Resources

* Online Tutorial and Example -- <https://www.datacamp.com/community/tutorials/decision-tree-classification-python>
* Second Example -- <https://towardsdatascience.com/decision-trees-in-machine-learning-641b9c4e8052>

## Programming Requirements

* The algorithm should be implemented in the machine learning template provided.

* Your modified __MLAlgorithm.py__ file should be saved in a __decision_tree__ folder.

* The object should include a `get_algorithm`, `__init__`, `train`, and `get_prediction` functions.
  * `__init__` -- Initialize the python object. Python dict with algorithm parameters. Values will be strings.
    * PARAMETER: max_depth (optional)
    * PARAMETER: min_size (optional)
  * `get_a_lgorithm` -- Return the algorithm name.
    * RETURN: string
  * `train` -- Supply the training data. Two parts: data and labels.
    * PARAMETER: 2D list of data
    * PARAMETER: 2D list of results (only one column on a single result)
  * `get_predictions` -- Supply the new data and return the labels.
    * PARAMETER: 2D list of data
    * RETURN: 2D array of results (only one column on a single result)

* The algorithm should work on arbitrary number of data features.

* While many algorithm choices exist for building a decision tree, please use CART with a Gini index.

* The algorithm may internally alter the data if given an appropriate parameter.

  * normalize:true (boolean)
  * max_depth:5 (int)
  * min_size:10 (int)

* The algorithm should __not__ split the data into training and testing.
  The wrapper of the algorithm performs the data splitting.

* Please have detailed comments on the tasks performed by each function.

Example commands for this lab:

```sh
python3 run_ml_algorithm.py -a decision_tree -d data/iris.data.csv -f "4"
python3 run_ml_algorithm.py -a decision_tree -d data/data_banknote_authentication.txt -f "4" -p "max_depth:5|min_size:10"
```

## Submission

Your submission will include two parts: D2L Peer Review and a gitlab repository.
On D2L, you will fill out a quiz that rates yourself and your partner.
The gitlab repository will hold your python code submission.

A few autograding tests are have been set up to help make sure your on the right path.
These tests run your code on two datasets: [iris](https://archive.ics.uci.edu/ml/datasets/iris) and [bank note authentication](https://archive.ics.uci.edu/ml/datasets/banknote+authentication).
The python code will be evaluated on Code.CS and the results of the GitLab CI.

## Rubric

Points      |   | Description
----------- | - | ------------------
  5 points  |   | Algorithm Basics - Implementation
  5 points  |   | Algorithm Options - Normalization
  5 points  |   | Autograding Passes
  5 points  |   | Linting Passes
  5 points  |   | Peer Review
  5 points  |   | Professionalism (Readable Code, Structure, Comments, etc.)
 30 points  |   | __**Total**__
