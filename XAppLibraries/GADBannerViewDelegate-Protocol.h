//
#ifndef GADBannerViewDelegate_Protocol_h
#define GADBannerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADBannerViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)bannerViewDidReceiveAd:(id)ad;
- (void)bannerView:(id)view didFailToReceiveAdWithError:(id)error;
- (void)bannerViewDidRecordImpression:(id)impression;
- (void)bannerViewDidRecordClick:(id)click;
- (void)bannerViewWillPresentScreen:(id)screen;
- (void)bannerViewWillDismissScreen:(id)screen;
- (void)bannerViewDidDismissScreen:(id)screen;

@end

#endif /* GADBannerViewDelegate_Protocol_h */
