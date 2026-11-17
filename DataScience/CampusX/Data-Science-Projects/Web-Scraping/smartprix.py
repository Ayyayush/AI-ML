import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.options import Options

options = Options()
options.add_argument("--start-maximized")
options.add_argument("--disable-gpu")
options.add_argument("--no-sandbox")
options.add_argument("--disable-dev-shm-usage")

service = Service(
    r"C:\Users\Aayu0\Downloads\chromedriver-win64\chromedriver-win64\chromedriver.exe"
)

driver = webdriver.Chrome(service=service, options=options)

driver.get("https://www.smartprix.com/mobiles")
time.sleep(5)

driver.find_element(By.XPATH, '//aside//label[1]//input').click()
time.sleep(1)
driver.find_element(By.XPATH, '//aside//label[2]//input').click()
time.sleep(2)

while True:
    try:
        driver.find_element(By.XPATH, '//div[text()="Load More"]').click()
        time.sleep(2)
        print("Loaded more items")
    except:
        break

html = driver.page_source
with open("smartprix.html", "w", encoding="utf-8") as f:
    f.write(html)

input("Press Enter to close browser...")
driver.quit()