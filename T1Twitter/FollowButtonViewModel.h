//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FollowButtonViewModel_h
#define FollowButtonViewModel_h
@import Foundation;

#include "TUIFollowButtonV2Delegate-Protocol.h"

@class NSObject;

@interface FollowButtonViewModel : NSObject <TUIFollowButtonV2Delegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *style;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *sourceStatus;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *deviceFollowScribeContext;
    NSNumber"16@0:8 *hasScribedImpression;
    NSNumber"16@0:8 *deviceFollowHelper;
    NSNumber"16@0:8 *followButton;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (_Bool)followButton:(id)button shouldPerform:(long long)perform;
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;
- (id)init;

@end

#endif /* FollowButtonViewModel_h */
