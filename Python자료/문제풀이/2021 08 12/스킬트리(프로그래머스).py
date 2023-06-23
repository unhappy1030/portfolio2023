def solution(skill, skill_trees):
    answer=0
    check=0
    f_trees=[]
    s_skill=[]
    for i in skill:#make skill from str to list
        s_skill.append(i)
    f_trees=[]
    for i in skill_trees:#filtering the skill_trees
        f_skill=''
        for j in i:
            if j in skill:
                f_skill+=j
        f_trees.append(f_skill)
    for i in f_trees:#check the filtered skill_tree
        check=0
        for j in range(len(i)):
            if i[j] == s_skill[j]:
                check+=1
            else:
                break
        if check == len(i):
            answer+=1
    return answer