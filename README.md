# team-cook2

Welcome to our final project.


We built a desktop GUI application that helps homecooks store their delicious recipes.

Our application is built with Qt Framework. The backend and frontend are both written in C++.

To compile the program, you will need to have a recent version of Qt Creator, preferably version 5.14 or later.

Then you will need to download all of the files and directories in this repository. Take special care to ensure you download the build folder.


Clone this repository in a desired location on your computer.

In Qt you will open project, navigate to where your files are located, and click on Cookbook.pro file.

Since you are in the editor, you can run the program in the debug-build state.

Click on the green play button (the one without the bug on it) located on the bottom left corner of the Qt Creator application.

This will launch our program. In the event you encounter an error saying that build dictory needs to be a same level as source files, then you need to go to Build Settings. You can access Build Setting by clicking on the Projects button on that has a wrench on it. Then in Build Settings, under "General" make sure the option "Shadow Build" is not checked off. This should fix the issue. You can now hit the green play button to launch the program.


The first thing you will notice is a loading screen with a welcome message using our application branding.

After the loading page, you will see the homepage for our cookbook. 

Here you will be able to see any recipes that you save. 


We designed our cookbook with intuitive navigation tools, such as next/previous buttons, save, homepage, delete, etc. 

The program has four pages: homepage, searchpage, recipe viewer, and recipe editor. Nagivation between these pages is seamless.

You will also notice a Menu button in the top right corner of the application (top bar of screen if using Mac). The menu options are contextual, and they are based on the current page that you are viewing.



Test Cases:

Adding Recipe - 

	From the homepage, click "Add Recipe" button.
	In the recipe editor, enter text into each respective field.
	Upload a photo if you desire.
	If you do not enter a name, the recipe will not save.
	Once you save the recipe, you will see your recipe appear at the bottom of the list on the homepage.



Viewing Recipe - 

	Click on a recipe listed on the homepage.
	You will be brought to the recipe viewer page.
	You can go to the next recipe by clicking the button with the right arrow and previous recipe by clicking are on the lift arrow.
	The list will loop around if you are at the end of the list or at the beginning of the list.



Reseting/Changing Photo - 

	Click on a recipe from the homepage, which will bring you to the recipe viewer.
	From the recipe viewer, click on edit recipe.
	Now that you are in the recipe editor, you can hit the "Reset Photo" button. This will reset the current photo to the default recipe photo.
	To select a new recipe, hit the "Upload Recipe" button.



Search for Recipe -

	You can search for a recipe from the homepage by typing the name of a recipe name, or part of a name, and hitting either either the enter key or clicking on the search button.
	You will then be brought to the searchpage. If there are results, they will be displayed in a list box similar to one on the homepage. You can also search for recipes on the searchpage. Take note that our serach is case sensitive. 
