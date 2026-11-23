//
#ifndef TFSTwitterAPIOnboardingGetTaskRequest_h
#define TFSTwitterAPIOnboardingGetTaskRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOnboardingGetTaskRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)configuration;

/* instance methods */
- (id)initWithFlowName:(id)name flowData:(id)data endPointPath:(id)path apiVersion:(long long)version knownDeviceToken:(id)token simCountryCode:(id)code subtaskVersions:(id)versions componentVersions:(id)versions headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder;
- (id)initWithFlowToken:(id)token flowData:(id)data endPointPath:(id)path apiVersion:(long long)version knownDeviceToken:(id)token simCountryCode:(id)code subtaskVersions:(id)versions componentVersions:(id)versions headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder;
- (id)initWithFlowName:(id)name orToken:(id)token flowData:(id)data endPointPath:(id)path apiVersion:(long long)version knownDeviceToken:(id)token simCountryCode:(id)code subtaskVersions:(id)versions componentVersions:(id)versions headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder;
- (id)initWithFlowToken:(id)token endPointPath:(id)path subtaskStateDictionaries:(id)dictionaries terminationReason:(id)reason headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOnboardingGetTaskRequest_h */
