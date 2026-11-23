//
#ifndef T1PeopleAddressBookContact_h
#define T1PeopleAddressBookContact_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSObject, NSString, TFSTwitterContact;

@interface T1PeopleAddressBookContact : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *contactHash;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) TFSTwitterContact *canonicalContact;

/* instance methods */
- (id)initWithFullName:(id)name phoneNumbers:(id)numbers emailAddresses:(id)addresses uniqueIdentifier:(id)identifier canonicalContact:(id)contact;
- (id)initWithFullName:(id)name phoneNumbers:(id)numbers emailAddresses:(id)addresses uniqueIdentifier:(id)identifier;
- (id)init;
- (id)addressBookContactWithCanonicalContact:(id)contact;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* T1PeopleAddressBookContact_h */
