/*
 * @lc app=leetcode id=13 lang=golang
 *
 * [13] Roman to Integer
 */

// @lc code=start
// (写経) https://leetcode.com/problems/roman-to-integer/solutions/580404/golang-simplest-and-efficient-solution-100-faster/?orderBy=most_votes&languageTags=golang
func romanToInt(s string) int {
	var romanMap = map[byte]int{
		'I':1,
		'V':5,
		'X':10,
		'L':50,
		'C':100,
		'D':500,
		'M':1000}	// Pythonで言うところの辞書
	// }だけ改行して書くとエラー起きた。
	var num = romanMap[s[len(s)-1]]	// 一番後ろの値を代入

	for i:=len(s)-2; i>=0; i-- { // sを後ろから順にみる。大→小(IVなど)が見られたら引き算する(IV: 5-1)
		if romanMap[s[i]] < romanMap[s[i+1]] {
			num -= romanMap[s[i]]
		} else {
			num += romanMap[s[i]]
		}
	}
	return num
    
}
// @lc code=end

