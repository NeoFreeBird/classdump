//
#ifndef GAMBannerAdLoaderDelegate_Protocol_h
#define GAMBannerAdLoaderDelegate_Protocol_h
@import Foundation;

#include "GADAdLoaderDelegate-Protocol.h"

@protocol GAMBannerAdLoaderDelegate <GADAdLoaderDelegate>

@required

/* required instance methods */
- (id)validBannerSizesForAdLoader:(id)loader;
- (void)adLoader:(id)loader didReceiveGAMBannerView:(id)view;

@optional

@end

#endif /* GAMBannerAdLoaderDelegate_Protocol_h */
