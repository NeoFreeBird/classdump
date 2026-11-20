//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSearchBannerView_h
#define GADSearchBannerView_h
@import Foundation;

#include "GADAdSizeDelegate-Protocol.h"
#include "GADBannerView.h"

@interface GADSearchBannerView : GADBannerView

@property (weak, nonatomic) id <GADAdSizeDelegate> adSizeDelegate;

/* class methods */
+ (Class)bannerViewClass;

@end

#endif /* GADSearchBannerView_h */
