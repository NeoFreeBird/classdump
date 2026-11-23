//
#ifndef TFSAPIResponse_h
#define TFSAPIResponse_h
@import Foundation;

#include "TNLResponse.h"

@class NSArray, NSError, NSString;

@interface TFSAPIResponse : TNLResponse

@property (retain) NSError *internalAuthenticationError;
@property (readonly, nonatomic) id model;
@property (readonly, copy, nonatomic) NSArray *APIErrors;
@property (readonly, nonatomic) NSError *RESTError;
@property (readonly, nonatomic) NSError *parseError;
@property (readonly, nonatomic) NSError *authenticationError;
@property (readonly, nonatomic) NSError *APIError;
@property (readonly, nonatomic) NSError *anyError;
@property (readonly, nonatomic) NSString *traceID;

/* class methods */
+ (_Bool)HTTPStatusCodeShouldYieldRESTError:(long long)resterror;

/* instance methods */
- (void)prepare;
- (void)finalizeAuthenticationError:(id)error;
- (id)modelWithParseError:(out id *)error APIErrors:(out id *)apierrors;

@end

#endif /* TFSAPIResponse_h */
