//
#ifndef _TtC14T1TwitterSwift19PostStatusCacheImpl_h
#define _TtC14T1TwitterSwift19PostStatusCacheImpl_h
@import Foundation;

@class _$sSD -> _$ss5Int64VMn _$sSo16TFNTwitterStatusC, _$sSD -> _$ss5Int64VMn _$sSo9TAVPlayerC, _$sSa -> _$ss5Int64VMn, _$sSo17TFNTwitterAccountC, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.PostStatusCacheImpl : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.Array -> nominal type descriptor for Swift.Int64 statusIDs;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 __C.TFNTwitterStatus statusesByID;
    Swift.Array -> nominal type descriptor for Swift.Int64 playerStatusIDs;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 __C.TAVPlayer playersByStatusID;
    __C.NSObject? memoryWarningObserver;
}

@end

#endif /* _TtC14T1TwitterSwift19PostStatusCacheImpl_h */
