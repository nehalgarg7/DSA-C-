// // TC = O(n)+O(m){Can be considered as linear also}...since n>>m therefore we can say that it is O(n)
// // SC = O(m) {Extra space for LPS array}

// /*
// Applications : Best applied when the text and pattern has a lot of repeated characters.

// Eg - > DNA pattern matching

// Only the chracters A C G T are repeated in the DNA.
// */

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;


// void ComputeLPSArray(string s2, int m, int* lps);


// void KnuthMorrisPratt(string s1, string s2)
// {
//     int n = s1.size(), m = s2.size();

//     int lps[m] = {0};

//     ComputeLPSArray(s2, m, lps);

//     int i = 0, j = 0;

//     while ((n - i) >= (m - j))
//     {
//         if (s2[i] == s1[j])
//         {
//             i++;
//             j++;
//         }

//         if (j == m)
//         {
//             cout << "Pattern found at: " << i - j << endl;
//             j = lps[j - 1];
//         }
//         else if(i<n && s2[j] != s1[i])
//         {
//             if (j != 0)
//             {
//                 j = lps[j - 1];
//             }
//             else
//             {
//                 i++;
//             }
//         }
//     }
// }

// void ComputeLPSArray(string s2, int m, int* lps)
// {
//     int len = 0;
//     int i = 1;
//     lps[0] = 0;
//     while (i < m)
//     {
//         if (s2[i] == s2[len])
//         {
//             lps[i] = len + 1;
//             len += 1;
//             i++;
//         }

//         else
//         {
//             if (len != 0)
//             {
//                 len = lps[len - 1];
//             }
//             else
//             {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;

//     KnuthMorrisPratt(s1, s2);

//     return 0;
// }

// C++ program for implementation of KMP pattern searching
// algorithm
#include <bits/stdc++.h>

void computeLPSArray(char* pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
void KMPSearch(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	// create lps[] that will hold the longest prefix suffix
	// values for pattern
	int lps[M];

	// Preprocess the pattern (calculate lps[] array)
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while ((N - i) >= (M - j)) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			printf("Found pattern at index %d ", i - j);
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) {
			// Do not match lps[0..lps[j-1]] characters,
			// they will match anyway
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
	// length of the previous longest prefix suffix
	int len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar
			// to search step.
			if (len != 0) {
				len = lps[len - 1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

// Driver code
int main()
{
	char txt[] = "aabaababbabcd";
	char pat[] = "ab";
	KMPSearch(pat, txt);
	return 0;
}
