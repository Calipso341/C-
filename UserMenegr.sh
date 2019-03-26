#! /bin/bash

function Menu(){
echo -e "\n\tTo add user PRESS 1!\n\tTo add user by UID PRESS 2!\n\tTo add user by UID and GID PRESS 3!\n\tTo delete user PRESS 4!\n\tTo delete group PRESS 5\n\tTo reaname user PRESS 6!\n\tTo change user password PRESS 7!\n\tTo exit PRESS 0!"

}

function CreatUser(){
echo -e "\n\tEnter name of user!"
read name
echo -e "\n\tEnter the password fo user!"
read passwd
useradd $name
passwd $name
if (( $? == 0 ))
then echo -e "\n\tOperation was SUCCESSFUL!"
fi
}

function UserUid(){
echo -e "\n\tEnter name of user!"
read name
echo -e "\n\tEnter UID!"
read uid
useradd $name -u $uid
if (( $? == 0))
then echo -e "\n\tOpperation was SUCCESSFULL!"
fi
}

function UserUidGid(){
echo -e "\n\tEnter name of user!"
read name
echo -e "\n\tEnter UID!"
read uid
echo -e "\n\tEnter GID!"
read gid
useradd $name -u$uid -g$gid
if (( $? == 0  ))
then echo -e "\n\tOperation was SUCCESSFUL!"
fi
}

function DeleteUser(){
if (( $? == 0))
then
echo -e "\n\tEnter name of user you want to delete!"
read name
userdel $name -r
fi
if (( $? == 0 ))
then echo -e "\n\tOperation was SUCCESSFUL!"
fi

}

function DeleteGroup(){
echo -e "\n\tEnter name of group you want to delete!"
read $name
groupdel $name
}
function RenameUser(){
echo -e "\n\tEnter name of user to rename!"
read edituser
cat /etc/passwd | grep $edituser
if (( $? == 0 ))
then 
echo -e "\n\tEnter new name!"
read newname
usermod -l $newname $edituser
else 
echo -e "\n\tUser does not exist"
fi
if (( $? == 0 ))
then -e "\n\tOperation was SUCCESFULL!"
fi
}

function ChangePasswd(){
echo -e "\n\tEnter name of user for which you want change password!"
read name 
if (( $? == 0 ))
then
passwd $name
fi
if (( $? == 0))
then echo -e "\n\tOperation was SUCCESSFUL!"
fi
}

exit=true

while [ $exit == true  ]

do

Menu;

read choice

case $choice in
      1) CreatUser; ;;
      2) UserUid; ;;
      3) UserUidGID; ;;
      4) DeleteUser; ;;
      5) DeleteGroup; ;;
      6) RenameUser; ;;
      7) ChangePasswd; ;;
      0) echo -e "\n\tBye"; let exit=false ;;
      *) echo -e "\n\tR.T.F.M" ;;
esac

done
