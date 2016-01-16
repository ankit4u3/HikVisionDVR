#pragma once

class Login
{
public:
	Login(void);
	long loginUser(char *,char *,char *);
	bool logoutUser(long userid);
};

