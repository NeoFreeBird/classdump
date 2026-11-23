//
#ifndef CloseButtonViewModel_h
#define CloseButtonViewModel_h
@import Foundation;

@class NSObject;

@interface CloseButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *actionHost;
    NSNumber"16@0:8 *barItem;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (void)didTap:(id)tap;
- (void)didTapNavigationBarItem;
- (id)init;

@end

#endif /* CloseButtonViewModel_h */
