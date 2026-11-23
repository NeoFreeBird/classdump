//
#ifndef SetupButtonViewModel_h
#define SetupButtonViewModel_h
@import Foundation;

@class NSObject;

@interface SetupButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* SetupButtonViewModel_h */
