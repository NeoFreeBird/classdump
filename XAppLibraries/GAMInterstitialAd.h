//
#ifndef GAMInterstitialAd_h
#define GAMInterstitialAd_h
@import Foundation;

#include "GADAppEventDelegate-Protocol.h"
#include "GADInterstitialAd.h"

@interface GAMInterstitialAd : GADInterstitialAd

@property (weak, nonatomic) id <GADAppEventDelegate> appEventDelegate;

/* class methods */
+ (void)loadWithAdManagerAdUnitID:(id)id request:(id)request completionHandler:(id /* block */)handler;

@end

#endif /* GAMInterstitialAd_h */
