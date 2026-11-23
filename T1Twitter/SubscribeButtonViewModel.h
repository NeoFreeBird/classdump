//
#ifndef SubscribeButtonViewModel_h
#define SubscribeButtonViewModel_h
@import Foundation;

@class NSObject;

@interface SubscribeButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *sourceScribeContext;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *$__lazy_storage_$_actionHandler;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* SubscribeButtonViewModel_h */
