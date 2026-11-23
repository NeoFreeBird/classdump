//
#ifndef _TtC8BrazeKit28DelayedNotificationRetention_h
#define _TtC8BrazeKit28DelayedNotificationRetention_h
@import Foundation;

@class BrazeKit.Braze ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSd, _$sSi, _$sSo15NSRecursiveLockC, _TtCs12_SwiftObject;

@interface BrazeKit.DelayedNotificationRetention : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSRecursiveLock lock;
    BrazeKit.Braze ? _retainedInstance;
    Swift.Int _pendingCount;
    Swift.Double timeoutDuration;
    nominal type descriptor for Dispatch.DispatchWorkItem ? timeoutWorkItem;
}

@end

#endif /* _TtC8BrazeKit28DelayedNotificationRetention_h */
