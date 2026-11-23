//
#ifndef GADCustomEventInterstitial_Protocol_h
#define GADCustomEventInterstitial_Protocol_h
@import Foundation;

#include "GADCustomEventInterstitialDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GADCustomEventInterstitial <NSObject>

@required

@property (weak, nonatomic) id <GADCustomEventInterstitialDelegate> delegate;

/* required instance methods */
- (id)init;
- (void)requestInterstitialAdWithParameter:(id)parameter label:(id)label request:(id)request;
- (void)presentFromRootViewController:(id)controller;

@optional

@end

#endif /* GADCustomEventInterstitial_Protocol_h */
