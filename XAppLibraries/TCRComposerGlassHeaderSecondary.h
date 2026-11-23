//
#ifndef TCRComposerGlassHeaderSecondary_h
#define TCRComposerGlassHeaderSecondary_h
@import Foundation;

@class NSObject;

@interface TCRComposerGlassHeaderSecondary : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 kind;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)none;
+ (id)draftsShowingScheduledPosts:(_Bool)posts;
+ (id)promoteWithTitle:(id)title verifiedCredit:(_Bool)credit restricted:(_Bool)restricted accessibilityHint:(id)hint;
+ (id)editTimerView:(id)view;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TCRComposerGlassHeaderSecondary_h */
