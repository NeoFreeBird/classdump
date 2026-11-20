//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UMPConsentInformation_h
#define UMPConsentInformation_h
@import Foundation;

#include "UMPConsentForm.h"
#include "UMPRequestParameters.h"

@class NSMutableSet, NSObject, NSString;

@interface UMPConsentInformation : NSObject {
    /* instance variables */
    NSMutableSet *_userDefaultsKeys;
    UMPRequestParameters *_lastRequestParameters;
    _Bool _retryConsentInfoUpdateInProgress;
    long long _requestHistoryStatus;
    _Bool _hasPublisherMisconfiguration;
    long long _status;
    NSString *_wallHTML;
    NSString *_baseURLString;
    _Bool _receivedValidResponse;
    UMPConsentForm *_cachedForm;
    _Bool _hasRequestedConsentInfoUpdate;
}

@property (readonly, nonatomic) long long consentStatus;
@property (readonly, nonatomic) _Bool canRequestAds;
@property (readonly, nonatomic) long long formStatus;
@property (readonly, nonatomic) long long privacyOptionsRequirementStatus;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)initializeUserDefaultsKeys;
- (_Bool)debugModeEnabled:(id)enabled;
- (id)infoUpdateRequestWithSignals:(id)signals error:(id *)error;
- (id)forwardedUserInfoKeys;
- (id)requestSignalsWithParameters:(id)parameters error:(id *)error;
- (void)requestConsentInfoUpdateWithParameters:(id)parameters completionHandler:(id /* block */)handler;
- (void)handleInfoUpdateResponseData:(id)data response:(id)response asyncCompletionHandler:(id /* block */)handler;
- (void)handleWriteAction:(id)action;
- (void)handleClearAction:(id)action;
- (void)setConsentStatusFromString:(id)string;
- (void)setPrivacyOptionsRequirementStatusFromString:(id)string;
- (void)maybeSetRequestHistoryStatus:(long long)status;
- (void)handleInfoUpdateResponseWithInfo:(id)info asyncCompletionHandler:(id /* block */)handler;
- (void)retryConsentInfoUpdateAsync;
- (id)wallHTML;
- (id)baseURLString;
- (_Bool)hasRequestedConsentInfoUpdate;
- (_Bool)receivedValidResponse;
- (void)revokeWallHTML;
- (void)reset;
- (id)cachedForm;
- (void)loadCachedFormAsync;

@end

#endif /* UMPConsentInformation_h */
