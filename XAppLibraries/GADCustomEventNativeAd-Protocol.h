//
#ifndef GADCustomEventNativeAd_Protocol_h
#define GADCustomEventNativeAd_Protocol_h
@import Foundation;

#include "GADCustomEventNativeAdDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GADCustomEventNativeAd <NSObject>

@required

@property (weak, nonatomic) id <GADCustomEventNativeAdDelegate> delegate;

/* required instance methods */
- (id)init;
- (void)requestNativeAdWithParameter:(id)parameter request:(id)request adTypes:(id)types options:(id)options rootViewController:(id)controller;
- (_Bool)handlesUserClicks;
- (_Bool)handlesUserImpressions;

@optional

@end

#endif /* GADCustomEventNativeAd_Protocol_h */
