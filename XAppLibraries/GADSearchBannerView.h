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
