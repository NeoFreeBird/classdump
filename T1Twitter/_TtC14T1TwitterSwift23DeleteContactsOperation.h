//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift23DeleteContactsOperation_h
#define _TtC14T1TwitterSwift23DeleteContactsOperation_h
@import Foundation;

@class TFSConcurrentOperation, _$sSaySo17TFSTwitterContactCG, _$sSo16NSOperationQueueCSg, _$sSo17TFNTwitterAccountC, _$sSo33T1DeleteContactsOperationDelegate_pSgXw, _$sSo42T1PeopleAddressBookSynchronizationSettings_p;

@interface T1TwitterSwift.DeleteContactsOperation : TFSConcurrentOperation { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    [__C.TFSTwitterContact] contacts;
    __C.T1PeopleAddressBookSynchronizationSettings settings;
    __C.NSOperationQueue? $__lazy_storage_$_operationQueue;
    weak __C.T1DeleteContactsOperationDelegate? delegate;
}

/* instance methods */
- (void)run;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift23DeleteContactsOperation_h */
