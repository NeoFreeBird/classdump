//
#ifndef T1TeamsInvitationControl_h
#define T1TeamsInvitationControl_h
@import Foundation;

#include "T1UserViewActionControl-Protocol.h"
#include "TFNBinaryChoiceDelegate-Protocol.h"

@class NSString, TFNBinaryChoiceControl, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1TeamsInvitationControl : TFNBinaryChoiceControl <TFNBinaryChoiceDelegate, T1UserViewActionControl>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) long long invitedUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didAccept:(id)accept event:(id)event;
- (void)didDecline:(id)decline event:(id)event;

@end

#endif /* T1TeamsInvitationControl_h */
