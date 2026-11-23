//
#ifndef GADRTBMediationInterstitialAdRenderer_h
#define GADRTBMediationInterstitialAdRenderer_h
@import Foundation;

#include "GADAdPresenting-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADMediationAdapter-Protocol.h"
#include "GADMediationInterstitialAdConfiguration.h"
#include "GADMediationInterstitialAdEventDelegate-Protocol.h"
#include "GADRTBMediationRenderer.h"

@class NSString;
@protocol GADMediationInterstitialAd;

@interface GADRTBMediationInterstitialAdRenderer : GADRTBMediationRenderer <GADAdPresenting, GADMediationInterstitialAdEventDelegate> {
    /* instance variables */
    id <GADMediationAdapter> _loadingAdapter;
    id <GADMediationInterstitialAd> _mediatedAd;
    GADMediationInterstitialAdConfiguration *_mediatedConfiguration;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (id)adEventDelegateForAdapter:(id)adapter completedLoadWithAd:(id)ad;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;
- (void)didFailToPresentWithError:(id)error;

@end

#endif /* GADRTBMediationInterstitialAdRenderer_h */
