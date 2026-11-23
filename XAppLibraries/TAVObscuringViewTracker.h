//
#ifndef TAVObscuringViewTracker_h
#define TAVObscuringViewTracker_h
@import Foundation;

@class NSObject;

@interface TAVObscuringViewTracker : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 obscuringViewsWeakSet;
}

/* class methods */
+ (id)sharedTracker;

/* instance methods */
- (void)trackObscuringView:(id)view;
- (void)untrackObscuringView:(id)view;
- (double)obscuredAreaOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (id)init;

@end

#endif /* TAVObscuringViewTracker_h */
