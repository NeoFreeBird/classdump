//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GAMBannerView_h
#define GAMBannerView_h
@import Foundation;

#include "GADAdSizeDelegate-Protocol.h"
#include "GADAppEventDelegate-Protocol.h"
#include "GADBannerView.h"
#include "GADInternalBannerView.h"
#include "GADVideoController.h"

@class NSArray, NSString;

@interface GAMBannerView : GADBannerView

@property (readonly, nonatomic) GADInternalBannerView *bannerView;
@property (copy, nonatomic) NSString *adUnitID;
@property (weak, nonatomic) id <GADAppEventDelegate> appEventDelegate;
@property (weak, nonatomic) id <GADAdSizeDelegate> adSizeDelegate;
@property (copy, nonatomic) NSArray *validAdSizes;
@property (nonatomic) _Bool enableManualImpressions;
@property (readonly, nonatomic) GADVideoController *videoController;

/* class methods */
+ (Class)bannerViewClass;

/* instance methods */
- (struct CGSize { double x0; double x1; })effectiveContentSize;
- (void)setAdOptions:(id)options;
- (void)recordImpression;
- (void)resize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })resize;
- (void)adView:(id)view didReceiveAppEvent:(id)event withInfo:(id)info;

@end

#endif /* GAMBannerView_h */
