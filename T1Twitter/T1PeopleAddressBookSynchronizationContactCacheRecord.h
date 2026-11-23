//
#ifndef T1PeopleAddressBookSynchronizationContactCacheRecord_h
#define T1PeopleAddressBookSynchronizationContactCacheRecord_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSData, NSObject, TFSTwitterContact;

@interface T1PeopleAddressBookSynchronizationContactCacheRecord : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSData *contactHash;
@property (readonly, nonatomic) long long synchronizationState;
@property (readonly, nonatomic) TFSTwitterContact *canonicalContact;

/* instance methods */
- (id)initWithContactHash:(id)hash canonicalContact:(id)contact synchronizationState:(long long)state;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* T1PeopleAddressBookSynchronizationContactCacheRecord_h */
