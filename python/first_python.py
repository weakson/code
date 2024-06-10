#資料型態
    #字串
"hello"
'hello'
    #數字
5
10
20.5
-30
    #布林值
True
False


#宣告(直接打變數名稱，不用打型態)
str="hello"
num=5
is_smart=True
#可隨時切換型態
test=3
test="yo"


#字串輸出
str="hello"
print(str)#印出str的內容,即"hello"
print("string name")#印出"string name"
print("string : "+str)#印出"string : "接上str的內容,即"string : hello"
print(str[0])#印出字串的第0個元素，即"h"


#換行(再寫一個print)
print("1 . down")
print("2 . here")
#或者("\n")
print("3 . down \n4 . here")


#函式
    #  .lower()  =>  將字串之所有內容轉成小寫後回傳
str="HELLO"
print("5 . "+str.lower())
    #  .upper()  =>  將字串之所有內容轉成大寫後回傳
str="hello"
print("6 . "+str.upper())
    #  .islower()  =>  掃描字串，若有大寫則回傳False，反之，回傳True
str="hello"
print("8 .")
print(str.islower())
str="Hello"
print("9 .")
print(str.islower())
    #  .isupper()  =>  掃描字串，若有小寫則回傳False，反之，回傳True
str="HELLO"
print("10 .")
print(str.isupper())
str="Hello"
print("11 .")
print(str.isupper())
    #  .index()  =>  掃描小掛號內輸入的字元(有分大小寫)在字串中的位置，並回傳此數字
str="HELLO"
print("12 .")
print(str.index("H"))
    #  .replace(a,b)  =>  將字串中的所有a字元替換為b字元
str="hello"
print("13 .")
print(str.replace("h","H"))
    #函式可做疊加
str="HELLO"
print("14 .")
print(str.lower().islower())

