/**
 * ============================================================
 * ! TYPES OF GRADIENT DESCENT
 * ============================================================
 *
 * Gradient Descent ko mainly 3 categories mein divide karte hain:
 *
 *                 Gradient Descent
 *                        |
 *      ----------------------------------
 *      |               |                |
 *   Batch GD      Stochastic GD     Mini Batch GD
 *
 * ============================================================
 * ! RECAP OF GRADIENT DESCENT
 * ============================================================
 *
 * Gradient Descent ek Optimization Algorithm hai
 * jo Loss Function ko minimize karne ki koshish karta hai.
 *
 * Definition:
 * Optimization
 * =
 * Best parameter values find karna
 * jisse loss minimum ho jaye.
 *
 * Update Rule:
 *
 * m = m - η(∂L/∂m)
 *
 * b = b - η(∂L/∂b)
 *
 * where
 *
 * η (eta)
 * =
 * Learning Rate
 *
 * ∂L/∂m
 * =
 * slope of loss function wrt m
 *
 * ∂L/∂b
 * =
 * slope of loss function wrt b
 *
 * Gradient Descent repeatedly:
 *
 * 1. slope calculate karta hai
 * 2. parameters update karta hai
 * 3. minimum loss ki taraf move karta hai
 *
 * ============================================================
 * ! STOCHASTIC GRADIENT DESCENT (SGD)
 * ============================================================
 *
 * Definition:
 *
 * Stochastic ka matlab hota hai:
 * Random
 *
 * SGD mein:
 *
 * poore dataset ki jagah
 * ek single training example se
 * update perform kiya jata hai.
 *
 * Example:
 *
 * Dataset:
 *
 * 300 rows
 *
 * SGD:
 *
 * row1 -> update
 * row2 -> update
 * row3 -> update
 * ...
 *
 * Total:
 *
 * 300 updates per epoch
 *
 * Isliye:
 *
 * Fast learning hoti hai.
 *
 * ============================================================
 * ! MINI BATCH GRADIENT DESCENT
 * ============================================================
 *
 * Definition:
 *
 * Dataset ko chote chote groups (batches)
 * mein divide karke training karna.
 *
 * Example:
 *
 * Total rows = 300
 *
 * Batch Size = 30
 *
 * Then:
 *
 * Batch1 = 30 rows
 * Batch2 = 30 rows
 * ...
 * Batch10 = 30 rows
 *
 * Total updates:
 *
 * 300 / 30
 * =
 * 10 updates per epoch
 *
 * 
 * 
 * ============================================================
 * ! BATCH GRADIENT DESCENT
 * ============================================================
 *
 * Definition:
 * Complete dataset use karke
 * ek update perform karna.
 *
 * Example:
 *
 * Total rows = 300
 *
 * Entire 300 rows use
 * karke:
 * 1 update per epoch
 *
 * ============================================================
 * ! COMPARISON
 * ============================================================
 *
 * SGD:
 * ----
 * 1 row
 * 300 updates
 *
 * Mini Batch:
 * ----------
 * 30 rows
 * 10 updates
 *
 * Batch GD:
 * --------
 * 300 rows
 * 1 update
 * 
 * 
 *
 * ============================================================
 * ! MULTIPLE LINEAR REGRESSION CASE
 * ============================================================
 *
 * Simple Linear Regression:
 *
 * y = mx + b
 *
 * Parameters:
 *
 * m,b
 *
 * only 2 parameters
 *
 * ------------------------------------------------------------
 *
 * Multiple Linear Regression:
 *
 * y = β0 + β1x1 + β2x2 + β3x3
 *
 * Parameters:
 *
 * β0
 * β1
 * β2
 * β3
 *
 * Total:
 *
 * 4 parameters
 * 
 * 
 *
 * ============================================================
 * ! PARAMETER
 * ============================================================
 *
 * Definition:
 *
 * Parameter wo value hoti hai
 * jo model training ke time learn karta hai.
 *
 * Example:
 *
 * β0,β1,β2,β3
 *
 * are parameters.
 *
 * ============================================================
 * ! HOW MANY GRADIENTS?
 * ============================================================
 *
 * Har parameter ke liye
 * alag derivative calculate karna padega.
 *
 * ∂L/∂β0
 *
 * ∂L/∂β1
 *
 * ∂L/∂β2
 *
 * ∂L/∂β3
 *
 * General Case:
 *
 * n features
 *
 * =>
 *
 * n + 1 parameters
 *
 * (including intercept)
 *
 * ============================================================
 * ! INTERCEPT
 * ============================================================
 *
 * Definition:
 *
 * Constant term of equation.
 *
 * Example:
 *
 * y = β0 + β1x1 + β2x2
 *
 * β0
 *
 * is intercept.
 *
 * Also called:
 *
 * Bias Term
 *
 * ============================================================
 * ! LOSS FUNCTION
 * ============================================================
 * For Multiple Linear Regression:
 *
 * MSE
 * (Mean Squared Error)
 *
 * L =
 *
 * (1/n)
 *
 * Σ(yi - ŷi)^2
 * 
 *
 * ============================================================
 * ! MSE
 * ============================================================
 * Definition:
 * Average squared prediction error.
 *
 * Smaller MSE
 * =>
 * Better model
 *
 * 
 * 
 * ============================================================
 * ! PREDICTION EQUATION
 * ============================================================
 *
 * For 2 features:
 *
 * ŷ = β0 + β1x1 + β2x2
 *
 * Example:
 *
 * x1 = CGPA
 * x2 = IQ
 *
 * Then:
 *
 * ŷ = β0 + β1(CGPA)
 *          + β2(IQ)
 *
 * 
 * 
 * ============================================================
 * ! DATASET USED IN NOTES
 * ============================================================
 *
 *          x1      x2      y
 *
 * Row1     2       3      3.2
 *
 * Row2     5       5      3.5
 *
 * Shape:
 *
 * (2,3)
 *
 * Means:
 *
 * 2 rows
 * 3 columns
 *
 *
 * ============================================================
 * ! LOSS DERIVATIVE WRT β0
 * ============================================================
 * Starting:
 *
 * L =
 * (1/n)Σ(yi - ŷi)^2
 *
 * Differentiate wrt β0
 *
 * Result:
 *
 * ∂L/∂β0
 *
 * =
 *
 * (-2/n)
 *
 * Σ(yi - ŷi)
 *
 * ============================================================
 * ! LOSS DERIVATIVE WRT β1
 * ============================================================
 * Result:
 *
 * ∂L/∂β1
 *
 * =
 *
 * (-2/n)
 *
 * Σ[(yi - ŷi)xi1]
 *
 * ============================================================
 * ! LOSS DERIVATIVE WRT β2
 * ============================================================
 * Result:
 *
 * ∂L/∂β2
 *
 * =
 *
 * (-2/n)
 *
 * Σ[(yi - ŷi)xi2]
 *
 * 
 * ============================================================
 * ! GENERAL FORM
 * ============================================================
 *
 * ∂L/∂βj
 *
 * =
 *
 * (-2/n)
 *
 * Σ[(yi - ŷi)xij]
 *
 * 
 * 
 * 
 * ============================================================
 * ! MATRIX FORM
 * ============================================================
 *
 * y_pred
 *
 * =
 *
 * β0
 *
 * +
 *
 * Xβ
 *
 * where
 *
 * X
 * =
 * feature matrix
 *
 * β
 * =
 * coefficient vector
 *
 * ============================================================
 * ! FEATURE MATRIX
 * ============================================================
 *
 * Definition:
 *
 * Matrix containing all feature values.
 *
 * Example:
 *
 *      x1     x2
 *
 *      2      3
 *      5      5
 *
 * ============================================================
 * ! COEFFICIENT VECTOR
 * ============================================================
 *
 * Definition:
 *
 * Column matrix containing model parameters.
 *
 * Example:
 *
 * [β1]
 * [β2]
 * [β3]
 *
 * ============================================================
 * ! PROBLEM WITH BATCH GRADIENT DESCENT
 * ============================================================
 *
 * Suppose:
 *
 * rows  = 100000
 *
 * cols  = 100
 *
 * epoch = 50
 *
 * Then:
 *
 * Computation becomes huge.
 *
 * Reason:
 *
 * Every epoch:
 * entire dataset process karna padega.
 *
 * ============================================================
 * ! WHY IS IT SLOW?
 * ============================================================
 *
 * Batch GD:
 *
 * Complete data read karta hai
 * before every update.
 *
 * Large datasets mein:
 *
 * computation expensive ho jata hai.
 *
 * Training slow ho jati hai.
 *
 * ============================================================
 * ! HARDWARE LIMITATION
 * ============================================================
 *
 * Definition:
 *
 * Jab available RAM/GPU memory
 * dataset ko efficiently process
 * nahi kar paati.
 *
 * Deep Learning mein:
 *
 * CNN
 * RNN
 * Transformers
 *
 * huge datasets use karte hain.
 *
 * Isliye:
 *
 * Pure Batch GD practical nahi hota.
 *
 * ============================================================
 * ! WHY SGD AND MINI-BATCH WERE INTRODUCED?
 * ============================================================
 *
 * Problem:
 *
 * Batch GD slow tha.
 *
 * Solution:
 *
 * SGD
 * Mini Batch GD
 *
 * Benefits:
 *
 * → Faster training
 * → Less memory usage
 * → Better scalability
 * → Large datasets handle kar sakte hain
 *
 * ============================================================
 */


 
