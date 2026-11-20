//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8BrazeKit24BannerRequestTimeStorage_h
#define _TtC8BrazeKit24BannerRequestTimeStorage_h
@import Foundation;

@class BrazeKit.Persistence.Client _$sy_ _$s10Foundation11JSONEncoderCMn _$s10Foundation11JSONDecoderCMn, _$sSDySS _$ss5Int64VMn, _$sSS, _$sSo6NSLockC, _TtCs12_SwiftObject, anoCombine.Cancellable ?, anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.StorageEvent _$ss5NeverOMn;

@interface BrazeKit.BannerRequestTimeStorage : Swift._SwiftObject { // (Swift)
    /* instance variables */
    inout anoCombine.ThreadSafePassthroughSubject BrazeKit.Banners.StorageEvent nominal type descriptor for Swift.Never _events;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Swift.Int64 cache;
    __C.NSLock lock;
    BrazeKit.Persistence.Client  empty-list  first-element-marker  nominal type descriptor for Foundation.JSONEncoder nominal type descriptor for Foundation.JSONDecoder persistence;
    Swift.String persistenceKey;
    inout anoCombine.Cancellable ? loadCancellable;
    inout anoCombine.Cancellable ? saveCancellable;
}

@end

#endif /* _TtC8BrazeKit24BannerRequestTimeStorage_h */
