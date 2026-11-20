//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAppOpenAd_h
#define GADAppOpenAd_h
@import Foundation;

#include "GADFullScreenAd.h"
#include "GADFullScreenContentDelegate-Protocol.h"
#include "GADFullScreenPresentingAd-Protocol.h"
#include "GADResponseInfo.h"

@class NSObject, NSString;

@interface GADAppOpenAd : NSObject <GADFullScreenContentDelegate, GADFullScreenPresentingAd> {
    /* instance variables */
    GADFullScreenAd *_fullScreenAd;
}

@property (weak, nonatomic) id <GADFullScreenContentDelegate> fullScreenContentDelegate;
@property (readonly, nonatomic) NSString *adUnitID;
@property (readonly, nonatomic) GADResponseInfo *responseInfo;
@property (copy, nonatomic) id /* block */ paidEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)internalLoadWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
+ (void)loadWithAdUnitID:(id)id request:(id)request completionHandler:(id /* block */)handler;
+ (void)loadWithAdResponseString:(id)string completionHandler:(id /* block */)handler;
+ (_Bool)isPreloadedAdAvailable:(id)available;
+ (id)preloadedAdWithAdUnitID:(id)id;

/* instance methods */
- (id)initWithFullScreenAd:(id)ad;
- (_Bool)canPresentFromRootViewController:(id)controller error:(id *)error;
- (void)presentFromRootViewController:(id)controller;
- (void)ad:(id)ad didFailToPresentFullScreenContentWithError:(id)error;
- (void)adWillPresentFullScreenContent:(id)content;
- (void)adWillDismissFullScreenContent:(id)content;
- (void)adDidDismissFullScreenContent:(id)content;
- (void)adDidRecordImpression:(id)impression;
- (void)adDidRecordClick:(id)click;

@end

#endif /* GADAppOpenAd_h */
