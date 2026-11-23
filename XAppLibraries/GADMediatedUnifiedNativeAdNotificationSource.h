//
#ifndef GADMediatedUnifiedNativeAdNotificationSource_h
#define GADMediatedUnifiedNativeAdNotificationSource_h
@import Foundation;

@class NSObject;

@interface GADMediatedUnifiedNativeAdNotificationSource : NSObject

/* class methods */
+ (void)mediatedNativeAdDidRecordImpression:(id)impression;
+ (void)mediatedNativeAdDidRecordClick:(id)click;
+ (void)mediatedNativeAdWillPresentScreen:(id)screen;
+ (void)mediatedNativeAdWillDismissScreen:(id)screen;
+ (void)mediatedNativeAdDidDismissScreen:(id)screen;
+ (void)mediatedNativeAdDidPlayVideo:(id)video;
+ (void)mediatedNativeAdDidPauseVideo:(id)video;
+ (void)mediatedNativeAdDidEndVideoPlayback:(id)playback;

@end

#endif /* GADMediatedUnifiedNativeAdNotificationSource_h */
