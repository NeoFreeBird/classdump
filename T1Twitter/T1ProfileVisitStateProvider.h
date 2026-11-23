//
#ifndef T1ProfileVisitStateProvider_h
#define T1ProfileVisitStateProvider_h
@import Foundation;

@class NSObject;

@interface T1ProfileVisitStateProvider : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *latchedState;
}

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model;
- (id)init;

@end

#endif /* T1ProfileVisitStateProvider_h */
