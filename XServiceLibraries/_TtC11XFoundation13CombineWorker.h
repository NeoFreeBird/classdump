//
#ifndef _TtC11XFoundation13CombineWorker_h
#define _TtC11XFoundation13CombineWorker_h
@import Foundation;

@class Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface XFoundation.CombineWorker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock stateLock;
    Swift.Bool isStarted;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11XFoundation13CombineWorker_h */
