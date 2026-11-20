//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserViewTeamsInvitationControlProvider_h
#define T1UserViewTeamsInvitationControlProvider_h
@import Foundation;

#include "T1UserViewActionControlProvider-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount;

@interface T1UserViewTeamsInvitationControlProvider : NSObject <T1UserViewActionControlProvider>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) id /* block */ needsLayoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (_Bool)shouldHideActionControl:(id)control;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;

@end

#endif /* T1UserViewTeamsInvitationControlProvider_h */
