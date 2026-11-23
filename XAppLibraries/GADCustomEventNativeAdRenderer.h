//
#ifndef GADCustomEventNativeAdRenderer_h
#define GADCustomEventNativeAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"
#include "GADAdRenderingMetadata.h"
#include "GADCustomEventNativeAd-Protocol.h"
#include "GADCustomEventNativeAdDelegate-Protocol.h"
#include "GADServerTransaction.h"

@class NSDictionary, NSObject, NSString;

@interface GADCustomEventNativeAdRenderer : NSObject <GADCustomEventNativeAdDelegate, GADAdRendering> {
    /* instance variables */
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id /* block */ _renderCompletionHandler;
    id <GADCustomEventNativeAd> _customEventNative;
    struct atomic_flag { _Atomic _Bool _Value; } _adLoadCompleted;
    GADAdRenderingMetadata *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)processMediatedNativeAd:(id)ad withCustomEventNativeAd:(id)ad;
- (void)customEventNativeAd:(id)ad didReceiveMediatedUnifiedNativeAd:(id)ad;
- (void)customEventNativeAd:(id)ad didFailToLoadWithError:(id)error;

@end

#endif /* GADCustomEventNativeAdRenderer_h */
