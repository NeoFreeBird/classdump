//
#ifndef GADDynamicHeightSearchBannerViewDelegate_Protocol_h
#define GADDynamicHeightSearchBannerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADDynamicHeightSearchBannerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)bannerViewDidReceiveAd:(id)ad;
- (void)bannerView:(id)view didUpdateDesiredContentSize:(struct CGSize { double x0; double x1; })size;
- (void)bannerView:(id)view didFailToReceiveAdWithError:(id)error;
- (void)bannerView:(id)view didReceiveLandingPageURL:(id)url;

@optional

@end

#endif /* GADDynamicHeightSearchBannerViewDelegate_Protocol_h */
