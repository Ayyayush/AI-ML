# open google.com
# search campusx
# open learnwith.campusx.in
# open DSMP course page

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from webdriver_manager.chrome import ChromeDriverManager
import time

# 1. Setup Chrome driver (auto handles driver version)
service = Service(ChromeDriverManager().install())
driver = webdriver.Chrome(service=service)

# 2. Open Google
driver.get("https://www.google.com")
time.sleep(2)

# 3. Find search box and type "CampusX"
search_box = driver.find_element(By.NAME, "q")
search_box.send_keys("CampusX")
time.sleep(1)
search_box.send_keys(Keys.ENTER)
time.sleep(2)

# 4. Click CampusX website link from search results
campusx_link = driver.find_element(By.XPATH, '//h3[contains(text(),"CampusX")]/parent::a')
campusx_link.click()
time.sleep(2)

# 5. Click DSMP course link on CampusX website
dsmp_link = driver.find_element(By.LINK_TEXT, "DSMP")
dsmp_link.click()
time.sleep(30)

# Close browser
driver.quit()