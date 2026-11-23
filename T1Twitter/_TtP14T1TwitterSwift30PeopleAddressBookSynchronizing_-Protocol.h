//
#ifndef _TtP14T1TwitterSwift30PeopleAddressBookSynchronizing__Protocol_h
#define _TtP14T1TwitterSwift30PeopleAddressBookSynchronizing__Protocol_h
@import Foundation;

#include "T1PeopleAddressBookAccessController.h"

@protocol T1TwitterSwift.PeopleAddressBookSynchronizing

@required

@property (nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property (nonatomic, readonly) _Bool contactsSynchronizationOptedOut;
@property (nonatomic, readonly) T1PeopleAddressBookAccessController *accessController;

/* required instance methods */
- (void)initiateContactsSynchronization;
- (id)optInAfterDelayWithDelay:(double)delay completion:(id /* block */)completion;
- (id)optIn;
- (void)optOutWithReason:(long long)reason;

@optional

@end

#endif /* _TtP14T1TwitterSwift30PeopleAddressBookSynchronizing__Protocol_h */
