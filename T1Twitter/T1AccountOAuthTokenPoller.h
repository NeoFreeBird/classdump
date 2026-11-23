//
#ifndef T1AccountOAuthTokenPoller_h
#define T1AccountOAuthTokenPoller_h
@import Foundation;

#include "TFSTwitterAuthTimelineTokenStorageDelegate-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFSTimer;

@interface T1AccountOAuthTokenPoller : NSObject <TFSTwitterAuthTimelineTokenStorageDelegate>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) NSString *requestID;
@property (retain, nonatomic) TFSTimer *pollingTimer;
@property (nonatomic) double pollingDelay;
@property (nonatomic) int numTries;
@property (copy, nonatomic) id /* block */ didCompletePolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequestID:(id)id userID:(long long)id;
- (void)startPolling;
- (void)cancelPolling;
- (void)_t1_doPolling;
- (void)_t1_continuePolling;
- (void)_t1_cancelPollingTimer;
- (void)_t1_pollingDidCompleteWithAccount:(id)account error:(long long)error;
- (id /* block */)_t1_loginChallengeResponseBlock;
- (void)setAuthTimelineToken:(id)token;
- (id)authTimelineToken;

@end

#endif /* T1AccountOAuthTokenPoller_h */
