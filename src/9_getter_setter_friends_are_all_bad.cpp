//============================================================================
// Name        : 9_getter_setter_friends_are_all_bad.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GetterSetterFriend.h"

using namespace std;

int main() {
	GetterSetterFriend gs1(0);
	GetterSetterFriend gs2(2);

	bool bcomp = isEqual_friend(gs1,gs2);
	     bcomp = isEqual_using_getter(gs1,gs2);

}
