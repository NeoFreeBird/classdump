//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFullScreenAdContent_h
#define GADFullScreenAdContent_h
@import Foundation;

#include "GADAdContent.h"
#include "GADAdPresenting-Protocol.h"
#include "GADAdReward.h"
#include "GADServerSideVerificationOptions.h"

@class NSDictionary;

@interface GADFullScreenAdContent : GADAdContent {
    /* instance variables */
    long long _consentIdentifier;
    long long _adFormat;
    id <GADAdPresenting> _adControllerCopy;
}

@property (readonly, nonatomic) id <GADAdPresenting> adController;
@property (retain, nonatomic) GADAdReward *reward;
@property (retain, nonatomic) NSDictionary *adMetadata;
@property (readonly, nonatomic) _Bool isConsentForm;
@property (copy, nonatomic) GADServerSideVerificationOptions *serverSideVerificationOptions;

/* instance methods */
- (id)initWithContext:(id)context adFormat:(long long)format adController:(id)controller;
- (id)initWithConsentFormIdentifier:(long long)identifier context:(id)context adController:(id)controller;
- (void)dealloc;
- (void)nilOutAdController;
- (_Bool)isOutdatedConsentForm;
- (long long)adFormat;
- (void)startDelayPageClose;
- (void)endDelayPageClose;

@end

#endif /* GADFullScreenAdContent_h */
