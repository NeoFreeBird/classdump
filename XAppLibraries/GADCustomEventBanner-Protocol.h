//
#ifndef GADCustomEventBanner_Protocol_h
#define GADCustomEventBanner_Protocol_h
@import Foundation;

#include "GADCustomEventBannerDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GADCustomEventBanner <NSObject>

@required

@property (weak, nonatomic) id <GADCustomEventBannerDelegate> delegate;

/* required instance methods */
- (id)init;
- (void)requestBannerAd:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })ad parameter:(id)parameter label:(id)label request:(id)request;

@optional

@end

#endif /* GADCustomEventBanner_Protocol_h */
