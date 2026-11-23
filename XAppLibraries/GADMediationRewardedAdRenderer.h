//
#ifndef GADMediationRewardedAdRenderer_h
#define GADMediationRewardedAdRenderer_h
@import Foundation;

#include "GADAdPresenting-Protocol.h"
#include "GADAdRendering-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADEventContext.h"
#include "GADFullScreenAdContent.h"
#include "GADMediationAdapter-Protocol.h"
#include "GADMediationRewardedAdConfiguration.h"
#include "GADMediationRewardedAdEventDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol GADMediationRewardedAd;

@interface GADMediationRewardedAdRenderer : NSObject <GADAdPresenting, GADMediationRewardedAdEventDelegate, GADAdRendering> {
    /* instance variables */
    GADFullScreenAdContent *_fullScreenAdContent;
    id <GADMediationRewardedAd> _mediationRewardedAd;
    id /* block */ _renderCompletionHandler;
    GADMediationRewardedAdConfiguration *_mediatedConfiguration;
    GADEventContext *_context;
    NSDictionary *_adConfiguration;
    Class _adapterClass;
    id <GADMediationAdapter> _adapter;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)viewControllerForPresentingModalView;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;
- (void)rewardedAdDidLoad:(id)load adapter:(id)adapter;
- (void)rewardedAdDidFailToLoadWithError:(id)error;
- (void)didFailToPresentWithError:(id)error;
- (void)willPresentFullScreenView;
- (void)willDismissFullScreenView;
- (void)didDismissFullScreenView;
- (void)didRewardUser;
- (void)reportClick;
- (void)didStartVideo;
- (void)didEndVideo;
- (void)reportImpression;

@end

#endif /* GADMediationRewardedAdRenderer_h */
