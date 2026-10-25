# CS210-ItemTrackingProgram

#### Summarize the project and what problem it was solving.
<p> The Corner Grocer wanted to redesign their produce section and needed an item-tracking tool to total up items that were purchased from that section in order to decide on a layout. Instead of it being a long list of repeating items which could make it confusing, the program allows you to see the exact number of items sold. </p>

#### What did you do particularly well?
<p> In this project, I believe I handled the bug testing and input validation much better than before, though I could’ve went over it more thoroughly to ensure nothing could slip through the program and cause errors. </p>

#### Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
<p> The data file given by the project is hard-coded into the program, but it would be good to allow the user to choose which data file they want to open so that they can work with other sections of the grocery store. I could also work more on the input validation to make sure it can handle partial words so that the user doesn’t have to type things in exactly as worded. </p>

#### Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
<p> While not super difficult, I did face an error during the menu input validation process where if you typed in something wrong, it would start to loop the menu. For example, if instead of typing a number, I typed “bananas”, it would repeat the menu and an invalid error line 7 times (one for each letter). I did have to do a bit of research as to what was causing it, and solved it using cin.ignore(). I used the website https://www.learncpp.com whenever I ran into issues. </p>

#### What skills from this project will be particularly transferable to other projects or course work?
<p> I think using map will be very valuable in other projects because data is everywhere and it’s much easier to use map to link names with their values than to write out loops and make the code longer. </p>

#### How did you make this program maintainable, readable, and adaptable?
<p> I used Const for certain variables to make sure that their data can’t be modified, and I also wrote out comments in multiple places to ensure i know what I’m going back to. </p>
