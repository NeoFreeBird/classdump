//
#ifndef T1UserRowPressFeedback_h
#define T1UserRowPressFeedback_h
@import Foundation;

@class NSObject;

@interface T1UserRowPressFeedback : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *pressEffects;
}

/* instance methods */
- (void)setPressed:(_Bool)pressed forView:(id)view;
- (id)init;

@end

#endif /* T1UserRowPressFeedback_h */
