/**
 * ------------------------------------------------------------
 * ! NLP Cloud Playground
 * ------------------------------------------------------------
 * 
 * NLP Cloud Playground:
 * Online tool hai
 * jahan NLP models ko bina code likhe test kar sakte ho.
 * 
 * ------------------------------------------------------------
 * ! Full Form of NLP
 * ------------------------------------------------------------
 * 
 * Natural Language Processing
 * 
 * ------------------------------------------------------------
 * ! What is NLP?
 * ------------------------------------------------------------
 * 
 * AI ka field hai
 * jo human language ko:
 * 
 * - Understand
 * - Process
 * - Analyze
 * 
 * karta hai.
 * 
 * ------------------------------------------------------------
 * ! Why NLP Cloud Playground Useful?
 * ------------------------------------------------------------
 * 
 * Developers:
 * API integrate karne se pehle
 * model outputs easily test kar sakte hain.
 * 
 * ------------------------------------------------------------
 * ! Common NLP Use-cases
 * ------------------------------------------------------------
 * 
 * - Text Summarization
 * - Sentiment Analysis
 * - Translation
 * - Question Answering
 * - NER
 * - Chatbots
 * 
 * ------------------------------------------------------------
 * ! What is NER?
 * ------------------------------------------------------------
 * 
 * NER:
 * Named Entity Recognition
 * 
 * NLP ka task hai
 * jo text ke andar important entities identify karta hai.
 * 
 * ------------------------------------------------------------
 * ! Examples of Entities
 * ------------------------------------------------------------
 * 
 * Person:
 * Virat Kohli
 * 
 * Location:
 * Delhi
 * 
 * Organization:
 * Google
 * 
 * Date:
 * July 2025
 * 
 * ------------------------------------------------------------
 * ! Example of NER
 * ------------------------------------------------------------
 * 
 * Text:
 * 
 * "Amazon opened a new office in Bengaluru in July 2025."
 * 
 * Output:
 * 
 * Organization → Amazon
 * Location → Bengaluru
 * Date → July 2025
 * 
 * ------------------------------------------------------------
 * ! What is API?
 * ------------------------------------------------------------
 * 
 * API:
 * Application Programming Interface
 * 
 * ------------------------------------------------------------
 * ! Purpose of API
 * ------------------------------------------------------------
 * 
 * Do software systems ko:
 * Aapas me communicate karne deta hai.
 * 
 * ------------------------------------------------------------
 * ! API Real-life Example
 * ------------------------------------------------------------
 * 
 * Zomato:
 * "Pizza in Delhi" search karta hai
 * toh API request server ko jaati hai.
 * 
 * Server:
 * Pizza places ka response bhejta hai.
 * 
 * ------------------------------------------------------------
 * ! API Analogy
 * ------------------------------------------------------------
 * 
 * API:
 * Waiter ki tarah kaam karta hai.
 * 
 * Client request leta hai
 * aur server se response laata hai.
 * 
 * ------------------------------------------------------------
 * ! Important Terms
 * ------------------------------------------------------------
 * 
 * Client:
 * Request bhejne wala system.
 * 
 * Server:
 * Request process karne wala system.
 * 
 * Request:
 * Client ka input/action.
 * 
 * Response:
 * Server ka returned output.
 * 
 * ------------------------------------------------------------
 * ! API Endpoint
 * ------------------------------------------------------------
 * 
 * Specific URL:
 * Jahan request bheji jaati hai.
 * 
 * ------------------------------------------------------------
 * ! Installing NLP Cloud
 * ------------------------------------------------------------
 * 
 * pip install nlpcloud
 * 
 * ------------------------------------------------------------
 * ! Jupyter/Colab Installation
 * ------------------------------------------------------------
 * 
 * !pip install nlpcloud
 * 
 * ------------------------------------------------------------
 * ! Why ! Used in Jupyter?
 * ------------------------------------------------------------
 * 
 * Shell commands execute karne ke liye.
 * 
 * ------------------------------------------------------------
 * ! Importing NLP Cloud SDK
 * ------------------------------------------------------------
 * 
 * import nlpcloud
 * 
 * ------------------------------------------------------------
 * ! What is SDK?
 * ------------------------------------------------------------
 * 
 * SDK:
 * Software Development Kit
 * 
 * APIs use karne ke helper tools/library.
 * 
 * ------------------------------------------------------------
 * ! NLP Cloud Client Object
 * ------------------------------------------------------------
 * 
 * Client object:
 * NLP Cloud API se connection establish karta hai.
 * 
 * ------------------------------------------------------------
 * ! Example
 * ------------------------------------------------------------
 * 
 * client = nlpcloud.Client(
 *     "finetuned-llama-3-70b",
 *     "API_KEY",
 *     gpu=False
 * )
 * 
 * ------------------------------------------------------------
 * ! Meaning of Parameters
 * ------------------------------------------------------------
 * 
 * "finetuned-llama-3-70b":
 * Model name.
 * 
 * API_KEY:
 * Authentication key.
 * 
 * gpu=False:
 * GPU inference disable.
 * 
 * ------------------------------------------------------------
 * ! What is API Key?
 * ------------------------------------------------------------
 * 
 * Secret authentication token
 * jo authorized user verify karta hai.
 * 
 * ------------------------------------------------------------
 * ! Why API Key Secret Rakhni Chahiye?
 * ------------------------------------------------------------
 * 
 * Security reasons.
 * 
 * Unauthorized usage avoid karne ke liye.
 * 
 * ------------------------------------------------------------
 * ! What is GPU Inference?
 * ------------------------------------------------------------
 * 
 * GPU use karke:
 * Faster prediction generation.
 * 
 * ------------------------------------------------------------
 * ! What is Inference?
 * ------------------------------------------------------------
 * 
 * Trained model se:
 * Prediction/output generate karna.
 * 
 * ------------------------------------------------------------
 * ! entities() Method
 * ------------------------------------------------------------
 * 
 * NER perform karta hai.
 * 
 * ------------------------------------------------------------
 * ! Example of entities()
 * ------------------------------------------------------------
 * 
 * response = client.entities(
 *     \"\"\"
 *     John Doe started learning Javascript.
 *     He switched to Python later.
 *     He works at Google.
 *     \"\"\",
 * 
 *     searched_entity="programming languages"
 * )
 * 
 * ------------------------------------------------------------
 * ! searched_entity Meaning
 * ------------------------------------------------------------
 * 
 * Kis type ki entity search karni hai:
 * wo define karta hai.
 * 
 * ------------------------------------------------------------
 * ! Example
 * ------------------------------------------------------------
 * 
 * searched_entity="programming languages"
 * 
 * ------------------------------------------------------------
 * ! print(response)
 * ------------------------------------------------------------
 * 
 * API response display karta hai.
 * 
 * ------------------------------------------------------------
 * ! Response Contains
 * ------------------------------------------------------------
 * 
 * - Detected entities
 * - Labels
 * - Confidence scores
 * 
 * ------------------------------------------------------------
 * ! Confidence Score
 * ------------------------------------------------------------
 * 
 * Model:
 * Kitna sure hai prediction ke baare me.
 * 
 * ------------------------------------------------------------
 * ! Sentiment Analysis
 * ------------------------------------------------------------
 * 
 * Text ka emotion detect karna.
 * 
 * ------------------------------------------------------------
 * ! Common Sentiment Labels
 * ------------------------------------------------------------
 * 
 * - Positive
 * - Negative
 * - Neutral
 * 
 * ------------------------------------------------------------
 * ! Language Detection
 * ------------------------------------------------------------
 * 
 * Text kis language me likha hai:
 * usko detect karna.
 * 
 * ------------------------------------------------------------
 * ! Classification in NLP
 * ------------------------------------------------------------
 * 
 * Text ko:
 * Categories/labels assign karna.
 * 
 * ------------------------------------------------------------
 * ! What is Exception?
 * ------------------------------------------------------------
 * 
 * Runtime error.
 * 
 * ------------------------------------------------------------
 * ! Why try-except Used?
 * ------------------------------------------------------------
 * 
 * Runtime/API errors handle karne ke liye.
 * 
 * ------------------------------------------------------------
 * ! Example
 * ------------------------------------------------------------
 * 
 * try:
 * 
 *     response = client.entities(...)
 * 
 * except Exception as e:
 * 
 *     print(e)
 * 
 * ------------------------------------------------------------
 * ! Meaning of Exception as e
 * ------------------------------------------------------------
 * 
 * Error object:
 * e variable me store hota hai.
 * 
 * ------------------------------------------------------------
 * ! Why Exception Handling Important?
 * ------------------------------------------------------------
 * 
 * Program crash hone se bachata hai.
 * 
 * ------------------------------------------------------------
 * ! NLPApp Project
 * ------------------------------------------------------------
 * 
 * Ye:
 * Menu-driven NLP application hai.
 * 
 * Features:
 * 
 * - Registration
 * - Login
 * - NER
 * - Language Detection
 * - Sentiment Analysis
 * 
 * ------------------------------------------------------------
 * ! Constructor in NLPApp
 * ------------------------------------------------------------
 * 
 * def __init__(self):
 * 
 * Constructor:
 * Object create hote hi automatically call hota hai.
 * 
 * ------------------------------------------------------------
 * ! Private Database
 * ------------------------------------------------------------
 * 
 * self.__database = {}
 * 
 * Private dictionary hai
 * jisme:
 * 
 * email : [name,password]
 * 
 * store hota hai.
 * 
 * ------------------------------------------------------------
 * ! Why __database Private Banaya?
 * ------------------------------------------------------------
 * 
 * Encapsulation/Data hiding ke liye.
 * 
 * ------------------------------------------------------------
 * ! __first_menu()
 * ------------------------------------------------------------
 * 
 * App ka main starting menu.
 * 
 * ------------------------------------------------------------
 * ! Registration Flow
 * ------------------------------------------------------------
 * 
 * User:
 * 
 * - Name
 * - Email
 * - Password
 * 
 * enter karta hai.
 * 
 * ------------------------------------------------------------
 * ! Login Flow
 * ------------------------------------------------------------
 * 
 * Email/password verify hota hai.
 * 
 * ------------------------------------------------------------
 * ! Authentication
 * ------------------------------------------------------------
 * 
 * User verification process.
 * 
 * ------------------------------------------------------------
 * ! Why Email Used as Dictionary Key?
 * ------------------------------------------------------------
 * 
 * Email:
 * Unique identifier hota hai.
 * 
 * ------------------------------------------------------------
 * ! Second Menu Features
 * ------------------------------------------------------------
 * 
 * 1. NER
 * 2. Language Detection
 * 3. Sentiment Analysis
 * 4. Logout
 * 
 * ------------------------------------------------------------
 * ! NER Function
 * ------------------------------------------------------------
 * 
 * User:
 * 
 * - Paragraph deta hai
 * - Search entity deta hai
 * 
 * Fir:
 * API response entities return karta hai.
 * 
 * ------------------------------------------------------------
 * ! Language Detection Function
 * ------------------------------------------------------------
 * 
 * Input text ki language detect karta hai.
 * 
 * ------------------------------------------------------------
 * ! Sentiment Analysis Function
 * ------------------------------------------------------------
 * 
 * Text:
 * Positive/negative/neutral classify hota hai.
 * 
 * ------------------------------------------------------------
 * ! classification() Method
 * ------------------------------------------------------------
 * 
 * Labels ke basis par:
 * Text classify karta hai.
 * 
 * ------------------------------------------------------------
 * ! Important Logic
 * ------------------------------------------------------------
 * 
 * Highest score wala label:
 * Final sentiment maana gaya.
 * 
 * ------------------------------------------------------------
 * ! enumerate()
 * ------------------------------------------------------------
 * 
 * Index + value dono return karta hai.
 * 
 * ------------------------------------------------------------
 * ! lambda Function
 * ------------------------------------------------------------
 * 
 * Small anonymous function.
 * 
 * ------------------------------------------------------------
 * ! Example
 * ------------------------------------------------------------
 * 
 * lambda x:x[1]
 * 
 * ------------------------------------------------------------
 * ! sorted()
 * ------------------------------------------------------------
 * 
 * Data ko sort karta hai.
 * 
 * ------------------------------------------------------------
 * ! reverse=True
 * ------------------------------------------------------------
 * 
 * Descending order sorting.
 * 
 * ------------------------------------------------------------
 * ! Why OOP Used in NLPApp?
 * ------------------------------------------------------------
 * 
 * - Better organization
 * - Reusability
 * - Encapsulation
 * - Scalability
 * 
 * ------------------------------------------------------------
 * ! Feature Isolation
 * ------------------------------------------------------------
 * 
 * Har feature:
 * Separate method me divide kiya gaya.
 * 
 * ------------------------------------------------------------
 * ! Scalability
 * ------------------------------------------------------------
 * 
 * System ko:
 * Easily expand kar pana.
 * 
 * ------------------------------------------------------------
 * ! Future Features Add Kar Sakte Hain
 * ------------------------------------------------------------
 * 
 * - Translation
 * - Chatbot
 * - Spam Detection
 * - Summarization
 * 
 * ------------------------------------------------------------
 * ! Modular Programming
 * ------------------------------------------------------------
 * 
 * Code ko:
 * Small reusable parts me divide karna.
 * 
 * ------------------------------------------------------------
 * ! Reusability
 * ------------------------------------------------------------
 * 
 * Same code:
 * Multiple places use karna.
 * 
 * ------------------------------------------------------------
 * ! Maintainability
 * ------------------------------------------------------------
 * 
 * Code ko:
 * Easily update/fix kar pana.
 * 
 * ------------------------------------------------------------
 * ! Why This Project Good Resume Project Hai?
 * ------------------------------------------------------------
 * 
 * Kyunki:
 * 
 * - OOP
 * - APIs
 * - NLP
 * - Exception Handling
 * - Authentication
 * - Real-world concepts
 * 
 * use hue hain.
 * 
 * ------------------------------------------------------------
 * ! Final Summary
 * ------------------------------------------------------------
 * 
 * - NLP = Natural Language Processing
 * - NER = Named Entity Recognition
 * - API = Software communication bridge
 * - API Key = Authentication token
 * - entities() = NER method
 * - classification() = Sentiment analysis
 * - try-except = Error handling
 * - Encapsulation = Data hiding
 * - OOP = Better architecture
 * - Scalability = Easy expansion
 */