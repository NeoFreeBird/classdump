//
#ifndef T1LiveEventCardViewTheme_h
#define T1LiveEventCardViewTheme_h
@import Foundation;

@class NSObject;

@interface T1LiveEventCardViewTheme : NSObject

/* class methods */
+ (id)themeForCardContext:(id)context;
+ (id)_t1_cardTheme;
+ (id)_t1_guideHeroTheme;

/* instance methods */
- (id)init;

@end

#endif /* T1LiveEventCardViewTheme_h */
