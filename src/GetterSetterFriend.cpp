/*
 * GetterSetterFriend.cpp
 *
 *  Created on: Oct 25, 2017
 *      Author: keith
 */

#include "GetterSetterFriend.h"

GetterSetterFriend::GetterSetterFriend(int i):i(i) {
}

GetterSetterFriend::~GetterSetterFriend() {
	// TODO Auto-generated destructor stub
}

int GetterSetterFriend::geti(){
	return i;
}

//a friend func, note that its not part of the class but still has access to class internals
bool isEqual_friend(GetterSetterFriend &gsf1, GetterSetterFriend &gsf2){
	//note direct access (can read/write)
	//gsf1.i = 9;
	return (gsf1.i == gsf1.i);
}

bool isEqual_using_getter(GetterSetterFriend &gsf1,GetterSetterFriend &gsf2){
	//note getter access (can read only)
	int b = gsf1.geti();
	return (gsf1.geti() == gsf1.geti());
}

