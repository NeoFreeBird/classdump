//
#ifndef _TtC14T1TwitterSwift28URTTweetLikeTimelineListener_h
#define _TtC14T1TwitterSwift28URTTweetLikeTimelineListener_h
@import Foundation;

@class T1TwitterSwift.DisplayLocation, T1TwitterSwift.URTTweetLikedReactiveBlender, _$sSa -> _$ss5Int64VMn, _$sSi, _$sSo17TFNTwitterAccountC, _$sSo21TFNDataViewControllerCSgXw, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTweetLikeTimelineListener : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.URTTweetLikedReactiveBlender reactiveBlender;
    T1TwitterSwift.DisplayLocation displayLocation;
    Swift.Int maxLikeCount;
    __C.TFNTwitterAccount account;
    weak __C.TFNDataViewController? viewController;
    Swift.Array -> nominal type descriptor for Swift.Int64 favoritedStatusIDs;
}

/* instance methods */
- (void)accountDidFavoriteStatus:(id)status;
- (void)accountDidUnfavoriteStatus:(id)status;

@end

#endif /* _TtC14T1TwitterSwift28URTTweetLikeTimelineListener_h */
