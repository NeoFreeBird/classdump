//
#ifndef TUCLoadingSpinnerConfiguration_h
#define TUCLoadingSpinnerConfiguration_h
@import Foundation;

@class NSObject;

@interface TUCLoadingSpinnerConfiguration : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 backgroundColor;
    @40@0:8:16@24@32 foregroundColor;
    @40@0:8:16@24@32 lineWidth;
    @40@0:8:16@24@32 arcDrawDuration;
    @40@0:8:16@24@32 rotationCycleDuration;
    @40@0:8:16@24@32 staticArcLength;
    @40@0:8:16@24@32 maximumArcLength;
    @40@0:8:16@24@32 minimumArcLength;
}

/* class methods */
+ (id)defaultConfiguration;

/* instance methods */
- (id)init;

@end

#endif /* TUCLoadingSpinnerConfiguration_h */
