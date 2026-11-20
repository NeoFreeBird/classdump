//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADRTBMediationBannerAdRenderer_h
#define GADRTBMediationBannerAdRenderer_h
@import Foundation;

#include "GADAdRenderingMetadata.h"
#include "GADMediationAdapter-Protocol.h"
#include "GADMediationBannerAdConfiguration.h"
#include "GADMediationBannerAdEventDelegate-Protocol.h"
#include "GADRTBMediationRenderer.h"

@class NSString;

@interface GADRTBMediationBannerAdRenderer : GADRTBMediationRenderer <GADMediationBannerAdEventDelegate> {
    /* instance variables */
    id <GADMediationAdapter> _loadingAdapter;
    GADMediationBannerAdConfiguration *_mediationConfiguration;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)adapter:(id)adapter completedLoadWithMediatedAd:(id)ad adConfiguration:(id)configuration transaction:(id)transaction error:(id)error;
- (void)willPresentFullScreenView;
- (void)didFailToPresentWithError:(id)error;

@end

#endif /* GADRTBMediationBannerAdRenderer_h */
