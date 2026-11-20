//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomEventInterstitial_Protocol_h
#define GADCustomEventInterstitial_Protocol_h
@import Foundation;

#include "GADCustomEventInterstitialDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GADCustomEventInterstitial <NSObject>

@required

@property (weak, nonatomic) id <GADCustomEventInterstitialDelegate> delegate;

/* required instance methods */
- (id)init;
- (void)requestInterstitialAdWithParameter:(id)parameter label:(id)label request:(id)request;
- (void)presentFromRootViewController:(id)controller;

@optional

@end

#endif /* GADCustomEventInterstitial_Protocol_h */
