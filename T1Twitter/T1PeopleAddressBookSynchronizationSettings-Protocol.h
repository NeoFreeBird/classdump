//
#ifndef T1PeopleAddressBookSynchronizationSettings_Protocol_h
#define T1PeopleAddressBookSynchronizationSettings_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDate;

@protocol T1PeopleAddressBookSynchronizationSettings <NSObject>

@required

@property (nonatomic) long long addressBookSynchronizationStatus;
@property (nonatomic, readonly) long long addressBookSynchronizationDenialReason;
@property (nonatomic) long long addressBookSynchronizationUploadMode;
@property (nonatomic, copy) NSDate *addressBookSynchronizationLastExtReuploadTime;

/* required instance methods */
- (void)setAddressBookSynchronizationStatusDeniedWithReason:(long long)reason;
- (void)setAddressBookSynchronizationStatusDeniedWithReason:(long long)reason;

@optional

@end

#endif /* T1PeopleAddressBookSynchronizationSettings_Protocol_h */
