//
#ifndef T1PeopleAddressBook_Protocol_h
#define T1PeopleAddressBook_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSData;

@protocol T1PeopleAddressBook <NSObject>

@required

@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSData *changeToken;

@optional

@end

#endif /* T1PeopleAddressBook_Protocol_h */
