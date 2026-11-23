//
#ifndef PTVChatAccessManager_h
#define PTVChatAccessManager_h
@import Foundation;

#include "PTVAccessChat.h"
#include "PTVChatAccessManagerDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientWithCompletion.h"

@class NSObject, NSString, NSTimer;

@interface PTVChatAccessManager : NSObject {
    /* instance variables */
    PTVChatAccessManager *_weakSelf;
}

@property (retain, nonatomic) NSTimer *accessChatReloadTimer;
@property (nonatomic) _Bool canRetryNextChatAccessCall;
@property (retain, nonatomic) PTVWorkClient *accessChatWorkClient;
@property (retain, nonatomic) PTVWorkClientWithCompletion *accessChatWorkClientDelegate;
@property (weak, nonatomic) id <PTVChatAccessManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (retain, nonatomic) NSString *chatToken;
@property (readonly, nonatomic) PTVAccessChat *chatAccess;

/* instance methods */
- (void)dealloc;
- (id)initWithDelegate:(id)delegate loggedInUser:(id)user;
- (void)logEvent:(id)event;
- (void)fetchChatAccess:(long long)access canRetry:(_Bool)retry;
- (void)didFetchChatAccess:(id)access;
- (void)didFailToFetchChatAccessWithError:(id)error;
- (void)reloadChatAccess;
- (void)reloadChatAccessAfterDelayCanRetryOnFailure:(_Bool)failure;
- (void)cancelPendingReload;
- (void)reset;

@end

#endif /* PTVChatAccessManager_h */
