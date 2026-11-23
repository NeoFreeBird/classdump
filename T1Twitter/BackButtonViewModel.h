//
#ifndef BackButtonViewModel_h
#define BackButtonViewModel_h
@import Foundation;

@class NSObject;

@interface BackButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *actionHost;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* BackButtonViewModel_h */
