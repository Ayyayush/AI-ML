/**
 * ! Loss Function in Perceptron
 *
 * humne perceptron trick padha tha par wo ek jugaadu / heuristic tarika tha
 * ab hum dekhte h usme actual problem kya thi
 * uske baad hum loss function padhenge
 *
 * ye lecture bahut important h kyunki aage ke optimization
 * aur gradient descent concepts ka base yahi h
 *
 *
 * ---------------------------------------------------
 * ! Revision
 * ---------------------------------------------------
 * ab tak humne establish kiya:
 *
 * perceptron ek mathematical model h
 * jo biological neuron se inspired h
 *
 * isme main operation hota h:
 *
 * z = w1x1 + w2x2 + b
 *
 * generalized form:
 *
 * z = wTx + b
 *
 * yaha:
 * wT = transpose of weight vector
 * x  = feature vector
 * b  = bias
 *
 * fir z activation function se pass hota h
 * aur final output milta h
 *
 * geometric intuition:
 * perceptron basically ek line / hyperplane hota h
 * jo binary classification karta h
 *
 * har ML model ki tarah isme bhi 2 major cheezein hoti h:
 *
 * 1. prediction
 * 2. training
 *
 * humne perceptron learning rule bhi padha tha
 * jisme random misclassified points pick karke
 * weights update karte the
 *
 * wo trick kaam toh karti h
 * but usme kuch theoretical aur practical problems h
 *
 *
 * ---------------------------------------------------
 * ! Problems with Perceptron Trick
 * ---------------------------------------------------
 * ? Problem 1:
 * perceptron trick hume ye nhi btati
 * ki kaunsi line actually better h
 *
 * maan lo:
 * line A bhi mil gyi
 * line B bhi mil gyi
 *
 * ab compare kaise karenge?
 *
 * perceptron trick sirf line dhoondh leti h
 * but performance quantify nhi karti
 *
 * we cannot measure:
 * "kitni acchi classification ho rhi h"
 *
 * i.e.:
 * we cannot quantify the error
 *
 * ? Problem 2:
 * theoretically possible h ki convergence na ho
 *
 * example:
 * baar baar same point pick ho jaye
 * ya repeatedly bad updates hote rahe
 *
 * practically rare h
 * but theoretically possible h
 *
 * isi liye hume ek mathematical metric chahiye
 * jo error ko measure kare
 *
 * ussi ko bolte h:
 * ! Loss Function
 *
 *
 * ---------------------------------------------------
 * ! Loss Function
 * ---------------------------------------------------
 * definition:
 *
 * machine learning mein loss function ek mathematical method h
 * jo batata h ki model kitna accha ya kitna kharab perform kar rha h
 *
 * it quantifies the error
 *
 * simple words:
 *
 * loss function = error measuring function
 *
 * maan lo 2 different lines h:
 *
 * line A
 * line B
 *
 * ab hume decide karna h:
 * kaunsi better h?
 *
 * toh loss function dono lines ke liye
 * ek numerical error value return karega
 *
 * jiska error kam:
 * wo better model
 *
 * generally:
 *
 * Loss = f(w1,w2,b)
 *
 * weights aur bias input doge
 * toh output mein error milega
 *
 *
 * ---------------------------------------------------
 * ! Examples of Loss Functions
 * ---------------------------------------------------
 * ? Linear Regression
 * Mean Squared Error (MSE)
 *
 * formula:
 *
 * MSE = (1/n) * Σ(yi - yi^)^2
 *
 * ? Logistic Regression
 * Log Loss
 *
 * ? SVM
 * Hinge Loss
 *
 * ? Perceptron
 * Perceptron Loss
 *
 * 1-0 loss bhi hota h
 *
 * ML mein bahut saare loss functions hote h
 * aur hum khud ke innovative loss functions bhi bana skte h
 *
 *
 * ---------------------------------------------------
 * ! Finalizing Loss Function for Perceptron
 * ---------------------------------------------------
 * ek simple idea:
 *
 * "number of misclassified points"
 *
 * isko bhi loss function bana skte h
 *
 * example:
 *
 * line A:
 * 5 points wrong
 *
 * line B:
 * 2 points wrong
 *
 * clearly line B better h
 *
 * but ye bhi perfect nhi h
 *
 * kyunki:
 *
 * har galti equal nhi hoti
 *
 * koi point line ke bahut paas ho skta h
 * aur koi bahut door
 *
 * jo point jyada door h:
 * wo jyada bada error h
 *
 *
 * ---------------------------------------------------
 * ! Important Intuition
 * ---------------------------------------------------
 * maan lo ek line h
 *
 * 2 points correctly classified h
 * aur 2 misclassified h
 *
 * ab:
 * misclassified points ka line se distance dekho
 *
 * jis point ka perpendicular distance kam:
 * wo thoda galat
 *
 * jis point ka perpendicular distance jyada:
 * wo bahut galat
 *
 * matlab:
 * error ki magnitude bhi important h
 *
 *
 * ---------------------------------------------------
 * ! Actual Distance vs Dot Product Value
 * ---------------------------------------------------
 * theoretically perpendicular distance use kar skte the
 * but practical implementation mein direct distance use nhi hota
 *
 * instead:
 *
 * hum point ko line equation mein put karte h
 *
 * z = wTx + b
 *
 * jo value aati h
 * wo distance ke proportional hoti h
 *
 * agar magnitude bada:
 * matlab point line se jyada confidently side pe h
 *
 * ye approach prefer ki gayi because:
 *
 * 1. dot product based h
 * 2. computationally efficient h
 * 3. vectorized operations easy ho jate h
 *
 *
 * ---------------------------------------------------
 * ! Perceptron Loss Function
 * ---------------------------------------------------
 * perceptron loss sirf misclassified points pe apply hota h
 *
 * mathematically:
 *
 * Loss = -y(wTx + b)
 *
 * only for misclassified points
 *
 * agar point correctly classified h:
 *
 * Loss = 0
 *
 * intuition:
 *
 * agar y(wTx+b) negative aa rha h
 * matlab point wrong side pe h
 *
 * aur jitna jyada negative:
 * utna jyada bada error
 *
 *
 * ---------------------------------------------------
 * ! Why y(wTx+b)?
 * ---------------------------------------------------
 * y = actual label
 *
 * generally:
 *
 * y belongs to {-1,+1}
 *
 * case 1:
 * correct classification
 *
 * y(wTx+b) > 0
 *
 * case 2:
 * wrong classification
 *
 * y(wTx+b) < 0
 *
 * isi wajah se negative values pe penalty lagayi jati h
 *
 *
 * ---------------------------------------------------
 * ! Different ML Algorithms and Their Loss
 * ---------------------------------------------------
 * Linear Regression ---> Mean Squared Error (MSE)
 * Logistic Regression ---> Log Loss
 * SVM ---> Hinge Loss
 * Perceptron ---> Perceptron Loss
 *
 *
 * ---------------------------------------------------
 * ! Actual Loss Used in Scikit-Learn SGD
 * ---------------------------------------------------
 * scikit-learn mein optimized implementation use hota h
 * internally SGD use hota h
 *
 * SGD = Stochastic Gradient Descent
 * general error function:
 * E(w,b) = (1/n) * ΣL(yi,f(xi)) + ΣR(w)
 *
 * yaha:
 * L    = loss function
 * R(w) = regularization term
 *
 * model function:
 * f(xi) = wTxi + b
 *
 * perceptron style loss:
 * L(yi,f(xi)) = max(0,-yi*f(xi))
 *
 * final overall loss:
 * L = (1/n) * Σmax(0,-yi*f(xi))
 *
 * yaha:
 * yi = actual label
 * constant hota h
 *
 * f(xi) = predicted score
 * agar:
 * yi*f(xi) positive h
 * toh point correctly classified h
 * agar:
 * yi*f(xi) negative h
 * toh point wrong classified h
 *
 * max(0,...) isliye use kiya
 * taaki correctly classified points ka loss 0 ho jaye
 * 
 * 
 * ! Explanation of Loss Function
 *                 n
 * L = (1/n) Σ max(0,1 - yi*f(xi))
 *                i=1
 * 
 * this is similar to hinge loss
 * 
 * where:
 * yi    = actual output label
 * f(xi) = predicted value
 * 
 * and:
 * f(xi) = w1x1 + w2x2 + b
 * 
 * max(0,1 - yi*f(xi))
 * 
 * max function ka matlab:
 * dono values mein jo badi hogi wo choose hogi
 * 
 * Example:
 * max(0,5) = 5
 * max(0,-3) = 0
 * 
 * agar:
 * 1 - yi*f(xi) negative aaya
 * toh max(0,x) => 0 ho jayega
 * iska matlab point safely classify hua h
 * 
 * agar:
 * 1 - yi*f(xi) positive aaya
 * toh wahi loss ban jayega
 * iska matlab point galat ya risky classify hua h
 * 
 * 
 * 
 * ! Geometric Interpretation of Loss Function
 * Here we are NOT focusing on SVM mathematics deeply.
 * Main goal:
 * understand geometrically what the loss function means.
 * 
 * We have:
 * Green points -> Correct class
 * Red points   -> Other class
 * 
 * and a separating line:
 * Decision Boundary
 * 
 * SVM tries to place this boundary
 * such that classes separate properly.
 * 
 * 
 * 
 * ! Important Intuition
 * Loss function checks:
 * "How good or bad is the boundary?"
 * 
 * instead of only checking:
 * correct / incorrect
 * 
 * it also checks:
 * HOW FAR the point is from boundary
 * 
 * 
 * 
 * ! Geometric Meaning of yi*f(xi)
 * this term tells:
 * 1. point boundary ke kis side h
 * 2. kitni confidence se h
 * 
 * agar:
 * yi*f(xi) positive h
 * matlab point correct side pe h
 * 
 * agar:
 * yi*f(xi) negative h
 * matlab point wrong side pe h
 * 
 * magnitude jitna bada
 * utni confidence jyada
 * 
 * 
 * 
 * ! CASE 1
 * Point correctly classified
 * and far away from boundary
 * 
 *              *
 * ---------------------------   <- boundary
 * 
 * then:
 * yi*f(xi) becomes large positive
 * 
 * so:
 * 1 - yi*f(xi)
 * negative ho jayega
 * 
 * therefore:
 * max(0,negative) = 0
 * 
 * meaning:
 * no penalty because point safely classify hua h
 * 
 * 
 * 
 * ! CASE 2
 * Point correctly classified
 * but very close to boundary
 * 
 *          *
 * ---------------------------   <- boundary
 * 
 * here:
 * yi*f(xi) positive h but small h
 * 
 * so:
 * 1 - yi*f(xi)
 * small positive aayega
 * 
 * therefore:
 * small loss
 * 
 * meaning:
 * boundary risky h
 * thoda sa movement bhi point ko wrong side bhej skta h
 * 
 * 
 * 
 * ! CASE 3
 * Point wrong side of boundary
 * 
 * ---------------------------   <- boundary
 *          *
 * 
 * then:
 * yi*f(xi) negative ho jayega
 * 
 * so:
 * 1 - yi*f(xi)
 * large positive ho jayega
 * 
 * hence:
 * large loss
 * 
 * meaning:
 * bad classification
 * 
 * 
 * 
 * ! Real Geometric Interpretation
 * Loss function behave karta h:
 * "Punishment based on distance from correct side of boundary"
 * 
 * far on correct side
 * -> no punishment
 * 
 * near boundary
 * -> small punishment
 * 
 * wrong side
 * -> large punishment
 * 
 * 
 * 
 * ! Main Goal of Training
 * During training:
 * model shift aur rotate karta h boundary line ko
 * 
 * taaki:
 * most points apne correct side pe
 * aur jyada door chale jaye
 * 
 * 
 * 
 * ! 4 Possible Outcomes
 * line 4 tarike ki ho skti h:
 * 
 * 1. data ne bola placement hoga
 *    humne bhi bola
 * 
 * 2. data ne nhi bola
 *    humne bola
 * 
 * 3. data ne bola
 *    humne nhi bola
 * 
 * 4. data ne nhi bola
 *    humne bhi nhi bola
 * 
 * agar humne point ko sahi classify kiya
 * toh uska contribution loss function mein zero hoga
 * 
 * 
 * 
 * ! Gradient Descent
 * ! What is Gradient Descent?
 * Gradient Descent ek optimization algorithm h
 * jo loss ko minimum karne ki koshish karta h
 * 
 * simple language mein:
 * imagine tum mountain ke top pe khade ho
 * aur niche valley tak jana h
 * 
 * tum kya karoge?
 * jis direction mein slope niche ja rha h
 * uss direction mein move karoge
 * 
 * exactly wahi gradient descent karta h
 * 
 * ML mein:
 * mountain = loss graph
 * top = high loss
 * valley bottom = minimum loss
 * 
 * gradient descent:
 * weights ko aise move karta h
 * jisse loss kam hota jaye
 * 
 * 
 * 
 * ! Update Rule
 * Hume ek loop chalana h:
 * for(i in epochs)
 * 
 * hum w1,w2 aur b ki values randomly le skte h
 * then repeatedly update karenge:
 * 
 * w1 = w1 - η(dL/dw1)
 * w2 = w2 - η(dL/dw2)
 * b  = b  - η(dL/db)
 * 
 * where:
 * η = learning rate
 * 
 * dL/dw1 means:
 * "loss kitna change ho rha h agar hum w1 ko thoda sa change kare"
 * 
 * 
 * 
 * ! What is Differentiation?
 * differentiation ka simple matlab:
 * "change ko measure karna"
 * 
 * Example:
 * agar car slow chal rhi thi
 * aur suddenly fast hone lagi
 * toh:
 * speed change hui
 * 
 * differentiation bhi wahi dekhta h:
 * "input thoda badalne pe output kitna fast change ho rha h"
 * 
 * mathematically:
 * differentiation slope nikalta h
 * 
 * Example:
 * y = x²
 * 
 * differentiation:
 * dy/dx = 2x
 * 
 * iska matlab:
 * x change karne pe y kitni speed se badal rha h
 * 
 * 
 * 
 * ! Example for Small Kid Intuition
 * maan lo tum slide pe ho
 * 
 * agar slide jyada steep h
 * toh tum fast niche aaoge
 * 
 * agar slide flat h
 * toh slowly aaoge
 * 
 * differentiation:
 * slide ki steepness measure karta h
 * 
 * ML mein differentiation batata h:
 * "kis direction mein move kare taaki loss jaldi kam ho"
 * 
 * 
 * 
 * ! Why Minus Sign?
 * w1 = w1 - η(dL/dw1)
 * 
 * minus isliye use karte h
 * kyunki differentiation uphill direction batata h
 * aur hume downhill jana hota h taaki loss kam ho
 * 
 * isliye negative sign lagate h
 * 
 * 
 * 
 * ! Differentiating Loss Function
 * toh ab hum:
 * loss function ko differentiate karenge
 * with respect to:
 * w1,w2 and b
 * 
 * where:
 * f(xi) = w1x1 + w2x2 + b
 * 
 * phir:
 * gradients milenge
 * aur un gradients ki help se:
 * weights update honge
 * 
 * aur dheere dheere:
 * better decision boundary milegi
 * 
 * 
 * /**
 * 
 * 
 * ! More Loss Functions
 * perceptron is very flexible because of its design
 * 
 * matlab:
 * kal ko agar architecture mein kuch change karna pade
 * toh easily kar skte h
 * 
 * for example:
 * agar step activation function ki jagah
 * sigmoid activation function use kare
 * 
 * sigmoid formula:
 * σ(z) = 1 / (1 + e^-z)
 * 
 * toh ab output:
 * 0 ya 1 directly nhi aayega
 * 
 * instead:
 * probabilities aayengi
 * 
 * Example:
 * 0.92
 * 0.14
 * 0.78
 * 
 * iska matlab:
 * model confidence batata h
 * 
 * 
 * 
 * ! Binary Cross Entropy Loss
 * agar activation function sigmoid h
 * toh generally hum:
 * Binary Cross Entropy Loss use karte h
 * 
 * formula:
 * 
 * L = -[yi log(ŷi) + (1-yi)log(1-ŷi)]
 * 
 * where:
 * yi  = actual output
 * ŷi = predicted probability
 * 
 * isko Log Loss bhi bolte h
 * 
 * SGD lagayenge:
 * SGD = Stochastic Gradient Descent
 * 
 * toh output mein probabilities milengi
 * 
 * 
 * 
 * ! Why People Say
 * "Perceptron = Logistic Regression"
 * kabhi kabhi suna hoga:
 * perceptron = logistic regression
 * 
 * ye tab hota h jab:
 * 
 * activation function:
 * sigmoid ho
 * 
 * aur:
 * loss function:
 * binary cross entropy ho
 * 
 * tab mathematically system
 * logistic regression jaisa behave karta h
 * 
 * 
 * 
 * ! Multi Class Classification
 * kal ko multiclass classification use karna pade
 * 
 * Example:
 * cat / dog / horse
 * 
 * ya:
 * red / blue / green
 * 
 * toh binary classification ka sigmoid kaam nhi karega
 * 
 * waha:
 * softmax activation function use hota h
 * 
 * 
 * 
 * ! Softmax Function
 * softmax formula:
 * 
 * softmax(z_i) = e^zi / Σe^zj
 * 
 * ye kya karta h?
 * 
 * saare outputs ko probabilities mein convert karta h
 * aur:
 * sab probabilities ka sum = 1 hota h
 * 
 * Example:
 * cat   -> 0.7
 * dog   -> 0.2
 * horse -> 0.1
 * 
 * total:
 * 1.0
 * 
 * 
 * 
 * ! Categorical Cross Entropy
 * multiclass classification mein:
 * loss function generally hota h:
 * 
 * Categorical Cross Entropy
 * 
 * formula:
 * 
 * L = - Σ yi log(ŷi)
 * 
 * yaha:
 * yi  = actual class
 * ŷi = predicted probability
 * 
 * 
 * 
 * ! Softmax Regression
 * so ye case ho gya:
 * Softmax Regression ka
 * 
 * basically:
 * logistic regression ka multiclass version
 * 
 * 
 * 
 * ! Perceptron for Regression
 * perceptron ko hum regression ke liye bhi use kar skte h
 * 
 * bas:
 * step activation function ke badle
 * linear activation function use karna hoga
 * 
 * linear activation:
 * output directly pass kar deta h
 * 
 * formula:
 * f(x) = x
 * 
 * 
 * 
 * ! Linear Regression
 * agar:
 * activation function = linear
 * 
 * aur:
 * loss function = Mean Squared Error
 * 
 * formula:
 * MSE = (1/n) Σ(yi - ŷi)^2
 * 
 * toh:
 * ye Linear Regression ban jata h
 * 
 * 
 * 
 * ! Main Intuition
 * perceptron ka core structure same rehta h:
 * 
 * weighted sum:
 * z = wTx + b
 * 
 * bas:
 * activation function aur loss function badalne se
 * pura ML algorithm change ho jata h
 * 
 * isi liye:
 * neural networks are very flexible
 * 
 *
 * 
 * 
 * ! Core Intuition Summary
 * perceptron trick:
 * sirf line find karti thi
 * 
 * loss function:
 * batata h line kitni acchi h
 * 
 * optimization algorithms:
 * loss ko minimum karne ki koshish karte h
 * 
 * ML ka core goal:
 * "find weights such that loss minimum ho jaye"
 *
 */