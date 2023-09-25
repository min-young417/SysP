
cat
-----
+ cat 
: 파일의 내용을 화면에 출력

![cat](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/f2d2b59c-e326-4602-9aa4-ce312e91279a)
+ cat -n
: 모든 라인 앞에 라인 번호를 출력

![cat-n](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/0e60d369-f8ed-48f4-b158-38ab38c7df94)
+ cat -b
: 비어있지 않은 라인 앞에만 라인 번호를 출력

![cat-b](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/8591ec51-d85f-4761-b318-bb24aa112a40)
+ cat -E
: 라인의 마지막과 비어있는 라인에 '$' 기호를 출력

![cat-E](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/346e1df0-cf52-48aa-bd67-034e28e91a50)
+ cat -T
: 탭 문자를 ^l로 바꿔서 출력

![cat-T](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/1a2a78b8-2997-427d-825f-57d4e1482f42)
+ cat -A
: 라인의 마지막과 비어있는 라인에 '$' 기호 출력, 탭 문자는 ^l 로 바꿔서 출력

![cat-A](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/b9041e30-bdb7-46c6-9ad9-2c965dec0182)
+ cat -s
: 두 번 이상 연속된 빈 라인은 출력하지 않음

![cat-s](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/80c03f1a-45cd-4e77-8393-3a50dd6c0f81)

chmod
-----
+ chmod
: 파일의 권한을 변경

![chmod](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/4534a060-d4c8-4cdc-a97b-e5b7ea4debd2)

cp
-----
+ cp
: 파일을 복사

![cp](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/5aa919fc-2dc9-4b31-a89b-3e2bd337c04c)

head
-----
+ head
: 파일의 앞 10줄을 출력

![head](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/51aa16a3-cc30-4389-99a7-09c6050b36f1)
+ head -v 
: 파일명을 출력하고 파일 내용의 앞 10 줄을 출력

![head-v](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/870c7f12-8947-4e97-8207-98bf53498632)
+ head -q
: 파일명을 출력하지 않고 파일 내용의 앞 10 줄을 출력

![head-q](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/8e8fd9a9-0e69-4f3c-b628-a5196bbc84eb)
+ head -n
  + head -n 숫자
  : 지정한 숫자 만큼의 행을 출력
  
  ![head-n숫자](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/45e7dd6e-c449-4e19-a973-9b4a05c42023)
  + head -n -숫자
  : 지정한 숫자 만큰의 행을 마지막에서 부터 제외하고 출력

  ![head-n-숫자](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/9ad33148-2964-4a64-a205-1a346331e4e3)


mkdir
------
+ mkdir
: 디렉토리를 생성

![mkdir](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/96420ee8-ab20-4b3e-a96b-23e5f44139f4)
+ mkdir -v 
: 디렉토리를 생성하고 생성된 디렉토리에 대한 메시지 출력

![mkdir-v](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/825800c0-0051-4ce9-9bae-ca4a6ee7c5dd)

nl
-----
+ nl
: 텍스트 파일의 각 줄에 줄 번호를 붙여 출력

![nl](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/5bf76667-b22b-4051-978d-44088391e4f9)


pwd
-----
+ pwd
: 현재 위치한 경로를 절대 경로로 출력

![pwd](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/e7862397-1aaa-4bec-be0b-090b720bc77b)

rm
-----
+ rm
: 파일을 제거

![rm](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/4dd37bfa-8a76-4fc3-953d-ac61dd07fc66)
+ rm -v
: 파일을 제거하고 삭제 되었다는 메시지를 출력

![rmdir-v](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/c4a1c5bb-1662-4bdf-88af-aa7082e2dbee)
+ rm -d
: 비어있는 디렉토리를 제거

![rm-d](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/6d7adfa3-2630-4461-a228-4c062e2b810d)

rmdir
-----
+ rmdir
: 빈 디렉토리를 삭제

![rmdir](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/8980d013-ff9d-48cc-9e6a-f8fd3fe9a148)
+ rmdir -v
: 빈 디렉토리를 제거하고 삭제 되었다는 메시지를 출력

![rmdir-v](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/6664b261-0fbd-433b-824b-0615f858687d)


tail
-----
+ tail
: 파일의 마지막 10줄을 출력

![tail](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/57c1de54-7adb-41b4-b9ce-dc9209fc7177)
+ tall -v
: 파일명을 출력하고 파일의 마지막 10줄을 출력

![tail-v](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/382b6190-d947-4f28-ac21-04e781dbd95d)
+ tail -q
: 파일명을 출력하지 않고 파일의 마지막 10줄을 출력

![tail-q](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/25770d92-ec62-490a-87d9-c682e8888e77)
+ tail -n
  + tail -n 숫자
  : 입력받은 라인 수 만큼 파일의 마지막 부분에서 출력
  
  ![tail-n숫자](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/305f63af-e2b8-41a9-a414-d82a46477b48)
  + tail -n 숫자
  : 입력받은 라인 수 를 앞에서 제외하고 나머지 부분을 출력

  ![tail-n+숫자](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/ffa7d413-976c-48d2-930f-bb8629a7561c)

touch
-----
+ touch
: 파일의 접근시간과 수정시간을 현재 시간으로 업데이트

![touch](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/c429a68d-8b9c-4b7e-a8f7-46948abccd8f)
+ touch -a
: 파일의 접근시간을 현재 시간으로 업데이트

![touch-a](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/2ccd2786-2eb0-4168-a774-cb92aa3d6bf9)

+ touch -m
: 파일의 수정시간을 현재 시간으로 업데이트

![touch-m](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/505b7253-4396-4ef5-8e16-a9dbb8391b2b)
+ touch -d
: 지정한 시간으로 파일의 접근시간과 수정시간을 업데이트(string으로 date를 입력받는다.)

![touch-d](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/2e185b6f-2036-442c-a461-7683dcbcb742)
+ touch -t
: 지정한 시간으로 파일의 접근시간과 수정시간을 업데이트([[CC]YY]MMDDhhmm[.ss]로 data를 입력받는다.)

![touch-t](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/2c7a0d9d-74af-4f4a-b460-3ac228f4ddb7)
+ touch -c
: 존재하지 않는 파일을 수정하려해도 새로운 파일을 생성하지 않는다.

![touch-c](https://github.com/min-young417/linux-commands_SysP-Project/assets/122364547/3b5e6937-42f8-4352-b8b0-f80ebd0dc037)
