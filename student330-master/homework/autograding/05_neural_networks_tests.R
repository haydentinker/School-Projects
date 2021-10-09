#################################################
# Tests for neural_networks.Rmd
#################################################

source(here("homework","autograding","autograder.R"))

.AutograderInit = function() {
  .AutograderSetUp(5)   # Put total number of questions here
}

.AutogradeStep1 = function() {
  problemNumber <- 1
  .AutograderScores[problemNumber] <<- 0
  num_tests <- 1 # change this to however many checkpoints you want
  .AutograderTests_failed <<- num_tests
  
  .AutograderCheckPoint(checkpoint_number = 1,
                        test = TRUE, # add check here
                        correct_message = "Autograding may be implemented in the future.",
                        error_message = "Autograding may be implemented in the future.")
  
  .AutograderReturnScore(problemNumber, num_tests, .AutograderTests_failed)
  if(.AutograderTests_failed == 0){
    .AutograderScores[problemNumber] <<- 1
  }
}

.AutogradeStep2 = function() {
  problemNumber <- 2
  .AutograderScores[problemNumber] <<- 0
  num_tests <- 1 # change this to however many checkpoints you want
  .AutograderTests_failed <<- num_tests
  
  .AutograderCheckPoint(checkpoint_number = 1,
                        test = TRUE, # add check here
                        correct_message = "Autograding may be implemented in the future.",
                        error_message = "Autograding may be implemented in the future.")
  
  .AutograderReturnScore(problemNumber, num_tests, .AutograderTests_failed)
  if(.AutograderTests_failed == 0){
    .AutograderScores[problemNumber] <<- 1
  }
}

.AutogradeStep3 = function() {
  problemNumber <- 3
  .AutograderScores[problemNumber] <<- 0
  num_tests <- 2 # change this to however many checkpoints you want
  .AutograderTests_failed <<- num_tests
  
  .AutograderCheckPoint(checkpoint_number = 1,
                        test = TRUE, # add check here
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderCheckPoint(checkpoint_number = 2,
                        test = TRUE,
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderReturnScore(problemNumber, num_tests, .AutograderTests_failed)
  if(.AutograderTests_failed == 0){
    .AutograderScores[problemNumber] <<- 1
  }
}

.AutogradeStep4 = function() {
  problemNumber <- 4
  .AutograderScores[problemNumber] <<- 0
  num_tests <<- 2 # change this to however many checkpoints you want
  .AutograderTests_failed <<- num_tests
  
  .AutograderCheckPoint(checkpoint_number = 1,
                        test = TRUE, # add check here
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderCheckPoint(checkpoint_number = 2,
                        test = TRUE,
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderReturnScore(problemNumber, num_tests, .AutograderTests_failed)
  if(.AutograderTests_failed == 0){
    .AutograderScores[problemNumber] <<- 1
  }
}

.AutogradeStep5 = function() {
  problemNumber <- 5
  .AutograderScores[problemNumber] <<- 0
  num_tests <- 2 # change this to however many checkpoints you want
  .AutograderTests_failed <<- num_tests
  
  .AutograderCheckPoint(checkpoint_number = 1,
                        test = TRUE, # add check here
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderCheckPoint(checkpoint_number = 2,
                        test = TRUE,
                        correct_message = "<Pending>",
                        error_message = "<Pending>")
  
  .AutograderReturnScore(problemNumber, num_tests, .AutograderTests_failed)
  if(.AutograderTests_failed == 0){
    .AutograderScores[problemNumber] <<- 1
  }
}