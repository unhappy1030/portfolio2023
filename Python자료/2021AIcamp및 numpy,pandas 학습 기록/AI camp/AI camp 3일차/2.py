#실습
character = {
    "name" : "기사",
    "level" : 12,
    "items" : {
        "sword" : "불꽃의 검",
        "armor" : "풀플레이트"
    },
    "skill" : ["베기", "세게 베기", "아주 세게 베기"]
}

for key in character:
    if type(character[key]) == dict:
        for k in character[key]:
            print(k,":",character[key][k])
    elif type(character[key]) == list:
        for k in character[key]:
            print(key,":",k)
    else:
        print(key,":",character[key])