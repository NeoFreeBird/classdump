//
#ifndef GADRTBMediationRewardBasedVideoAdRenderer_h
#define GADRTBMediationRewardBasedVideoAdRenderer_h
@import Foundation;

#include "GADAdPresenting-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADMediationAdapter-Protocol.h"
#include "GADMediationRewardedAdConfiguration.h"
#include "GADMediationRewardedAdEventDelegate-Protocol.h"
#include "GADRTBMediationRenderer.h"

@class NSString;
@protocol GADMediationRewardedAd;

@interface GADRTBMediationRewardBasedVideoAdRenderer : GADRTBMediationRenderer <GADAdPresenting, GADMediationRewardedAdEventDelegate> {
    /* instance variables */
    id <GADMediationAdapter> _loadingAdapter;
    id <GADMediationRewardedAd> _mediatedAd;
    GADMediationRewardedAdConfiguration *_mediatedConfiguration;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (id)adEventDelegateForAdapter:(id)adapter mediatedAd:(id)ad;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;
- (void)didRewardUser;
- (void)didStartVideo;
- (void)didEndVideo;
- (void)didFailToPresentWithError:(id)error;

@end

#endif /* GADRTBMediationRewardBasedVideoAdRenderer_h */
