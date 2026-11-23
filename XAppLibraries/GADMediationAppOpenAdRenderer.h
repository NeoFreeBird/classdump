//
#ifndef GADMediationAppOpenAdRenderer_h
#define GADMediationAppOpenAdRenderer_h
@import Foundation;

#include "GADAdPresenting-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADMediationAdapter-Protocol.h"
#include "GADMediationAppOpenAdConfiguration.h"
#include "GADMediationAppOpenAdEventDelegate-Protocol.h"
#include "GADRTBMediationRenderer.h"

@class NSString;
@protocol GADMediationAppOpenAd;

@interface GADMediationAppOpenAdRenderer : GADRTBMediationRenderer <GADAdPresenting, GADMediationAppOpenAdEventDelegate> {
    /* instance variables */
    id <GADMediationAppOpenAd> _mediationAppOpenAd;
    GADMediationAppOpenAdConfiguration *_mediatedConfiguration;
    id <GADMediationAdapter> _adapter;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;
- (void)appOpenAdDidLoad:(id)load adapter:(id)adapter;
- (void)appOpenAdDidFailToLoadWithError:(id)error;
- (void)didFailToPresentWithError:(id)error;

@end

#endif /* GADMediationAppOpenAdRenderer_h */
