//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomEventBannerDelegate_Protocol_h
#define GADCustomEventBannerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIViewController;

@protocol GADCustomEventBannerDelegate <NSObject>

@required

@property (readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

/* required instance methods */
- (void)customEventBanner:(id)banner didReceiveAd:(id)ad;
- (void)customEventBanner:(id)banner didFailAd:(id)ad;
- (void)customEventBannerWasClicked:(id)clicked;
- (void)customEventBannerWillPresentModal:(id)modal;
- (void)customEventBannerWillDismissModal:(id)modal;
- (void)customEventBannerDidDismissModal:(id)modal;
- (void)customEventBanner:(id)banner clickDidOccurInAd:(id)ad;
- (void)customEventBannerWillLeaveApplication:(id)application;

@optional

@end

#endif /* GADCustomEventBannerDelegate_Protocol_h */
