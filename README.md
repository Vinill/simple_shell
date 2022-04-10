# simple_shell
Basic shell:
* In this project we designed a "Basic-Shell" applying most of the topics that we learn during this first trimester

Our shell works as follows:

- Waits for user input
- Analyze the input (Receive command)
- Defines what type of command it is (what arguments it has, if it has pipe or redirection)
- Look for the command in the PATH or in the files (depending on which command it is)
- Call the default function of that command
- Return the result

Its syntax would be as follows:

		1	  2		   3		 	4
	command name {arguments} {pipe or redirection} {others arguments}

For example:

	 1   2    3       4
	ls {-l } {>} {file_name}

* In the main function of our shell are the following calls.

- Fork
- Wait
- Pid

* Explanations of functions, calls and processes are in the "Man file". Read it for more information

