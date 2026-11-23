//
#ifndef T1ProfileWorkExperienceSection_h
#define T1ProfileWorkExperienceSection_h
@import Foundation;

@class NSObject, UIFont, UIView, UIViewController;

@interface T1ProfileWorkExperienceSection : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *section;
}

@property (nonatomic, weak) UIViewController *presenter;
@property (nonatomic, copy) id /* block */ heightDidChange;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) _Bool wantsHeightAppliedAsIs;
@property (nonatomic, readonly) double appearanceProgress;
@property (nonatomic, readonly) UIFont *firstAndLastLineFont;
@property (nonatomic, readonly) long long userID;

/* instance methods */
- (id)initWithAccount:(id)account userID:(long long)id;
- (void)loadIfNeeded;
- (void)fontSizeDidChange;
- (void)hostDidAppear;
- (id)init;

@end

#endif /* T1ProfileWorkExperienceSection_h */
