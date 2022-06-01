

clonee(){
echo " "
read -p "Enter the repo url " x
echo "You entered ${x}!"
git clone "${x}"
echo "Choose your repo "
echo " " 
ls -d */
echo " " 
read -p "enter the name - " n
echo " " 
cd $n
pwd
#return
repoOptions
cd ..
echo " "
}

create(){
echo " "
read -p "Enter the repo name " x
echo "You entered ${x}!"
mkdir $x
cd $x
git init
echo "repo create at "
pwd
#return 
echo ""
  
repoOptions
cd ..
echo " "
}


existingrepo(){
echo " "
echo "Choose amoung the following dir "
echo " " 
ls -d */
echo " " 
read -p "enter the name - " n
echo " " 
cd $n
pwd
repoOptions
cd ..
echo " "
}

commitChange(){
echo " "
read -p "Enter the commit message " name
git commit -m "${name}"
echo " "
}


createfile(){
echo " "
read -p "Enter the name of file" name
touch $name
git add $name
git status
echo " "
echo "DO you want to commint the changes"
   select var in Yes No
do
	case $var in
	 Yes)
	   commitChange 
		break ;;
	 No)
		break ;;
	Exit)
	    x=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
done
echo " "
}

editFile(){
echo " "
ls 
read -p "Enter the name of file " name
vi $name
git add $name
git status
echo "DO you want to commint the changes "
   select var in Yes No
do
	case $var in
	 Yes)
	   commitChange 
		break ;;
	 No)
		break ;;
	Exit)
	    x=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
done
echo " "

}

 RestoreFun(){
 echo " "
 ls 
 echo ""
 read -p "Enter file name " name
 git restore $name
 echo "DO you want to commint the changes"
   select var in Yes No Exit
do
	case $var in
	 Yes)
	   commitChange 
		break ;;
	 No)
		break ;;
	Exit)
	    x=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
done
echo " "
 }
 
 revertFun(){
 echo " "
 git log
 echo ""
 read -p "enter the log id" id
 git revert $id
 git log
 git status
 echo "DO you want to commint the changes "
   select var in Yes No Exit
do
	case $var in
	 Yes)
	   commitChange 
		break ;;
	 No)
		break ;;
	Exit)
	    x=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
done
echo " "
 }
 
 createbranchFun(){
 echo " "
 git branch -l
 echo ""
 read -p "Enter the name of the Branch " na
 git branch $na
 git branch -l
 echo " "
 }

repoOptions(){
xx=1;
echo ""
echo "What you want to do ? "
echo " "
while [ $xx == 1  ]
do
select var in create_file Edit_File Status log restore revert Createbranch Add_and_Commit Read_File Change_Branch Push_to_remote_Main_repo merge_branch Pull_repo Exit
do
	case $var in
	 create_file)
	  createfile
		break ;;
	 Edit_File)
	  editFile
		break ;;
	 Status)
	   git status
		break ;;
	 log)
	 git log
		break ;;
	restore)
	   RestoreFun
		break ;;
	 revert)
	    revertFun
		break ;;
	Createbranch)
	   createbranchFun
		break ;;
	Add_and_Commit)
	   git add --all
	   commitChange
		break ;;
	Read_File)
	   ls
	   echo ""
	   read -p "Enter file name " na
	   echo ""
	   cat $na
	   echo ""
		break ;;
	Change_Branch)
	    echo ""
		git branch -l
		read -p "Enter Branch name " br
		git checkout $br
		break ;;
		
	Push_to_remote_Main_repo)
	    echo ""
		git push master
		break ;;
	
    merge_branch)
	    git branch -l
		echo ""
		git checkout main
		read -p "enter branch name" MR
		git merge $MR
		break ;;
	Pull_repo)
	    echo " "
		echo "note that this command will do --all pull" 
		git pull origin --all
		break ;;
	Exit)
	    xx=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
 done

done
echo " "
}

# Script Starts here

echo " " 
echo "hello this is an intractive script where you can perform various git operations "
echo " " 
echo "Once you have choosen an option you will be either creating a repo or will be in a repo there you will get all the options to perform other git operations"
echo " " 
xyz=1
while [ $xyz == 1  ]
do 

echo "Please select from one of the options given below "
echo " " 

pwd

   select var in clone create Go_to_Existing_Repo Exit
do
	case $var in
	 clone)
	    clonee 
		break ;;
	 create)
	    create
		break ;;
	Go_to_Existing_Repo)
	    existingrepo
		break ;;
	Exit)
	    xyz=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
   #break
 done 
done
echo " " 
echo "Thank you for using this Script Bye! :) "

