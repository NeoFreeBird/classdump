//
#ifndef _TtC14T1TwitterSwift28SynchronizeContactsOperation_h
#define _TtC14T1TwitterSwift28SynchronizeContactsOperation_h
@import Foundation;

@class TFSConcurrentOperation, _$sSaySo17TFSTwitterContactCG, _$sSaySo26T1PeopleAddressBookContactCG, _$sSo11NSOperationCSg, _$sSo11NSOperationCSgSg, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC, _$sSo38T1SynchronizeContactsOperationDelegate_pSgXw, _$sSo42T1PeopleAddressBookSynchronizationSettings_p;

@interface T1TwitterSwift.SynchronizeContactsOperation : TFSConcurrentOperation { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    [__C.T1PeopleAddressBookContact] contactsToSynchronize;
    [__C.TFSTwitterContact] contactsToDelete;
    __C.T1PeopleAddressBookSynchronizationSettings settings;
    __C.NSOperationQueue operationQueue;
    __C.NSOperation? $__lazy_storage_$_checkPermissionsOperation;
    __C.NSOperation?? $__lazy_storage_$_deleteOperation;
    __C.NSOperation?? $__lazy_storage_$_uploadOperation;
    weak __C.T1SynchronizeContactsOperationDelegate? delegate;
}

/* instance methods */
- (void)run;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28SynchronizeContactsOperation_h */
