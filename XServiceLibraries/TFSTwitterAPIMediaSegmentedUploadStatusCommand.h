//
#ifndef TFSTwitterAPIMediaSegmentedUploadStatusCommand_h
#define TFSTwitterAPIMediaSegmentedUploadStatusCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPIMediaSegmentedUploadStatusCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *mediaID;
@property (retain, nonatomic) NSString *scribeComponent;
@property (retain, nonatomic) NSString *scribeElement;
@property (nonatomic) unsigned long long permittedRequestRetryCount;
@property (nonatomic) double requestRetryDelay;
@property (nonatomic) unsigned long long totalRequestRetryCount;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id mediaID:(id)id scribeComponent:(id)component scribeElement:(id)element permittedRequestRetryCount:(unsigned long long)count requestRetryDelay:(double)delay source:(unsigned long long)source networkTransactionMetrics:(id)metrics responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (id)APICommandErrorFromAPIResponse:(id)apiresponse;
- (void)scribeCommandResponse:(id)response to:(id)to;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (void)APIRequest:(id)apirequest requestOperation:(id)operation didCompleteWithResponse:(id)response;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;
- (id)_errorWithResponse:(id)response code:(long long)code;

@end

#endif /* TFSTwitterAPIMediaSegmentedUploadStatusCommand_h */
