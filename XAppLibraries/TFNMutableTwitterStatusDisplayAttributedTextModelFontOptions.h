//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMutableTwitterStatusDisplayAttributedTextModelFontOptions_h
#define TFNMutableTwitterStatusDisplayAttributedTextModelFontOptions_h
@import Foundation;

#include "TFNTwitterStatusDisplayAttributedTextModelFontOptions.h"

@class UIColor, UIFont;

@interface TFNMutableTwitterStatusDisplayAttributedTextModelFontOptions : TFNTwitterStatusDisplayAttributedTextModelFontOptions

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *boldFont;
@property (nonatomic) double kerning;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double emptyLineMaxHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (retain, nonatomic) UIColor *suffixTokenTextColor;
@property (nonatomic) _Bool darkBackground;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNMutableTwitterStatusDisplayAttributedTextModelFontOptions_h */
