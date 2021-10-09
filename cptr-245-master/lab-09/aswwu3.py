import sys
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import requests

def searchMask(self, name):
    xpath = "//a[contains(@href, 'https://aswwu.com/mask')]"
    self.driver.find_element_by_xpath(xpath).click()
    self.driver.find_element_by_id('mask-search-query').send_keys(name, Keys.ENTER)
    self.driver.implicitly_wait(5) # seconds
    xpath = "//search-results[contains(@ng-reflect-query,'" + name + "')]"
    self.driver.find_element_by_xpath(xpath)
    xpath = "//h4[contains(text(),'" + name + "')]"
    result = self.driver.find_elements_by_xpath(xpath)
    return result
# add login(), updateProfile(), and close() to ASWWU
# iterate over a dictionary with `for key, value in dict.items():`

def main():
  names = [ "Benko", "DePaula", "Fairchild", "Hartman", "Herbel", 
           "Hernandez", "Jones", "Moody", "Price", "Reklai", "Riggs", 
           "Smith", "Sukachevin", "Taylor", "Thomsen", "Tinker" ]
  start = time.time()
  for name in names:
    r = requests.get("https://aswwu.com/server/search/1920/" + name)
    print(name.encode() in r.content, r.status_code)
  end = time.time()
  print(end - start)

if __name__ == "__main__":
  main()
