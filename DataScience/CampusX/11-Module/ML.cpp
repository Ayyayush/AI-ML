/**
 * ------------------------------------------------------------
 * ! Basis Vectors
 * ------------------------------------------------------------
 * Ye bahut important concept hai.
 * 
 * Coordinate system mein
 * basis vectors use hote hain.
 * 
 * 2D coordinate system mein:
 * - i cap
 * - j cap
 * 
 * hote hain.
 * 
 * Ye dono:
 * Unit vectors hote hain.
 * 
 * Unit vector matlab:
 * Jiska magnitude = 1
 * 
 * i cap:
 * x-axis ki direction mein hota hai.
 * 
 * j cap:
 * y-axis ki direction mein hota hai.
 * 
 * Inki special property:
 * Ye dono linearly independent hote hain.
 * 
 * In basis vectors ki help se
 * kisi bhi vector ko represent kar sakte hain.
 * 
 * Example:
 * 
 * V = 3i + 2j
 * 
 * Matlab:
 * i cap ko 3 times
 * aur
 * j cap ko 2 times liya gaya hai.
 * 
 * ------------------------------------------------------------
 * ! Linear Combination
 * ------------------------------------------------------------
 * Jab hum:
 * Scalars * vectors
 * ko add karte hain
 * toh usko:
 * Linear Combination bolte hain.
 * 
 * Example:
 * 
 * V = 2i + 3j
 * 
 * Yahan:
 * 2 aur 3 -> scalars
 * i aur j -> vectors
 * 
 * Coordinate system jitne dimensions ka hoga
 * utne hi basis vectors honge.
 * 
 * Example:
 * 
 * 2D -> 2 basis vectors
 * 3D -> 3 basis vectors
 * 
 * ------------------------------------------------------------
 * ! Linear Transformation
 * ------------------------------------------------------------
 * Ye bahut important topic hai.
 * 
 * Matrices ka sabse important use:
 * Linear Transformations mein hota hai.
 * 
 * Koi bhi matrix:
 * Ek transformation ki tarah behave kar sakta hai.
 * 
 * ------------------------------------------------------------
 * ! What is Transformation ?
 * ------------------------------------------------------------
 * Transformation ko ek function ki tarah imagine karo.
 * 
 * Input:
 * Vector
 * 
 * Output:
 * Dusra vector
 * 
 * Transformation basically:
 * Vector ko change karta hai.
 * 
 * Example:
 * Ek vector matrix ke andar gaya
 * aur transform hoke
 * dusri jagah pahuch gaya.
 * 
 * ------------------------------------------------------------
 * ! Important Intuition
 * ------------------------------------------------------------
 * Matrices exist kyun karti hain?
 * 
 * Kyunki:
 * Matrices vectors par transformations apply karti hain.
 * 
 * Matrix vector ko:
 * - rotate
 * - scale
 * - stretch
 * - compress
 * - flip
 * 
 * kar sakti hai.
 * 
 * ------------------------------------------------------------
 * ! Understanding Columns of Matrix
 * ------------------------------------------------------------
 * Maan lo:
 * 
 * A = [
 *      [2,3],
 *      [1,2]
 *     ]
 * 
 * Yahan:
 * 
 * First column:
 * [
 *   [2],
 *   [1]
 * ]
 * 
 * batata hai:
 * 
 * i cap transform hoke kahan jayega.
 * 
 * Second column:
 * [
 *   [3],
 *   [2]
 * ]
 * 
 * batata hai:
 * 
 * j cap transform hoke kahan jayega.
 * 
 * ------------------------------------------------------------
 * ! Important Point
 * ------------------------------------------------------------
 * Agar:
 * 2 x 2 matrix hai
 * 
 * Toh:
 * Wo poore 2D coordinate system ko transform karega.
 * 
 * Agar:
 * 3 x 3 matrix hai
 * 
 * Toh:
 * Wo poore 3D coordinate system ko transform karega.
 * Transformation sirf ek vector par nahi,
 * balki pure vector space par apply hota hai.
 * 
 * Maan lo ek poora grid hai.
 * Agar uspe linear transformation apply kar diya
 * toh us grid ke saare vectors transform ho jayenge.
 * 
 * ------------------------------------------------------------
 * ! Identity Matrix Transformation
 * ------------------------------------------------------------
 * Maan lo:
 * 
 * I = [
 *      [1,0],
 *      [0,1]
 *     ]
 * 
 * Aur basis vectors hain:
 * 
 * i cap = [1,0]
 * 
 * j cap = [0,1]
 * 
 * Ab dekhte hain:
 * Agar identity matrix transformation apply kare
 * toh basis vectors kahan jayenge.
 * 
 * Hum dekhenge:
 * Transformation ke baad bhi
 * vectors wahi rahenge.
 * 
 * Isliye:
 * Identity Matrix ko identity bola jata hai.
 * 
 * Kyunki:
 * Transformation hone ke baad bhi
 * original vectors same rehte hain.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Linear Transformation in 3D
 * ------------------------------------------------------------
 * 3D mein bhi same concept apply hota hai.
 * 
 * Bas:
 * 2 basis vectors ki jagah
 * 3 basis vectors honge.
 * 
 * i cap
 * j cap
 * k cap
 * 
 * Aur:
 * 3 x 3 matrix
 * poore 3D coordinate system ko transform karegi.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Matrix Multiplication as Composition
 * ------------------------------------------------------------
 * Humne matrix multiplication ka process dekha tha.
 * 
 * Ab:
 * Agar matrix ko transformation maan le
 * toh:
 * 
 * 2 matrices ke multiplication ka meaning:
 * 
 * Multiple transformations apply karna.
 * 
 * Example:
 * 
 * AB
 * 
 * iska matlab:
 * 
 * Pehle:
 * B transformation apply hoga.
 * 
 * Fir:
 * A transformation apply hoga.
 * 
 * Important:
 * Matrix multiplication right to left work karta hai.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Intuition
 * ------------------------------------------------------------
 * Maan lo:
 * 
 * Vector = C
 * 
 * Pehle:
 * B apply kiya
 * 
 * C -> C'
 * 
 * Fir:
 * A apply kiya
 * 
 * C' -> C''
 * 
 * Final:
 * 
 * AB * C
 * 
 * Basically:
 * Multiple transformations compose ho rahe hain.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Test of Commutative Law
 * ------------------------------------------------------------
 * Hum jaante hain:
 * 
 * AB != BA
 * 
 * But:
 * Order matter kyun karta hai?
 * 
 * Maan lo:
 * 
 * Ek vector C hai.
 * 
 * Case 1:
 * Pehle A transformation
 * Fir B transformation
 * 
 * Case 2:
 * Pehle B transformation
 * Fir A transformation
 * 
 * Dono cases mein
 * final vector generally different aayega.
 * 
 * Isliye:
 * Matrix multiplication commutative nahi hota.
 * 
 * 
 * ------------------------------------------------------------
 * ! Determinant Geometric Meaning
 * ------------------------------------------------------------
 * Pichle lecture mein humne determinant dekha tha.
 * 
 * Ab:
 * Uska geometric meaning samjhenge.
 * 
 * Example:
 * 
 * A = [
 *      [2,3],
 *      [4,5]
 *     ]
 * 
 * Determinant basically batata hai:
 * 
 * Transformation apply karne ke baad
 * area kitna scale hoga.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Important Intuition
 * ------------------------------------------------------------
 * Determinant:
 * Area scaling factor hota hai.
 * 
 * Example:
 * 
 * det(A) = 2
 * 
 * Matlab:
 * Area 2 times ho gaya.
 * 
 * det(A) = 0
 * 
 * Matlab:
 * Space collapse ho gaya.
 * 
 * Example:
 * 3D -> 2D
 * 
 * Isliye:
 * Dimensionality reduction jaisa effect aata hai.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Why Determinant only for Square Matrix ?
 * ------------------------------------------------------------
 * Determinant sirf square matrix ke liye defined hai.
 * 
 * Reason:
 * Input space aur output space ka
 * dimension same hona chahiye.
 * 
 * Tabhi:
 * Area ya volume scaling properly define ho pata hai.
 * 
 * ------------------------------------------------------------
 * ! Meaning of Negative Determinant
 * ------------------------------------------------------------
 * Negative determinant ka matlab:
 * 
 * Transformation mein:
 * - Scaling hua
 * - Flip hua
 * 
 * Example:
 * Originally:
 * i right side tha
 * j left side tha
 * 
 * Transformation ke baad:
 * Orientation reverse ho gaya.
 * 
 * Isko:
 * Reflection ya flipping bol sakte hain.
 * 
 * Isliye:
 * Negative determinant
 * orientation flip indicate karta hai.
 * 
 * ------------------------------------------------------------
 * ! Geometric Interpretation of Inverse
 * ------------------------------------------------------------
 * Humne inverse ko
 * linear equations solve karne mein dekha tha.
 * 
 * Example:
 * 
 * AX = B
 * 
 * Toh:
 * 
 * X = A^-1 B
 * 
 * ------------------------------------------------------------
 * ! Important Intuition
 * ------------------------------------------------------------
 * Inverse transformation:
 * Original transformation ko reverse karta hai.
 * 
 * Example:
 * 
 * A transformation apply hua.
 * 
 * Fir:
 * A^-1 apply kar diya.
 * 
 * Toh:
 * Hum original state par wapas aa jayenge.
 * 
 * Isliye:
 * 
 * A^-1
 * 
 * is the reverse transformation of:
 * 
 * /**
 * ------------------------------------------------------------
 * ! Transformation of Non-Square Matrix
 * ------------------------------------------------------------
 * Square matrices represent linear transformations
 * where:
 * Domain dimension = Codomain dimension
 * 
 * Matlab:
 * Input aur output spaces same dimensions ke hote hain.
 * 
 * Example:
 * 2D -> 2D
 * 3D -> 3D
 * 
 * ------------------------------------------------------------
 * ! Non-Square Matrix Transformation
 * ------------------------------------------------------------
 * Non-square matrices bhi
 * linear transformations represent kar sakti hain.
 * 
 * But:
 * Yahan dimensions different hote hain.
 * 
 * Example:
 * 2D -> 3D
 * ya
 * 3D -> 2D
 * 
 * ------------------------------------------------------------
 * ! Tall and Wide Matrix
 * ------------------------------------------------------------
 * 1. Tall Matrix
 * Rows > Columns
 * 
 * Example:
 * Shape:
 * (3,2)
 * 
 * Ye:
 * Lower dimension se
 * Higher dimension mein map karta hai.
 * 
 * Example:
 * 2D -> 3D
 * 
 * ------------------------------------------------------------
 * ! Wide Matrix
 * ------------------------------------------------------------
 * Columns > Rows
 * 
 * Example:
 * Shape:
 * (2,3)
 * 
 * Ye:
 * Higher dimension se
 * Lower dimension mein map karta hai.
 * 
 * Example:
 * 3D -> 2D
 * 
 * ------------------------------------------------------------
 * ! Understanding Columns
 * ------------------------------------------------------------
 * Matrix ka:
 * First column batata hai:
 * i cap kahan jayega.
 * 
 * Second column batata hai:
 * j cap kahan jayega.
 * 
 * Third column batata hai:
 * k cap kahan jayega.
 * 
 * ------------------------------------------------------------
 * ! Important Point
 * ------------------------------------------------------------
 * Jab square matrix hoti hai:
 * Dimensions same rehte hain.
 * 
 * But:
 * Non-square matrices mein
 * dimensions change ho jate hain.
 * 
 * Isi wajah se:
 * Kuch concepts difficult ho jate hain.
 * 
 * Example:
 * - Determinant
 * - Inverse
 * 
 * ------------------------------------------------------------
 * ! Why only Square Matrix Inverse is Possible ?
 * ------------------------------------------------------------
 * Inverse tabhi possible hota hai
 * jab transformation:
 * 
 * - Injective ho
 * - Surjective ho
 * 
 * Dono milke:
 * Bijective transformation banate hain.
 * 
 * ------------------------------------------------------------
 * ! Injective
 * ------------------------------------------------------------
 * One-to-One Mapping
 * 
 * Har input ka unique output hona chahiye.
 * 
 * ------------------------------------------------------------
 * ! Surjective
 * ------------------------------------------------------------
 * Onto Mapping
 * 
 * Har possible output reachable hona chahiye.
 * 
 * ------------------------------------------------------------
 * ! Bijective
 * ------------------------------------------------------------
 * Jab transformation:
 * - Injective bhi ho
 * - Surjective bhi ho
 * 
 * Tab:
 * Unique inverse possible hota hai.
 * 
 * ------------------------------------------------------------
 * ! Why Non-Square Matrix Cannot Have Inverse
 * ------------------------------------------------------------
 * Case 1:
 * Tall Matrix
 * 
 * Example:
 * 2D -> 3D
 * 
 * Yahan:
 * Lower dimension se higher dimension mein ja rahe hain.
 * 
 * Problem:
 * Har output vector ko generate nahi kar paayenge.
 * 
 * Matlab:
 * Transformation onto nahi hoga.
 * 
 * So:
 * Inverse possible nahi hoga.
 * 
 * ------------------------------------------------------------
 * ! Wide Matrix Case
 * ------------------------------------------------------------
 * Example:
 * 3D -> 2D
 * 
 * Yahan:
 * Higher dimension se lower dimension mein aa rahe hain.
 * 
 * Is process mein:
 * Information loss hota hai.
 * 
 * Multiple vectors:
 * Same lower dimensional vector mein map ho sakte hain.
 * 
 * Example:
 * Alag-alag 3D vectors
 * same 2D vector bana sakte hain.
 * 
 * Isliye:
 * Unique reverse mapping possible nahi hoti.
 * 
 * So:
 * Inverse exist nahi karega.
 * 
 * ------------------------------------------------------------
 * ! Important Intuition
 * ------------------------------------------------------------
 * Non-square matrix mein:
 * Ya toh:
 * Lower -> Higher dimension
 * 
 * Ya:
 * Higher -> Lower dimension
 * 
 * Transformation hota hai.
 * 
 * Isliye:
 * Perfect reverse transformation possible nahi hota.
 * 
 * ------------------------------------------------------------
 * ! Why Inverse Possible only for Non-Singular Matrix ?
 * ------------------------------------------------------------
 * Non-singular matrix:
 * 
 * det(A) != 0
 * 
 * Singular matrix:
 * 
 * det(A) = 0
 * 
 * ------------------------------------------------------------
 * ! Geometric Meaning
 * ------------------------------------------------------------
 * Jab determinant zero hota hai:
 * Space collapse ho jata hai.
 * 
 * Example:
 * 3D -> 2D
 * ya
 * 2D -> 1D
 * 
 * Matlab:
 * Dimensionality reduce ho jati hai.
 * 
 * Isliye:
 * Multiple vectors same vector mein map ho sakte hain.
 * 
 * Toh:
 * Original vector uniquely recover nahi kar paayenge.
 * 
 * So:
 * Inverse exist nahi karega.
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! Data Matrix Representation
 * ------------------------------------------------------------
 * Machine Learning mein
 * data mostly matrix form mein represent hota hai.
 * 
 * Example:
 * 
 * Rows:
 * Data points / samples
 * 
 * Columns:
 * Features
 * 
 * Example:
 * 
 * [
 *   [cgpa, iq, placement],
 *   [cgpa, iq, placement],
 *   [cgpa, iq, placement]
 * ]
 * 
 * Yahan:
 * Har row:
 * Ek data sample hai.
 * 
 * Har column:
 * Ek feature represent karta hai.
 * 
 */