/**
 * ! MOST COMMON BATCH GRADIENT DESCENT INTERVIEW QUESTIONS
 *
 * ------------------------------------------------------------
 * Q1. What is Batch Gradient Descent?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Batch Gradient Descent is an optimization algorithm
 * that uses the entire training dataset to calculate
 * gradients before updating model parameters.
 *
 * One epoch:
 * → One update
 *
 * ------------------------------------------------------------
 * Q2. Why is it called Batch Gradient Descent?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Because complete batch (entire dataset)
 * is processed before every parameter update.
 *
 * ------------------------------------------------------------
 * Q3. What is the update rule of Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * θ = θ - η(∂L/∂θ)
 *
 * where:
 *
 * θ = parameter
 * η = learning rate
 * ∂L/∂θ = gradient
 *
 * ------------------------------------------------------------
 * Q4. Why do we use Gradient Descent?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * To minimize the loss function and find
 * optimal parameter values.
 *
 * ------------------------------------------------------------
 * Q5. What is a Gradient?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Gradient is the slope of the loss function.
 *
 * It tells:
 *
 * → how much loss changes
 * → and in which direction it increases fastest
 *
 * ------------------------------------------------------------
 * Q6. Why is there a minus sign in the update rule?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Gradient points towards maximum increase.
 *
 * To minimize loss,
 * we move in the opposite direction.
 *
 * Therefore:
 *
 * θ = θ - η(∂L/∂θ)
 *
 * ------------------------------------------------------------
 * Q7. What is Learning Rate?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Learning Rate determines
 * how big a step we take during updates.
 *
 * Represented by:
 *
 * η (eta)
 *
 * ------------------------------------------------------------
 * Q8. What happens if Learning Rate is too small?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * → Very slow training
 * → More epochs required
 * → Slow convergence
 *
 * ------------------------------------------------------------
 * Q9. What happens if Learning Rate is too large?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * → Overshooting
 * → Oscillations
 * → May never converge
 *
 * ------------------------------------------------------------
 * Q10. What is the biggest drawback of Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Every update requires processing
 * the entire dataset.
 *
 * Therefore:
 *
 * → High computation cost
 * → Slow training
 * → High memory usage
 *
 * ------------------------------------------------------------
 * Q11. Why is Batch GD slow for large datasets?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Because gradients are computed using
 * every training example before each update.
 *
 * ------------------------------------------------------------
 * Q12. What are the advantages of Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * → Stable updates
 * → Smooth convergence
 * → Less noisy gradients
 * → Works well on small datasets
 *
 * ------------------------------------------------------------
 * Q13. What are the disadvantages of Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * → Slow training
 * → High memory consumption
 * → Poor scalability
 * → Not suitable for huge datasets
 *
 * ------------------------------------------------------------
 * Q14. Difference between Batch GD and SGD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Batch GD:
 * → Entire dataset
 * → 1 update per epoch
 * → Stable but slow
 *
 * SGD:
 * → 1 sample at a time
 * → n updates per epoch
 * → Fast but noisy
 *
 * ------------------------------------------------------------
 * Q15. Why is Mini-Batch GD preferred in industry?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Because it provides:
 *
 * → Faster training
 * → Better GPU utilization
 * → Lower memory usage
 * → More stable updates than SGD
 *
 * Therefore:
 *
 * Most Deep Learning models use
 * Mini-Batch Gradient Descent.
 *
 * ------------------------------------------------------------
 * Q16. Why use Gradient Descent when OLS exists?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * OLS requires matrix inversion:
 *
 * β = (XᵀX)^-1XᵀY
 *
 * Matrix inversion complexity:
 *
 * O(n³)
 *
 * For large datasets,
 * this becomes expensive.
 *
 * Gradient Descent avoids matrix inversion.
 *
 * ------------------------------------------------------------
 * Q17. What is Convergence?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Convergence is the point where
 * parameter updates become very small
 * and loss stops decreasing significantly.
 *
 * ------------------------------------------------------------
 * Q18. Why is Batch GD called Deterministic?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Same dataset
 * →
 * Same gradient
 * →
 * Same update
 *
 * No randomness is involved.
 *
 * Therefore Batch GD is deterministic.
 *
 * ------------------------------------------------------------
 * Q19. If dataset has 1 million rows,
 * would you use Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Generally No.
 *
 * Reason:
 *
 * → Too much computation
 * → High memory requirement
 *
 * Mini-Batch GD is preferred.
 *
 * ------------------------------------------------------------
 * Q20. Interviewer's Favorite Question
 *
 * Why did industry move from Batch GD
 * to Mini-Batch GD?
 * ------------------------------------------------------------
 *
 * Answer:
 *
 * Batch GD:
 * → Slow
 * → Memory expensive
 *
 * Mini-Batch GD:
 * → Faster
 * → Scalable
 * → Better for GPUs
 * → Handles huge datasets
 *
 * Hence almost all modern Deep Learning
 * frameworks use Mini-Batch Gradient Descent.
 */