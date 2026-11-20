//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAEAbstractColorPalette_h
#define TAEAbstractColorPalette_h
@import Foundation;

#include "TAEColorLoader.h"

@class NSObject;

@interface TAEAbstractColorPalette : NSObject {
    /* instance variables */
    TAEColorLoader *_colorLoader;
}

/* instance methods */
- (void)reloadColorCache;
- (id)dynamicColorWithIdentifier:(id)identifier;
- (id)_whiteColor;
- (id)_blackColor;
- (id)_textColor;
- (id)_gray1100Color;
- (id)_gray1000Color;
- (id)_gray900Color;
- (id)_gray800Color;
- (id)_gray700Color;
- (id)_gray600Color;
- (id)_gray500Color;
- (id)_gray400Color;
- (id)_gray300Color;
- (id)_gray200Color;
- (id)_gray100Color;
- (id)_gray50Color;
- (id)_gray0Color;
- (id)_blue1000Color;
- (id)_blue900Color;
- (id)_blue700Color;
- (id)_blue600Color;
- (id)_blue500Color;
- (id)_blue300Color;
- (id)_blue200Color;
- (id)_blue100Color;
- (id)_blue50Color;
- (id)_blue0Color;
- (id)_yellow900Color;
- (id)_yellow800Color;
- (id)_yellow700Color;
- (id)_yellow600Color;
- (id)_yellow500Color;
- (id)_yellow300Color;
- (id)_yellow400Color;
- (id)_yellow200Color;
- (id)_yellow0Color;
- (id)_green900Color;
- (id)_green700Color;
- (id)_green600Color;
- (id)_green500Color;
- (id)_green300Color;
- (id)_green200Color;
- (id)_green100Color;
- (id)_green50Color;
- (id)_green0Color;
- (id)_neonGreenColor;
- (id)_magenta900Color;
- (id)_magenta700Color;
- (id)_magenta600Color;
- (id)_magenta500Color;
- (id)_magenta300Color;
- (id)_magenta200Color;
- (id)_magenta0Color;
- (id)_purple900Color;
- (id)_purple800Color;
- (id)_purple700Color;
- (id)_purple600Color;
- (id)_purple500Color;
- (id)_purple300Color;
- (id)_purple200Color;
- (id)_purple0Color;
- (id)_purple100Color;
- (id)_purple50Color;
- (id)_red900Color;
- (id)_red700Color;
- (id)_red600Color;
- (id)_red500Color;
- (id)_red300Color;
- (id)_red200Color;
- (id)_red100Color;
- (id)_red50Color;
- (id)_red0Color;
- (id)_teal900Color;
- (id)_teal700Color;
- (id)_teal600Color;
- (id)_teal500Color;
- (id)_teal300Color;
- (id)_teal200Color;
- (id)_teal0Color;
- (id)_orange900Color;
- (id)_orange700Color;
- (id)_orange600Color;
- (id)_orange500Color;
- (id)_orange300Color;
- (id)_orange200Color;
- (id)_orange50Color;
- (id)_orange0Color;
- (id)_plum900Color;
- (id)_plum700Color;
- (id)_plum600Color;
- (id)_plum500Color;
- (id)_plum300Color;
- (id)_plum200Color;
- (id)_plum100Color;
- (id)_plum50Color;
- (id)_plum0Color;
- (id)_superFollow_Plum900_DefaultColor;
- (id)_superFollow_Plum100_DefaultColor;

@end

#endif /* TAEAbstractColorPalette_h */
