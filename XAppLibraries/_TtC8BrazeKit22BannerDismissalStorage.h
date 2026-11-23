//
#ifndef _TtC8BrazeKit22BannerDismissalStorage_h
#define _TtC8BrazeKit22BannerDismissalStorage_h
@import Foundation;

@class BrazeKit.Persistence.Client _$sy_ _$s10Foundation11JSONEncoderCMn _$s10Foundation11JSONDecoderCMn, _$sSDySSSgSh -> BrazeKit.Braze.Banner.DismissalEntry, _$sSS, _$sSi, _$sSo6NSLockC, _TtCs12_SwiftObject, anoCombine.Cancellable ?, anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.StorageEvent _$ss5NeverOMn;

@interface BrazeKit.BannerDismissalStorage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    inout anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.StorageEvent nominal type descriptor for Swift.Never _events;
    Swift.Dictionary empty-list Swift.String?Swift.Set -> BrazeKit.Braze.Banner.DismissalEntry cache;
    __C.NSLock lock;
    BrazeKit.Persistence.Client  empty-list  first-element-marker  nominal type descriptor for Foundation.JSONEncoder nominal type descriptor for Foundation.JSONDecoder persistence;
    Swift.String persistenceKey;
    Swift.Int dismissalsCacheSize;
    inout anoCombine.Cancellable ? loadCancellable;
    inout anoCombine.Cancellable ? saveCancellable;
}

@end

#endif /* _TtC8BrazeKit22BannerDismissalStorage_h */
