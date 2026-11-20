//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADRewardedAd_h
#define GADRewardedAd_h
@import Foundation;

#include "GADAdMetadataDelegate-Protocol.h"
#include "GADAdMetadataProvider-Protocol.h"
#include "GADAdReward.h"
#include "GADFullScreenAd.h"
#include "GADFullScreenContentDelegate-Protocol.h"
#include "GADFullScreenPresentingAd-Protocol.h"
#include "GADResponseInfo.h"
#include "GADServerSideVerificationOptions.h"

@class NSDictionary, NSObject, NSString;

@interface GADRewardedAd : NSObject <GADAdMetadataProvider, GADFullScreenPresentingAd> {
    /* instance variables */
    GADFullScreenAd *_fullScreenAd;
}

@property (readonly, nonatomic) NSString *adUnitID;
@property (readonly, nonatomic) GADResponseInfo *responseInfo;
@property (readonly, nonatomic) GADAdReward *adReward;
@property (copy, nonatomic) GADServerSideVerificationOptions *serverSideVerificationOptions;
@property (weak, nonatomic) id <GADFullScreenContentDelegate> fullScreenContentDelegate;
@property (copy, nonatomic) id /* block */ paidEventHandler;
@property (readonly, nonatomic) NSDictionary *adMetadata;
@property (weak, nonatomic) id <GADAdMetadataDelegate> adMetadataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)loadWithAdUnitID:(id)id request:(id)request completionHandler:(id /* block */)handler;
+ (void)loadWithAdResponseString:(id)string completionHandler:(id /* block */)handler;
+ (void)internalLoadWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
+ (_Bool)isPreloadedAdAvailable:(id)available;
+ (id)preloadedAdWithAdUnitID:(id)id;

/* instance methods */
- (id)initWithFullScreenAd:(id)ad;
- (_Bool)canPresentFromRootViewController:(id)controller error:(id *)error;
- (void)presentFromRootViewController:(id)controller userDidEarnRewardHandler:(id /* block */)handler;
- (void)adWillPresentFullScreenContent:(id)content;
- (void)adWillDismissFullScreenContent:(id)content;
- (void)adDidDismissFullScreenContent:(id)content;
- (void)ad:(id)ad didFailToPresentFullScreenContentWithError:(id)error;
- (void)adDidRecordImpression:(id)impression;
- (void)adDidRecordClick:(id)click;
- (void)adMetadataDidChange:(id)change;

@end

#endif /* GADRewardedAd_h */
