//
#ifndef T1UserViewFollowButtonV2Provider_h
#define T1UserViewFollowButtonV2Provider_h
@import Foundation;

#include "T1UserViewActionControlProvider-Protocol.h"
#include "TUIFollowButtonV2Delegate-Protocol.h"

@class NSObject;

@interface T1UserViewFollowButtonV2Provider : NSObject <TUIFollowButtonV2Delegate, T1UserViewActionControlProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *measuringButton;
    NSNumber"16@0:8 *resizers;
}

@property (nonatomic, copy) id /* block */ needsLayoutBlock;

/* instance methods */
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;
- (id)initWithAccount:(id)account;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (double)widestActionControlWidthWithUser:(id)user;
- (_Bool)shouldHideActionControl:(id)control;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;
- (id)init;

@end

#endif /* T1UserViewFollowButtonV2Provider_h */
