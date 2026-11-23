//
#ifndef T1MediaHeaderImageCardViewModel_h
#define T1MediaHeaderImageCardViewModel_h
@import Foundation;

@class NSObject;

@interface T1MediaHeaderImageCardViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *mediaAspectRatio;
    NSNumber"16@0:8 *backgroundImage;
}

/* instance methods */
- (id)initWithBackgroundImage:(id)image imageAspectRatio:(double)ratio;
- (id)init;

@end

#endif /* T1MediaHeaderImageCardViewModel_h */
