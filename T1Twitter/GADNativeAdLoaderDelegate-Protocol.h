//
#ifndef GADNativeAdLoaderDelegate_Protocol_h
#define GADNativeAdLoaderDelegate_Protocol_h
@import Foundation;

#include "GADAdLoaderDelegate-Protocol.h"

@protocol GADNativeAdLoaderDelegate <GADAdLoaderDelegate>

@required

/* required instance methods */
- (void)adLoader:(id)loader didReceiveNativeAd:(id)ad;
- (void)adLoader:(id)loader didReceiveNativeAd:(id)ad;

@optional

@end

#endif /* GADNativeAdLoaderDelegate_Protocol_h */
