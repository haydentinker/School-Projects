# Chapter 3 -- k-Nearest Neighbors Algorithm

## Lab: Nearest Neighbors Programming Lab

* Implement the kNN algorithm as presented in chapter 3 in the book. (No approximate algorithms.)
* Implement the algorithm in Python 3.0.
* You may use libraries to support your algorithm, but you may not used a library to run k-Nearest Neighbors. (You must implement the algorithm.)
* Share your project with your partner so you can work together on the assignment.
* Test the implementation using the dataset we used in class and the book. (Provided in the data folder.)

## Programming Requirements

* The algorithm should be implemented in the machine learning template provided.
* Your modified `MLAlgorithm.py` file should be saved in a `src/knn` folder.
* The object should include a getAlgorithm, init, train, and getPrediction functions.
  * init -- Initialize the python object. Python dict with algorithm parameters. Values will be strings.
    * inputSize
    * outputSize
    * hiddenLayers (comma separated list of number for hidden nodes in each layers)
  * getAlgorithm -- Return the algorithm name.
    * RETURN: string
  * train -- Supply the training data. Two parts: data and labels.
    * PARAMETER: 2D list of data
    * PARAMETER: 2D list of results (only one column on a single result)
  * getPredictions -- Supply the new data and return the labels.
    * PARAMETER: 2D list of data
    * RETURN: 2D array of results (only one column on a single result)
* The algorithm should work on arbitrary number of data features.
* The algorithm should work on arbitrary number of hidden layers.
* The algorithm may internally alter the data if given an appropriate parameter.
    Example: normalize:true
* The algorithm should __not__ split the data into training and testing.
  The wrapper of the algorithm performs the data splitting.
* Please have detailed comments on the tasks performed by each function.

## Submission

Your submission will include two parts: D2L Peer Review and a gitlab repository.
On D2L, you will fill out a quiz that rates yourself and your partner.
The gitlab repository will hold your python code submission.
A few simple autograding tests are have been set up to help make sure your on the right path.

The python code will be evaluated in the CS Lab.

## Rubric

Points      |   | Description
----------- | - | ------------------
  6 points  |   | Algorithm Implementation
  6 points  |   | Autograding Passes
  2 points  |   | Linting Passes
  2 points  |   | Peer Review
  4 points  |   | Professionalism (Readable Code, Structure, Comments, etc.)
 20 points  |   | __**Total**__
