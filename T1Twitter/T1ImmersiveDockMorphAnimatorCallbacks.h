//
#ifndef T1ImmersiveDockMorphAnimatorCallbacks_h
#define T1ImmersiveDockMorphAnimatorCallbacks_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveDockMorphAnimatorCallbacks : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *triggerBarSlideUp;
    NSNumber"16@0:8 *fallbackDismiss;
    NSNumber"16@0:8 *dismissComplete;
}

/* instance methods */
- (id)initWithTriggerBarSlideUp:(id /* block */)up fallbackDismiss:(id /* block */)dismiss dismissComplete:(id /* block */)complete;
- (id)init;

@end

#endif /* T1ImmersiveDockMorphAnimatorCallbacks_h */
