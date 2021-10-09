#  Lab 2 -- Naive Bayes Algorithm

## Lab Details

* Implement the Naive Bayes algorithm as presented in chapter 4 in the book.
* You may use libraries to support your algorithm, but you may not used a library to run Naive Bayes. (You must implement the algorithm.) Please include a _requirements.txt_ with any libraries that need to be installed.
* Share your project (gitlab repository) with your partner so you can work together on the assignment.
* Test the implementation using the dataset we used in class and the one in the book.

## Resources

* Online Tutorial and Example -- https://www.analyticsvidhya.com/blog/2015/09/naive-bayes-explained/

## Programming Requirements

* The algorithm should be implemented in the machine learning template provided.
* Your modified `MLAlgorithm.py` file should be saved in a `src/naive_bayes` folder.
* The object should include a getAlgorithm, init, train, and getPrediction functions.
  * init -- Initialize the python object. Python dict with algorithm parameters. Values will be strings.
    * laplace (optional)
  * getAlgorithm -- Return the algorithm name.
    * RETURN: string
  * train -- Supply the training data. Two parts: data and labels.
    * PARAMETER: 2D list of data
    * PARAMETER: 2D list of results (only one column on a single result)
  * getPredictions -- Supply the new data and return the labels.
    * PARAMETER: 2D list of data
    * RETURN: 2D array of results (only one column on a single result)
* The algorithm should work with missing data by using _Laplace estimator_.

    Example: laplace:true

* The algorithm should work on arbitrary number of data features.

* The algorithm should __not__ split the data into training and testing.
  The wrapper of the algorithm performs the data splitting.

* Please have detailed comments on the tasks performed by each function.

Example commands for this lab:

```sh
    python3 run_ml_algorithm.py -a naive_bayes -d data/breast-cancer.data.csv -f "9"
    python3 run_ml_algorithm.py -a naive_bayes -d data/mushrooms.csv -f "22" -p "laplace:true"
```

## Submission

Your submission will include two parts: D2L Peer Review and a gitlab repository.
On D2L, you will fill out a quiz that rates yourself and your partner.
The gitlab repository will hold your python code submission.
A few simple autograding tests are have been set up to help make sure your on the right path.

The python code will be evaluated on Code.CS and the results of the GitLab CI.

The code will be run using two datasets: [breast-cancer](https://archive.ics.uci.edu/ml/datasets/breast+cancer) and [mushrooms](https://archive.ics.uci.edu/ml/datasets/mushroom).
Note the data columns have been shifted to have the classification column at the end of the csv file.

## Rubric

Points      |   | Description
----------- | - | ------------------
  6 points  |   | Algorithm Implementation
  6 points  |   | Autograding Passes
  2 points  |   | Linting Passes
  2 points  |   | Peer Review
  4 points  |   | Professionalism (Readable Code, Structure, Comments, etc.)
 20 points  |   | __**Total**__
