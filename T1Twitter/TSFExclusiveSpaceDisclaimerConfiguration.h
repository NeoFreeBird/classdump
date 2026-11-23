//
#ifndef TSFExclusiveSpaceDisclaimerConfiguration_h
#define TSFExclusiveSpaceDisclaimerConfiguration_h
@import Foundation;

@class NSObject;

@interface TSFExclusiveSpaceDisclaimerConfiguration : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *creator;
    NSNumber"16@0:8 *isSuperFollowingCreator;
    NSNumber"16@0:8 *textColor;
    NSNumber"16@0:8 *textFont;
    NSNumber"16@0:8 *borderWidth;
    NSNumber"16@0:8 *borderCornerRadius;
    NSNumber"16@0:8 *borderColor;
    NSNumber"16@0:8 *trailingIcon;
    NSNumber"16@0:8 *edgeInsets;
}

/* instance methods */
- (id)initWithStyle:(long long)style creator:(id)creator isSuperFollowingCreator:(_Bool)creator;
- (id)init;

@end

#endif /* TSFExclusiveSpaceDisclaimerConfiguration_h */
