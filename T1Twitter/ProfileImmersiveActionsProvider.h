//
#ifndef ProfileImmersiveActionsProvider_h
#define ProfileImmersiveActionsProvider_h
@import Foundation;

#include "TUIFollowButtonV2Delegate-Protocol.h"

@class NSObject;

@interface ProfileImmersiveActionsProvider : NSObject <TUIFollowButtonV2Delegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *shareHandler;
    NSNumber"16@0:8 *hasScribedShareImpression;
    NSNumber"16@0:8 *hasScribedFollowImpression;
}

/* instance methods */
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;
- (id)initWithAccount:(id)account profileViewModel:(id)model scribeContext:(id)context shareHandler:(id /* block */)handler;
- (id)makeActions;
- (void)shareButtonTapped:(id)tapped;
- (id)init;

@end

#endif /* ProfileImmersiveActionsProvider_h */
