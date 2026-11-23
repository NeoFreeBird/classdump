//
#ifndef T1PeopleAddressBookUserDefaultsSynchronizationSettings_h
#define T1PeopleAddressBookUserDefaultsSynchronizationSettings_h
@import Foundation;

#include "T1PeopleAddressBookSynchronizationSettings-Protocol.h"

@class NSDate, NSObject, NSString;

@interface T1PeopleAddressBookUserDefaultsSynchronizationSettings : NSObject <T1PeopleAddressBookSynchronizationSettings>

@property (readonly, copy, nonatomic) NSString *accountID;
@property (nonatomic) long long addressBookSynchronizationStatus;
@property (readonly, nonatomic) long long addressBookSynchronizationDenialReason;
@property (nonatomic) long long addressBookSynchronizationUploadMode;
@property (retain, nonatomic) NSDate *addressBookSynchronizationLastExtReuploadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (void)setAddressBookSynchronizationStatusDeniedWithReason:(long long)reason;
- (id)_denialReasonSettingKey;
- (id)_lastExtReuploadTimeKey;
- (id)_settingKey;
- (id)_uploadModeKey;
- (void)_setAddressBookSynchronizationStatus:(long long)status denialReason:(long long)reason;

@end

#endif /* T1PeopleAddressBookUserDefaultsSynchronizationSettings_h */
