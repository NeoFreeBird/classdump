//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFullScreenAd_h
#define GADFullScreenAd_h
@import Foundation;

#include "GADAdMetadataDelegate-Protocol.h"
#include "GADAdMetadataProvider-Protocol.h"
#include "GADAdReward.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADFullScreenAdContent.h"
#include "GADFullScreenContentDelegate-Protocol.h"
#include "GADFullScreenPresentingAd-Protocol.h"
#include "GADObserverCollection.h"
#include "GADResponseInfo.h"
#include "GADServerSideVerificationOptions.h"

@class NSDictionary, NSObject, NSString;
@protocol GADFullScreenAppEventDelegate;

@interface GADFullScreenAd : NSObject <GADAdMetadataProvider, GADFullScreenPresentingAd, GADEventContextSource> {
    /* instance variables */
    GADFullScreenAdContent *_fullScreenAdContent;
    GADObserverCollection *_intermissionObservers;
    GADObserverCollection *_rewardObservers;
    GADObserverCollection *_observers;
    id <GADFullScreenContentDelegate> _strongWhilePresentingDelegate;
    _Bool _hasBeenUsed;
    _Bool _willPresentCalled;
    _Bool _didUnloadMRAID;
}

@property (readonly, nonatomic) NSString *adUnitID;
@property (readonly, nonatomic) GADResponseInfo *responseInfo;
@property (readonly, nonatomic) GADAdReward *adReward;
@property (copy) id /* block */ paidEventHandler;
@property (weak, nonatomic) id <GADFullScreenContentDelegate> fullScreenContentDelegate;
@property (weak, nonatomic) id <GADFullScreenAppEventDelegate> fullScreenAppEventDelegate;
@property (copy) GADServerSideVerificationOptions *serverSideVerificationOptions;
@property (nonatomic) _Bool blockStackedPresentation;
@property (readonly, nonatomic) NSDictionary *adMetadata;
@property (weak, nonatomic) id <GADAdMetadataDelegate> adMetadataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GADEventContext *context;

/* class methods */
+ (void)loadWithTargeting:(id)targeting completionHandler:(id /* block */)handler;
+ (void)updateTargeting:(id)targeting completionHandler:(id /* block */)handler;
+ (void)asyncLoadWithTargeting:(id)targeting completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithInterstitialAd:(id)ad adUnitID:(id)id responseInfo:(id)info;
- (_Bool)canPresentFromRootViewController:(id)controller error:(id *)error;
- (void)presentFromRootViewController:(id)controller userDidEarnRewardHandler:(id /* block */)handler;
- (void)adPresentationDidFailWithError:(id)error;
- (void)attachCallbackObservers;
- (void)attachRewardObserversWithEarnRewardHandler:(id /* block */)handler;
- (void)adWillDismissFullScreenContent;
- (void)adDidDismissFullScreenContent;
- (void)attachIntermissionEventObservers;

@end

#endif /* GADFullScreenAd_h */
