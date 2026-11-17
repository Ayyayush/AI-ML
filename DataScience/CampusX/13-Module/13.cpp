/**
 * =========================================================
 * ! R-SQUARED (R² SCORE)
 * =========================================================
 *
 * (Page 13)
 *
 * After building a regression model,
 * next question is:
 *
 * "How good is my model?"
 *
 * R² helps answer this.
 *
 * ---------------------------------------------------------
 * ! R-SQUARED
 * ---------------------------------------------------------
 *
 * R²:
 * Coefficient of Determination
 *
 * Definition:
 *
 * R² measures the proportion of variation
 * in dependent variable that is explained
 * by independent variables.
 *
 * Simple Meaning:
 *
 * R² tells:
 *
 * "Kitna % data model explain kar paaya?"
 *
 * =========================================================
 * ! FORMULA
 * =========================================================
 *
 * We already know:
 *
 * TSS = ESS + RSS
 *
 * Therefore:
 *
 * R² = ESS/TSS
 *
 * OR
 *
 * R² = 1 - (RSS/TSS)
 *
 * =========================================================
 * ! INTUITION
 * =========================================================
 *
 * TSS:
 * Total Variation
 *
 * ESS:
 * Explained Variation
 *
 * Therefore:
 *
 * R² =
 *
 * Explained Variation
 * -------------------
 * Total Variation
 *
 * =========================================================
 * ! INTERPRETATION
 * =========================================================
 *
 * R² = 0
 *
 * Model explains nothing.
 *
 * ---------------------------------------------------------
 *
 * R² = 1
 *
 * Model explains everything.
 *
 * Perfect fit.
 *
 * ---------------------------------------------------------
 *
 * R² = 0.80
 *
 * Means:
 *
 * 80% variation explained.
 *
 * 20% variation unexplained.
 *
 * =========================================================
 * ! EXAMPLE
 * =========================================================
 *
 * Suppose:
 *
 * TSS = 100
 *
 * ESS = 80
 *
 * Then:
 *
 * R² = 80/100
 *
 * = 0.8
 *
 * = 80%
 *
 * Meaning:
 *
 * Model explains 80% variation.
 *
 * =========================================================
 * ! PROBLEM WITH R²
 * =========================================================
 *
 * Very important interview point.
 *
 * R² never decreases
 * when new features are added.
 *
 * Example:
 *
 * Feature1 -> useful
 * Feature2 -> useful
 * Feature3 -> useless
 * Feature4 -> useless
 *
 * Even after adding useless features:
 *
 * R² either:
 *
 * → increases
 * OR
 * → remains same
 *
 * It never decreases.
 *
 * Therefore:
 *
 * R² can be misleading.
 *
 * =========================================================
 * ! OVERFITTING CONNECTION
 * =========================================================
 *
 * Model keeps adding features.
 *
 * R² keeps increasing.
 *
 * But:
 *
 * Prediction quality may not improve.
 *
 * This can lead to:
 *
 * Overfitting.
 *
 * ---------------------------------------------------------
 * ! OVERFITTING
 * ---------------------------------------------------------
 *
 * Definition:
 *
 * Model starts learning noise
 * instead of actual pattern.
 *
 * Training accuracy high.
 *
 * Test accuracy poor.
 *
 * =========================================================
 * ! ADJUSTED R-SQUARED
 * =========================================================
 *
 * (Page 14)
 *
 * Problem:
 *
 * R² always increases.
 *
 * Solution:
 *
 * Adjusted R²
 *
 * =========================================================
 * ! ADJUSTED R²
 * =========================================================
 *
 * Definition:
 *
 * Modified version of R²
 * that penalizes unnecessary features.
 *
 * It considers:
 *
 * → number of observations
 * → number of predictors
 *
 * Therefore:
 *
 * Better metric for multiple regression.
 *
 * =========================================================
 * ! FORMULA
 * =========================================================
 *
 * Adjusted R² =
 *
 * 1 - [(1-R²)(n-1)]/(n-k-1)
 *
 * where:
 *
 * n:
 * number of observations
 *
 * k:
 * number of independent variables
 *
 * =========================================================
 * ! IMPORTANT PROPERTY
 * =========================================================
 *
 * If useful feature added:
 *
 * Adjusted R² increases.
 *
 * ---------------------------------------------------------
 *
 * If useless feature added:
 *
 * Adjusted R² decreases.
 *
 * =========================================================
 * ! WHY ADJUSTED R² IS BETTER?
 * =========================================================
 *
 * R²:
 *
 * rewards every new feature.
 *
 * ---------------------------------------------------------
 *
 * Adjusted R²:
 *
 * rewards only useful features.
 *
 * Penalizes model complexity.
 *
 * =========================================================
 * ! MODEL COMPLEXITY
 * =========================================================
 *
 * Definition:
 *
 * Complexity increases
 * as number of predictors increases.
 *
 * More features
 * =>
 * more complex model
 *
 * =========================================================
 * ! INTERVIEW QUESTION
 * =========================================================
 *
 * Q. Which is better?
 * R² or Adjusted R²?
 *
 * Answer:
 *
 * For Multiple Linear Regression:
 *
 * Adjusted R²
 *
 * Because it penalizes
 * unnecessary predictors.
 *
 * =========================================================
 * ! WHEN TO USE R²?
 * =========================================================
 *
 * Use R² when:
 *
 * understanding explained variance
 * is the primary goal.
 *
 * =========================================================
 * ! WHEN TO USE ADJUSTED R²?
 * =========================================================
 *
 * Use Adjusted R² when:
 *
 * comparing multiple models
 * having different number of features.
 *
 * =========================================================
 * ! PAGE 15
 * =========================================================
 *
 * WHICH ONE SHOULD BE USED?
 *
 * PDF Conclusion:
 *
 * For model comparison:
 *
 * Use Adjusted R²
 *
 * Because:
 *
 * it considers model complexity.
 *
 * ---------------------------------------------------------
 *
 * For understanding explanatory power:
 *
 * Use R²
 *
 * =========================================================
 * ! T-STATISTIC
 * =========================================================
 *
 * (Page 16)
 *
 * F-test:
 * checks entire model.
 *
 * T-test:
 * checks individual coefficient.
 *
 * =========================================================
 * ! WHY T-TEST?
 * =========================================================
 *
 * Suppose:
 *
 * Package =
 *
 * β0
 * +
 * β1(CGPA)
 * +
 * β2(IQ)
 *
 * We want to know:
 *
 * Is CGPA important?
 *
 * Is IQ important?
 *
 * For this:
 *
 * T-test is used.
 *
 * =========================================================
 * ! NULL HYPOTHESIS
 * =========================================================
 *
 * For coefficient β1:
 *
 * H0:
 *
 * β1 = 0
 *
 * Meaning:
 *
 * Feature has no effect.
 *
 * ---------------------------------------------------------
 *
 * H1:
 *
 * β1 ≠ 0
 *
 * Meaning:
 *
 * Feature affects output.
 *
 * =========================================================
 * ! T-STATISTIC
 * =========================================================
 *
 * Definition:
 *
 * Measures how many standard errors
 * coefficient is away from zero.
 *
 * Formula:
 *
 * t =
 *
 * coefficient
 * -----------
 * standard error
 *
 * =========================================================
 * ! STANDARD ERROR
 * =========================================================
 *
 * Definition:
 *
 * Measures uncertainty
 * in coefficient estimate.
 *
 * Small Standard Error:
 *
 * coefficient estimate reliable.
 *
 * Large Standard Error:
 *
 * coefficient estimate unstable.
 *
 * =========================================================
 * ! INTERPRETATION
 * =========================================================
 *
 * Large |t|
 *
 * =>
 *
 * strong evidence
 * against null hypothesis.
 *
 * ---------------------------------------------------------
 *
 * Small |t|
 *
 * =>
 *
 * weak evidence
 * against null hypothesis.
 *
 * =========================================================
 * ! P-VALUE USING T-TEST
 * =========================================================
 *
 * After calculating t-statistic,
 * corresponding p-value is obtained.
 *
 * Decision:
 *
 * p-value < 0.05
 *
 * Reject H0
 *
 * Feature is significant.
 *
 * ---------------------------------------------------------
 *
 * p-value > 0.05
 *
 * Fail to reject H0
 *
 * Feature is insignificant.
 *
 * =========================================================
 * ! INTERVIEW QUESTION
 * =========================================================
 *
 * Q. Difference between F-test and T-test?
 *
 * Answer:
 *
 * F-test:
 * entire model
 *
 * T-test:
 * individual coefficient
 *
 * =========================================================
 * ! CONFIDENCE INTERVALS
 * =========================================================
 *
 * (Pages 17-18)
 *
 * Instead of giving a single value,
 * statistics often provides a range.
 *
 * This range is called:
 *
 * Confidence Interval.
 *
 * =========================================================
 * ! CONFIDENCE INTERVAL
 * =========================================================
 *
 * Definition:
 *
 * Range within which true population
 * parameter is expected to lie
 * with certain confidence.
 *
 * Example:
 *
 * β1 = 5
 *
 * 95% Confidence Interval:
 *
 * [4.2 , 5.8]
 *
 * Meaning:
 *
 * We are 95% confident that
 * true coefficient lies
 * between 4.2 and 5.8.
 *
 * =========================================================
 * ! CONFIDENCE LEVEL
 * =========================================================
 *
 * Definition:
 *
 * Probability that interval estimation
 * procedure captures true parameter.
 *
 * Common values:
 *
 * 90%
 * 95%
 * 99%
 *
 * =========================================================
 * ! DEGREES OF FREEDOM
 * =========================================================
 *
 * For simple linear regression:
 *
 * df = n - 2
 *
 * Why 2?
 *
 * Because:
 *
 * β0 estimated
 * β1 estimated
 *
 * Two parameters.
 *
 * =========================================================
 * ! INTERVIEW INTERPRETATION
 * =========================================================
 *
 * If confidence interval contains 0:
 *
 * coefficient may be insignificant.
 *
 * Example:
 *
 * [-2 , 3]
 *
 * contains 0
 *
 * Not strong evidence.
 *
 * ---------------------------------------------------------
 *
 * If confidence interval does not contain 0:
 *
 * coefficient likely significant.
 *
 * Example:
 *
 * [2 , 7]
 *
 * does not contain 0.
 *
 * Strong evidence.
 *
 * =========================================================
 * ! KEY TAKEAWAYS
 * =========================================================
 *
 * R²:
 * explained variation percentage
 *
 * R² = ESS/TSS
 *
 * Problem:
 * never decreases
 *
 * ---------------------------------------------------------
 *
 * Adjusted R²:
 * penalizes unnecessary features
 *
 * Better for model comparison.
 *
 * ---------------------------------------------------------
 *
 * T-test:
 * significance of individual feature
 *
 * H0:
 * β = 0
 *
 * ---------------------------------------------------------
 *
 * Confidence Interval:
 * range containing true parameter
 *
 * Most common:
 * 95% confidence interval
 *
 * =========================================================
 */