from selenium import webdriver
from selenium.webdriver.common.keys import Keys
driver = webdriver.Firefox()
driver.implicitly_wait(5) # seconds
driver.get('https://aswwu.com/')

# search mask
driver.find_element_by_xpath("//a[contains(@href, 'https://aswwu.com/mask')]").click()
driver.find_element_by_id('mask-search-query').clear()
driver.find_element_by_id('mask-search-query').send_keys('foster', Keys.ENTER)
driver.find_element_by_xpath("//search-results[contains(@ng-reflect-query,'foster')]")
fosters = driver.find_elements_by_xpath("//h4[contains(text(),'Foster')]")
assert(len(fosters) == 2)
