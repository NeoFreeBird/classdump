//
#ifndef TFNAudiowaveTheme_h
#define TFNAudiowaveTheme_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, UIColor;

@interface TFNAudiowaveTheme : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double barWidth;
@property (nonatomic) double barSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double numberOfBarsPerSecond;
@property (nonatomic) _Bool shouldRoundNumberOfBars;
@property (nonatomic) _Bool shouldOnlyLayoutLatestBar;
@property (nonatomic) _Bool shouldAnimateOut;
@property (nonatomic) _Bool shouldUseModelDuration;

/* instance methods */
- (id)init;
- (id)initWithTheme:(id)theme;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToTheme:(id)theme;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)usesModelDuration;

@end

#endif /* TFNAudiowaveTheme_h */
