//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediationNativeAdRenderer_h
#define GADMediationNativeAdRenderer_h
@import Foundation;

#include "GADAdRenderingMetadata.h"
#include "GADInternalNativeAd.h"
#include "GADMAdNetworkConnector-Protocol.h"
#include "GADMediatedAdRenderer.h"

@class NSString;

@interface GADMediationNativeAdRenderer : GADMediatedAdRenderer <GADMAdNetworkConnector> {
    /* instance variables */
    id /* block */ _renderCompletionHandler;
    GADInternalNativeAd *_internalNativeAd;
    struct atomic_flag { _Atomic _Bool _Value; } _adLoadCompleted;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (id)viewControllerForPresentingModalView;
- (void)didReceiveNativeAd:(id)ad fromAdapter:(id)adapter;
- (void)adapter:(id)adapter didReceiveMediatedUnifiedNativeAd:(id)ad;
- (void)adapter:(id)adapter didFailAd:(id)ad;

@end

#endif /* GADMediationNativeAdRenderer_h */
