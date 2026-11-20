//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomNativeAdLoaderDelegate_Protocol_h
#define GADCustomNativeAdLoaderDelegate_Protocol_h
@import Foundation;

#include "GADAdLoaderDelegate-Protocol.h"

@protocol GADCustomNativeAdLoaderDelegate <GADAdLoaderDelegate>

@required

/* required instance methods */
- (id)customNativeAdFormatIDsForAdLoader:(id)loader;
- (void)adLoader:(id)loader didReceiveCustomNativeAd:(id)ad;

@optional

@end

#endif /* GADCustomNativeAdLoaderDelegate_Protocol_h */
