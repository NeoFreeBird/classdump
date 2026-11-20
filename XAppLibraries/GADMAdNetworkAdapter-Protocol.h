//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMAdNetworkAdapter_Protocol_h
#define GADMAdNetworkAdapter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADMAdNetworkAdapter <NSObject>

@required

/* class methods */
+ (id)adapterVersion;
+ (Class)networkExtrasClass;

/* required instance methods */
- (id)initWithGADMAdNetworkConnector:(id)connector;
- (void)getBannerWithSize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })size;
- (void)getInterstitial;
- (void)stopBeingDelegate;
- (void)presentInterstitialFromRootViewController:(id)controller;

@optional

/* optional instance methods */
- (void)getNativeAdWithAdTypes:(id)types options:(id)options;
- (_Bool)handlesUserClicks;
- (_Bool)handlesUserImpressions;
- (void)changeAdSizeTo:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })to;

@end

#endif /* GADMAdNetworkAdapter_Protocol_h */
