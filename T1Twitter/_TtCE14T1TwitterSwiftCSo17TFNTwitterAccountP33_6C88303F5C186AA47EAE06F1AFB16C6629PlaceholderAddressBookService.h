//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService_h
#define _TtCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService_h
@import Foundation;

#include "T1PeopleAddressBookAccessController.h"
#include "_TtP14T1TwitterSwift24PeopleAddressBookService_-Protocol.h"

@class NSOperation, _TtCs12_SwiftObject;

@interface (extension in T1TwitterSwift):__C.TFNTwitterAccount.(PlaceholderAddressBookService in _6C88303F5C186AA47EAE06F1AFB16C66) : Swift._SwiftObject <T1TwitterSwift.PeopleAddressBookService> // (Swift)

@property (nonatomic, readonly) _Bool contactsFetchAuthorized;
@property (nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property (nonatomic, readonly) _Bool contactsSynchronizationOptedOut;
@property (nonatomic, readonly) T1PeopleAddressBookAccessController *accessController;
@property (nonatomic, weak) NSOperation *currentOptInOperation;

/* instance methods */
- (id)fetchActiveContactsRecommendationsWithDelegate:(id)delegate completion:(id /* block */)completion;
- (void)initiateContactsSynchronization;
- (id)optInAfterDelayWithDelay:(double)delay completion:(id /* block */)completion;
- (id)optIn;
- (void)optOutWithReason:(long long)reason;

@end

#endif /* _TtCE14T1TwitterSwiftCSo17TFNTwitterAccountP33_6C88303F5C186AA47EAE06F1AFB16C6629PlaceholderAddressBookService_h */
