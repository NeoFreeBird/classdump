//
#ifndef T1PeopleAddressBook_h
#define T1PeopleAddressBook_h
@import Foundation;

#include "T1PeopleAddressBook-Protocol.h"

@class NSArray, NSData, NSObject, NSString;

@interface T1PeopleAddressBook : NSObject <T1PeopleAddressBook>

@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSData *changeToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* T1PeopleAddressBook_h */
