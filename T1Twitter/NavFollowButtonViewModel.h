//
#ifndef NavFollowButtonViewModel_h
#define NavFollowButtonViewModel_h
@import Foundation;

#include "TUIFollowButtonV2Delegate-Protocol.h"

@class NSObject;

@interface NavFollowButtonViewModel : NSObject <TUIFollowButtonV2Delegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *hasScribedImpression;
    NSNumber"16@0:8 *followButton;
    NSNumber"16@0:8 *followBarButtonItem;
    NSNumber"16@0:8 *onNavigationBarItemChange;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location account:(id)account profileViewModel:(id)model scribeContext:(id)context;
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;
- (id)init;

@end

#endif /* NavFollowButtonViewModel_h */
