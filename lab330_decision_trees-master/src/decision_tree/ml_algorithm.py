#!/usr/bin/python
'''============================================================================
# Name: Example
# Username:tinkha
# Username:taylev
# Course: CPTR330
# Assignment: Lab 3
# Description: Implementation of the ML algorithm Decision Tree.
#============================================================================'''


class MLAlgorithm:
    """
    Implement Decision Tree
    """
    def __init__(self, parameters):
        """
        Initializes all the variable for the algorithm.
        Parameters will hold key:value pairs for defining details in the
        algorithm.
        """
        if 'max_depth' in parameters.keys():
            self.max_depth = int(parameters['max_depth'])
        else:
            self.max_depth = 5

        if 'min_size' in parameters.keys():
            self.min_size = int(parameters['min_size'])
        else:
            self.min_size = 10

        self.training_set = None
        self.labels_set = None
        self.tree = None

    @classmethod
    def get_algorithm(cls):
        """
        Returns the name of the algorithm.
        """
        return "Decision Tree"

    def train(self, dataset, labels):
        """
        Train the model based on the dataset and labels.
        """
        self.training_set = [l+d for l, d in zip(labels, dataset)]
        self.labels_set = labels
        self.build_tree()

    def build_tree(self):
        """
        Builds a decision tree
        """
        root = self.get_split(self.training_set)
        self.split(root, self.max_depth, self.min_size, 1)
        self.tree = root

    def get_predictions(self, test_set):
        """
        Return the predictions for testSet using the algorithm model.
        """
        one_pred = []
        predictions = []
        for row in test_set:
            one_pred = self.predict(self.tree, row)
            predictions.append(one_pred)
        return predictions

    def split(self, node, max_depth, min_size, depth):
        """
        Creates child splits for a node or make terminal
        This checks if there needs to be a split, and processes the
        left and right children.
        """
        left, right = node['groups']
        del node['groups']
        if not left or not right:
            node['left'] = node['right'] = self.to_terminal(left + right)
            return
        if depth >= max_depth:
            node['left'], node['right'] = self.to_terminal(left), self.to_terminal(right)
            return
        if len(left) <= min_size:
            node['left'] = self.to_terminal(left)
        else:
            node['left'] = self.get_split(left)
            self.split(node['left'], self.max_depth, self.min_size, depth+1)
        if len(right) <= min_size:
            node['right'] = self.to_terminal(right)
        else:
            node['right'] = self.get_split(right)
            self.split(node['right'], self.max_depth, self.min_size, depth+1)

    @classmethod
    def gini_index(cls, groups, classes):
        """
        GINI index, sums the weights for each group, and scores each group
        based on the class scores and relative group size.
        """
        n_instances = float(sum([len(group) for group in groups]))

        gini = 0.0
        for group in groups:
            size = float(len(group))

            if size == 0:
                continue
            score = 0.0

            for class_val in classes:
                tmp = [row[-1] for row in group].count(class_val) / size
                score += tmp * tmp

            gini += (1.0 - score) * (size / n_instances)
        return gini

    @classmethod
    def to_terminal(cls, group):
        """
        Creates a terminal node value
        """
        outcomes = [row[-1] for row in group]
        return max(set(outcomes), key=outcomes.count)

    @classmethod
    def test_split(cls, index, value, dataset):
        """
        Split a dataset based on an attribute and an attribute value
        """
        left, right = list(), list()
        for row in dataset:
            if row[index] < value:
                left.append(row)
            else:
                right.append(row)
        return left, right

    def get_split(self, dataset):
        """
        Selects the best split point for a dataset
        """
        class_values = list(set(row[-1] for row in dataset))
        b_index, b_value, b_score, b_groups = 999, 999, 999, None
        for index in range(len(dataset[0])-1):
            for row in dataset:
                groups = test_split(index, row[index], dataset)
                gini = self.gini_index(groups, class_values)
                if gini < b_score:
                    b_index, b_value, b_score, b_groups = index, row[index], gini, groups
        return {'index': b_index, 'value': b_value, 'groups': b_groups}

    def predict(self, node, row):
        """
        Make a prediction with a decision tree
        """
        if row[node['index']] < node['value']:
            if isinstance(node['left'], dict):
                return self.predict(node['left'], row)
            return [node['left']]
        if isinstance(node['right'], dict):
            return self.predict(node['right'], row)
        return [node['right']]
