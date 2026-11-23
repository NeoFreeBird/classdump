//
#ifndef _TtCCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService19PlaceholderSettings_h
#define _TtCCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService19PlaceholderSettings_h
@import Foundation;

#include "T1PeopleAddressBookSynchronizationSettings-Protocol.h"

@class NSDate, NSObject;

@interface (extension in T1TwitterSwift):__C.TFNTwitterAccount.(PlaceholderAddressBookService in _6C88303F5C186AA47EAE06F1AFB16C66).PlaceholderSettings : NSObject <T1PeopleAddressBookSynchronizationSettings> // (Swift)

@property (nonatomic) long long addressBookSynchronizationStatus;
@property (nonatomic) long long addressBookSynchronizationDenialReason;
@property (nonatomic) long long addressBookSynchronizationUploadMode;
@property (nonatomic, copy) NSDate *addressBookSynchronizationLastExtReuploadTime;

/* instance methods */
- (void)setAddressBookSynchronizationStatusDeniedWithReason:(long long)reason;
- (id)init;

@end

#endif /* _TtCCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService19PlaceholderSettings_h */
