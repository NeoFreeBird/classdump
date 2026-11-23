//
#ifndef GADNativeAdDelegate_Protocol_h
#define GADNativeAdDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADNativeAdDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)nativeAdDidRecordImpression:(id)impression;
- (void)nativeAdDidRecordClick:(id)click;
- (void)nativeAdDidRecordSwipeGestureClick:(id)click;
- (void)nativeAdWillPresentScreen:(id)screen;
- (void)nativeAdWillDismissScreen:(id)screen;
- (void)nativeAdDidDismissScreen:(id)screen;
- (void)nativeAdIsMuted:(id)muted;

@end

#endif /* GADNativeAdDelegate_Protocol_h */
