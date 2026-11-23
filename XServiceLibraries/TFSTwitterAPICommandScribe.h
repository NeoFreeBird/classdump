//
#ifndef TFSTwitterAPICommandScribe_h
#define TFSTwitterAPICommandScribe_h
@import Foundation;

#include "TFSHTTPRequestScribeMethods-Protocol.h"
#include "TFSTwitterAPICommandConfiguration-Protocol.h"
#include "TFSTwitterLegacyScribeIntegration-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterAPICommandScribe : NSObject <TFSHTTPRequestScribeMethods>

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeIntegration> scribeIntegration;
@property (readonly, nonatomic) id <TFSTwitterAPICommandConfiguration> configuration;

/* class methods */
+ (_Bool)internal_shouldScribeSampleWithSampleSize:(long long)size;
+ (_Bool)internal_shouldScribeAttemptSampleWithSampleSize:(long long)size;
+ (_Bool)internal_shouldScribeSampleWithSampleSize:(long long)size maximalDogfoodScribingForRequest:(id)request;

/* instance methods */
- (void)logWithAttempt:(id)attempt for:(id)_for disposition:(long long)disposition retryCount:(unsigned long long)count;
- (void)logWithAuthDependencyError:(id)error for:(id)_for;
- (void)logRedirectFrom:(id)from to:(id)to requestOperationId:(long long)id;
- (id)initWithAccountID:(id)id scribeIntegration:(id)integration configuration:(id)configuration;
- (void)logTFSTwitterAPIResponse:(id)apiresponse request:(id)request;
- (void)logClientNetworkRequestAttempt:(id)attempt;
- (void)logTFSTwitterAPIRedirect:(id)apiredirect toRequest:(id)request requestOperationId:(id)id;
- (void)logTFSTwitterAPIAuthDependencyError:(id)error request:(id)request;
- (void)logTFSTwitterAPIGuestAuthError:(id)error request:(id)request willRetry:(_Bool)retry retryCount:(unsigned long long)count;
- (void)logTransactionMetrics:(id)metrics forResponse:(id)response;
- (void)logClientNetworkOperationWithType:(long long)type status:(long long)status duration:(double)duration retryCount:(unsigned long long)count attempts:(id)attempts;
- (void)logTFSTwitterAPIDisallowedEndpointURL:(id)url;
- (id)internal_accountScribe;
- (id)internal_guestScribe;
- (id)legacyScribeForResponse:(id)response;
- (id)internal_scribeForStatusCode:(long long)code;

@end

#endif /* TFSTwitterAPICommandScribe_h */
