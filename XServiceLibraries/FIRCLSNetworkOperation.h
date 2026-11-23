//
#ifndef FIRCLSNetworkOperation_h
#define FIRCLSNetworkOperation_h
@import Foundation;

#include "FIRCLSDataCollectionToken.h"
#include "FIRCLSFABAsyncOperation.h"

@class NSString;

@interface FIRCLSNetworkOperation : FIRCLSFABAsyncOperation

@property (readonly, nonatomic) NSString *googleAppID;
@property (readonly, nonatomic) FIRCLSDataCollectionToken *token;

/* instance methods */
- (id)initWithGoogleAppID:(id)id token:(id)token;
- (void)startWithToken:(id)token;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)url;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)url timeout:(double)timeout;
- (id)userAgentString;
- (id)localeIdentifier;

@end

#endif /* FIRCLSNetworkOperation_h */
