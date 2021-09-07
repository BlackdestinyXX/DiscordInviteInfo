#include <iostream>
#include <cpr/cpr.h>
#include <string>
using namespace std;

int main()
{
	string invite;
	cout << "Created by Bl4ckdestinyXX#1599" << endl;
	cout << "Insert a Discord server invite code" << endl;
	cin >> invite;
	if (invite.rfind("https://", 0) == 0) {
		
		cout << "Invite not valid, please insert only the invite code";

	}
	else {

		cpr::Response r = cpr::Get(cpr::Url{ "https://discord.com/api/invites/" + invite },
			cpr::Parameters{ {"with_counts", "true"}, {"with_expiration", "true"} });

		std::cout << r.text << std::endl;
		cout << endl;
		cout << endl;

	}

	return 0;
}
