import os

#기본 정보를 몇 개 출력해 봅시다.
print("현재 운영체제 :", os.name)
print("현재 폴더 :", os.getcwd())
print("현재 폴더 내부의 요소 :", os.listdir())

#폴더를 만들고 제거합니다[폴더가 비어있을때만 제거가능].
os.mkdir("hello")
os.rmdir("hello")

#파일을 생성하고 + 파일 이름을 변경합니다.
with open("original.txt", "w") as file:
    file.write("hello")
os.rename("original.txt","new.txt")
file.close()

#파일을 제거합니다
os.remove("new.txt")
#os.unlink("new.txt")

#시스템 명령어 실행
os.system("dir")
#os.system()함수의 위험성 : 명령어를 그냥 실행하므로 모든파일을 삭제하는
#명령어를 사용하면 진짜 컴퓨터의 모든파일이 삭제됨