//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomEventNativeAdDelegate_Protocol_h
#define GADCustomEventNativeAdDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADCustomEventNativeAdDelegate <NSObject>

@required

/* required instance methods */
- (void)customEventNativeAd:(id)ad didFailToLoadWithError:(id)error;
- (void)customEventNativeAd:(id)ad didReceiveMediatedUnifiedNativeAd:(id)ad;

@optional

@end

#endif /* GADCustomEventNativeAdDelegate_Protocol_h */
