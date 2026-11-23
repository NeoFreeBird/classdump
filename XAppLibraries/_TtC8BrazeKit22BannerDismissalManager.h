//
#ifndef _TtC8BrazeKit22BannerDismissalManager_h
#define _TtC8BrazeKit22BannerDismissalManager_h
@import Foundation;

@class BrazeKit.BannerDismissalStoring, BrazeKit.BannerRequestTimeStoring, _$sSSSg, _$sSo6NSLockC, _TtCs12_SwiftObject, anoCombine.Cancellable ?, anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.DismissalsManagerEvent _$ss5NeverOMn;

@interface BrazeKit.BannerDismissalManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    inout anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.DismissalsManagerEvent nominal type descriptor for Swift.Never _events;
    BrazeKit.BannerDismissalStoring dismissalStorage;
    BrazeKit.BannerRequestTimeStoring requestTimeStorage;
    Swift.String? currentUserId;
    __C.NSLock userIdLock;
    inout anoCombine.Cancellable ? dismissalStorageCancellable;
    inout anoCombine.Cancellable ? requestTimeStorageCancellable;
}

@end

#endif /* _TtC8BrazeKit22BannerDismissalManager_h */
