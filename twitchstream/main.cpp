//
//  main.cpp
//  twitchstream
//
//  Created by Eric Schubert on 9/5/17.
//  Copyright © 2017 Eric Schubert. All rights reserved.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

std::string s1;
std::string s2 = ("livestreamer --http-header Client-ID=jzkbprff40iqj646a697cyrvl0zt2m6 twitch.tv/");
std::string s3 = (" audio_only");
int confirmStart;

int main()
{
	cout << "This program requires Livestreamer and VLC to be installed." << endl << endl << "Please enter the name of the Twitch stream you would like to listen to." << endl << endl;

	cin >> s1;

	s2.append(s1);

std:string completeCommand = (s2 + s3);

	cout << "You typed '" << s1 << "', is this correct?" << endl << "1 = yes" << endl;

	cin >> confirmStart;

	if (confirmStart == 1)
	{
		system(completeCommand.c_str());
	}
	return 0;
}
