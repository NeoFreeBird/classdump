//
#ifndef MoreActionsButtonViewModel_h
#define MoreActionsButtonViewModel_h
@import Foundation;

@class NSObject;

@interface MoreActionsButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *hostsMenu;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *barItem;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location profileViewModel:(id)model;
- (id)init;

@end

#endif /* MoreActionsButtonViewModel_h */
