# 113-1-junior-college-C-plus-plus-program
課程github說明
每周上課教材會放到 weekx 目錄，請同學將作業上傳至自己的學號目錄中

git簡易教學
拉專案下來

git clone https://github.com/ia2407/112-1-junior-college-C-plus-plus-program.git 學號

移動到學號資料夾

cd 學號

啟動 git 功能

git init

設定使用者資訊

git config --global user.name <username>
git config --global user.email <mailaddress>

設定遠端節點

git remote add origin https://github.com/ia2407/112-1-junior-college-C-plus-plus-program.git

(以上步驟在學校電腦才須重須設定)
(若在家中電腦做過了，就不用重複設定，可以直接對自家的電腦專案目錄中新增檔案做以下操作)

檢查專案資料夾狀態
(注意!只有目錄的變更，git會無法追蹤。請加上檔案的修改(檔案內容改變也可以追蹤)，git才追蹤的到)

git status只是檢查的動作，可以觀察(新增,修改以及加入清單)的檔案。

另外commit過的更改檔案沒辦法再透過git status觀察到是正常的

git status

將變更加入待更改清單

加入所有檔案
git add .

加入指定檔案或目錄
git add your_file/dir

為變更加上註解

git commit -m "你的註解" 

推專案上去 (第一次加上-u，會記錄後面的資訊，第二次只需git push就好)

git push -u origin master
git push

在push時，可能會報錯誤(Updates were rejected because the remote contains work that you do not have locally.) (第一次加上-u，會記錄後面的資訊，第二次只需git pull就好)

git pull -u origin master
git pull
