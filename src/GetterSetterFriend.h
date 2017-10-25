/*
 * GetterSetterFriend.h
 *
 *  Created on: Oct 25, 2017
 *      Author: keith
 */

#ifndef GETTERSETTERFRIEND_H_
#define GETTERSETTERFRIEND_H_

class GetterSetterFriend {
private:
	int i;
public:
	GetterSetterFriend(int i);
	virtual ~GetterSetterFriend();

	//a horrid little getter
	int geti();

	//a friend which exposes internal data
	friend bool isEqual_friend(GetterSetterFriend &gsf1, GetterSetterFriend &gsf2);
};

bool isEqual_using_getter(GetterSetterFriend &gsf1,GetterSetterFriend &gsf2);

#endif /* GETTERSETTERFRIEND_H_ */
