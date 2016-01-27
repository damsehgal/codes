using  System;
namespace phello
{
	class phello{
		public static void Main(String[] args)
		{
			System.Console.WriteLine("a");
			System.Console.ReadLine ();
		}
	}
}
Hi and welcome,

First, where is that screenshot from, I mean what application? It's obviously a directory listing, just curious to see if this would happen in any other application, when it happens. If it's a directory listing, can you do the same directory listing in a terminal? Hit Ctrl+Alt_l (lower-case L), it should open a terminal window, and enter this at the prompt: ls -l

Do you get the same files listed? Is the problem still showing up in the terminal window?

Second, make up a file with some random text with a bunch of "b" characters in spots where you would expect to find them, and keep that file open in some editor (like gedit). When the screen darkens and comes back, does the same problem happen with the text in the editor?

When the screen of an application darkens momentarily and comes back to normal brightness level, it usually means that application is busy getting data updated, getting refreshed. It's happened to me, and it may not happen if you have one graphics card vs. another, but it's usually an indication that something is slowing down the transfer of data to that screen. Do your disks spin a lot when that screen is dark? 