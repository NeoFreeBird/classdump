//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBadgesImageViewModel_h
#define TFNBadgesImageViewModel_h
@import Foundation;

@class NSObject;

@interface TFNBadgesImageViewModel : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 badges;
    B24@0:8@"NSString"16 onDark;
    B24@0:8@"NSString"16 badgeCustomSize;
}

/* instance methods */
- (id)initWithBadges:(id)badges;
- (id)initWithBadges:(id)badges onDark:(_Bool)dark;
- (id)initWithBadges:(id)badges onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (id)init;

@end

#endif /* TFNBadgesImageViewModel_h */
