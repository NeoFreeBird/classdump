//
#ifndef TFSTwitterAPIXAuthChallengeCommand_h
#define TFSTwitterAPIXAuthChallengeCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;
@protocol TFSTwitterAuthTimelineTokenStorageDelegate;

@interface TFSTwitterAPIXAuthChallengeCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *ident;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *challengeResponse;
@property (copy, nonatomic) NSString *knownDeviceToken;
@property (retain, nonatomic) id <TFSTwitterAuthTimelineTokenStorageDelegate> authTokenStorage;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id authContext:(id)context identifier:(id)identifier userId:(id)id requestId:(id)id challengeResponse:(id)response knownDeviceToken:(id)token authTokenStorage:(id)storage source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (void)completeWithResponse:(id)response;
- (id)request;

@end

#endif /* TFSTwitterAPIXAuthChallengeCommand_h */
