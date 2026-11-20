//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31ImmersiveVideoResolutionScriber_h
#define _TtC14T1TwitterSwift31ImmersiveVideoResolutionScriber_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveVideoResolutionScriber.ContentIds, _$s10Foundation4DateVMn ?, _$sSd, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _TtCs12_SwiftObject, __C.CGSize;

@interface T1TwitterSwift.ImmersiveVideoResolutionScriber : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount _account;
    __C.TFSTwitterScribeContext _scribeContext;
    T1TwitterSwift.ImmersiveVideoResolutionScriber.ContentIds _contentIds;
    __C.CGSize _maxResolution;
    __C.CGSize _maxRenderedResolution;
    __C.CGSize _maxViewportPx;
    Swift.Double _videoDuration;
    Swift.Double _playedDuration;
    nominal type descriptor for Foundation.Date ? _playingSince;
    Swift.Bool _isStopped;
    Swift.Bool _hasScribed;
}

@end

#endif /* _TtC14T1TwitterSwift31ImmersiveVideoResolutionScriber_h */
