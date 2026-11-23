//
#ifndef TFNTwitterStatusDisplayAttributedTextModelFontOptions_h
#define TFNTwitterStatusDisplayAttributedTextModelFontOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSObject, UIColor, UIFont;

@interface TFNTwitterStatusDisplayAttributedTextModelFontOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) UIFont *boldFont;
@property (readonly, nonatomic) double kerning;
@property (readonly, nonatomic) double lineHeight;
@property (readonly, nonatomic) double lineSpacing;
@property (readonly, nonatomic) double emptyLineMaxHeight;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *linkTextColor;
@property (readonly, nonatomic) UIColor *suffixTokenTextColor;
@property (readonly, nonatomic) _Bool darkBackground;

/* instance methods */
- (id)init;
- (id)initWithAttributedTextModelFontOptions:(id)options;
- (id)initWithFont:(id)font boldFont:(id)font kerning:(double)kerning lineHeight:(double)height lineSpacing:(double)spacing emptyLineMaxHeight:(double)height textColor:(id)color linkTextColor:(id)color suffixTokenTextColor:(id)color darkBackground:(_Bool)background;
- (_Bool)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (_Bool)isDarkBackground;

@end

#endif /* TFNTwitterStatusDisplayAttributedTextModelFontOptions_h */
