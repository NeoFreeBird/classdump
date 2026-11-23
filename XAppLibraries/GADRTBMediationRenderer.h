//
#ifndef GADRTBMediationRenderer_h
#define GADRTBMediationRenderer_h
@import Foundation;

#include "GADAdContent.h"
#include "GADAdRendering-Protocol.h"
#include "GADEventContext.h"
#include "GADMediationAdEventDelegate-Protocol.h"
#include "GADServerTransaction.h"

@class NSDictionary, NSObject, NSString;

@interface GADRTBMediationRenderer : NSObject <GADAdRendering, GADMediationAdEventDelegate> {
    /* instance variables */
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id /* block */ _renderCompletionHandler;
    GADEventContext *_context;
    GADAdContent *_adContent;
    struct atomic_flag { _Atomic _Bool _Value; } _clickEventReceived;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)loadAd:(id)ad;
- (void)willPresentFullScreenView;
- (void)willDismissFullScreenView;
- (void)didDismissFullScreenView;
- (void)pingClickURLsWithoutDelegateCallbackOnce;
- (void)reportImpression;
- (void)reportClick;
- (void)didFailToPresentWithError:(id)error;

@end

#endif /* GADRTBMediationRenderer_h */
