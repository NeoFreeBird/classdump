//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleDefaultAddressBookService_h
#define T1PeopleDefaultAddressBookService_h
@import Foundation;

#include "T1PeopleAddressBookAccessController.h"
#include "T1UploadContactsOperationDelegate-Protocol.h"
#include "_TtP14T1TwitterSwift24PeopleAddressBookService_-Protocol.h"

@class NSObject;

@interface T1PeopleDefaultAddressBookService : NSObject <T1UploadContactsOperationDelegate, T1TwitterSwift.PeopleAddressBookService> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *addressBook;
    NSNumber"16@0:8 *settings;
    NSNumber"16@0:8 *commandLoader;
    NSNumber"16@0:8 *commandContext;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *accountModel;
    NSNumber"16@0:8 *synchronizationController;
    NSNumber"16@0:8 *currentOptInOperation;
    NSNumber"16@0:8 *$__lazy_storage_$_accessController;
}

@property (nonatomic, readonly) _Bool contactsFetchAuthorized;
@property (nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property (nonatomic, readonly) _Bool contactsSynchronizationOptedOut;
@property (nonatomic, retain) T1PeopleAddressBookAccessController *accessController;

/* class methods */
+ (void)initiateContactsSynchronizationWithAccount:(id)account;

/* instance methods */
- (void)uploadContactsOperation:(id)operation didUploadContacts:(id)contacts;
- (void)uploadContactsOperation:(id)operation didFailToUploadContacts:(id)contacts withError:(id)error;
- (void)initiateContactsSynchronization;
- (id)optInAfterDelayWithDelay:(double)delay completion:(id /* block */)completion;
- (id)optIn;
- (void)optOutWithReason:(long long)reason;
- (id)fetchActiveContactsRecommendationsWithDelegate:(id)delegate completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1PeopleDefaultAddressBookService_h */
