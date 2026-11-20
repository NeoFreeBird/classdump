//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LoginChallengeWebAuthSession_h
#define T1LoginChallengeWebAuthSession_h
@import Foundation;

#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"
#include "T1AccountOAuthTokenPoller.h"
#include "T1LoginChallengeProtocol-Protocol.h"

@class ASWebAuthenticationSession, NSObject, NSString, TFNHUD, TFSTimer, UIViewController;

@interface T1LoginChallengeWebAuthSession : NSObject <ASWebAuthenticationPresentationContextProviding, T1LoginChallengeProtocol>

@property (readonly, nonatomic) ASWebAuthenticationSession *session;
@property (retain, nonatomic) T1AccountOAuthTokenPoller *tokenRequester;
@property (weak, nonatomic) UIViewController *presentationAnchor;
@property (retain, nonatomic) TFNHUD *hud;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long loginCause;
@property (retain, nonatomic) TFSTimer *sessionCanStartTimer;
@property (nonatomic) double sessionCheckerDelay;
@property (nonatomic) int sessionCanStartChecks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ didAddAccountBlock;

/* class methods */
+ (_Bool)isAuthenticationInProgress;

/* instance methods */
- (id)initWithRequestID:(id)id user:(id)user userID:(long long)id URL:(id)url loginCause:(long long)cause;
- (id)_t1_configureChallengeURL:(id)url;
- (id /* block */)_t1_authSessionCallback;
- (void)_t1_dismissAuthSessionWithAccount:(id)account;
- (void)_t1_startAuthSession;
- (void)startSessionCanStartTimer;
- (void)_t1_sessionCanStartCheck;
- (void)_t1_cancelSessionCanStartTimer;
- (void)_t1_cancelAuthSession;
- (void)showGenericErrorAndDismiss;
- (void)presentLoginChallengeFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
- (void)_t1_updateHUD:(id)hud;
- (void)_t1_dismissHUD:(_Bool)hud message:(id)message;

@end

#endif /* T1LoginChallengeWebAuthSession_h */
