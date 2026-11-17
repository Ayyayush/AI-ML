import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager

# setup driver
service = Service(ChromeDriverManager().install())
driver = webdriver.Chrome(service=service)

# open page
driver.get('https://www.ajio.com/men-backpacks/c/830201001')
time.sleep(3)

# initial height
old_height = driver.execute_script("return document.body.scrollHeight")

counter = 1
while True:
    # scroll to bottom
    driver.execute_script("window.scrollTo(0, document.body.scrollHeight)")
    time.sleep(2)

    # check new height
    new_height = driver.execute_script("return document.body.scrollHeight")

    print("Scroll:", counter)
    print("Old height:", old_height)
    print("New height:", new_height)
    print("-" * 30)

    counter += 1

    # stop condition
    if new_height == old_height:
        break

    old_height = new_height

# save HTML
html = driver.page_source
with open("ajio.html", "w", encoding="utf-8") as f:
    f.write(html)

driver.quit()