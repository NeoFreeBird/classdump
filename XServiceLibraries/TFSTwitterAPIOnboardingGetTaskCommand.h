//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIOnboardingGetTaskCommand_h
#define TFSTwitterAPIOnboardingGetTaskCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"
#include "TFSTwitterOnboardingFlowSpec.h"

@class NSArray, NSDictionary, NSString;
@protocol TFSTwitterAuthTimelineTokenStorageDelegate;

@interface TFSTwitterAPIOnboardingGetTaskCommand : TFSTwitterAPICommandWithResponseModelBuilder {
    /* instance variables */
    long long _apiVersion;
    NSString *_knownDeviceToken;
    NSString *_simCountryCode;
    NSString *_terminationReason;
    TFSTwitterOnboardingFlowSpec *_flowSpec;
    NSString *_flowToken;
    NSArray *_subtaskStateDictionaries;
    NSDictionary *_subtaskVersions;
    NSDictionary *_componentVersions;
    NSDictionary *_headerFields;
    id <TFSTwitterAuthTimelineTokenStorageDelegate> _authTokenStorage;
    NSString *_endPointPath;
}

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id flowSpec:(id)spec apiVersion:(long long)version knownDeviceToken:(id)token authTokenStorage:(id)storage simCountryCode:(id)code subtaskVersions:(id)versions componentVersions:(id)versions headerFields:(id)fields source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id flowToken:(id)token endPointPath:(id)path authTokenStorage:(id)storage subtaskStateDictionaries:(id)dictionaries terminationReason:(id)reason headerFields:(id)fields source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)completeWithResponse:(id)response;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;

@end

#endif /* TFSTwitterAPIOnboardingGetTaskCommand_h */
