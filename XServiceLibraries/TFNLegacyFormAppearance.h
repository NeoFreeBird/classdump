//
#ifndef TFNLegacyFormAppearance_h
#define TFNLegacyFormAppearance_h
@import Foundation;

#include "TFNLayoutMetrics.h"
#include "TFSObjectCache.h"

@class NSObject, UIColor;

@interface TFNLegacyFormAppearance : NSObject {
    /* instance variables */
    TFSObjectCache *_fieldBackgroundImages;
    TFNLayoutMetrics *_fieldBackgroundImagesLayoutMetrics;
    TFSObjectCache *_separatorCoverImages;
}

@property (nonatomic) double lineSpacing;
@property (nonatomic) double fieldSpacing;
@property (nonatomic) double fieldBorderWidth;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *inputDisabledBackgroundColor;
@property (retain, nonatomic) UIColor *inputDisabledTextColor;
@property (nonatomic) _Bool insetSeparators;
@property (nonatomic) _Bool overlapped;
@property (retain, nonatomic) UIColor *borderColor;

/* class methods */
+ (id)unsectionedAppearance;
+ (id)sectionedAppearanceWithInsetSeparators:(_Bool)separators;
+ (id)sectionedAppearanceWithInsetSeparators:(_Bool)separators backgroundColor:(id)color;

/* instance methods */
- (id)fieldBackgroundImageForSectionBreaks:(unsigned long long)breaks highlighted:(_Bool)highlighted inputDisabled:(_Bool)disabled layoutMetrics:(id)metrics;
- (id)_generateFieldBackgroundImageWithIdentifier:(id)identifier forSectionBreaks:(unsigned long long)breaks highlighted:(_Bool)highlighted inputDisabled:(_Bool)disabled layoutMetrics:(id)metrics regeneratingForObject:(id)object;
- (id)generateFieldBackgroundImageForSectionBreaks:(unsigned long long)breaks withBackgroundColor:(id)color borderColor:(id)color layoutMetrics:(id)metrics;
- (id)separatorCoverImageForSectionBreaks:(unsigned long long)breaks inset:(double)inset borderless:(_Bool)borderless;
- (id)_generateSeparatorCoverImageWithIdentifier:(id)identifier forSectionBreaks:(unsigned long long)breaks inset:(double)inset regeneratingForObject:(id)object;
- (id)_generateSeparatorCoverImageForSectionBreaks:(unsigned long long)breaks inset:(double)inset backgroundColor:(id)color;
- (_Bool)_areDynamicColorsUpToDateForImage:(id)image object:(id)object;
- (id)validityIndicatorImageForFormField:(id)field validityState:(unsigned long long)state;
- (struct CGSize { double x0; double x1; })validityIndicatorSizeForFormField:(id)field validityState:(unsigned long long)state;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsetsForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })errorEdgeInsetsForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })errorContentEdgeInsetsForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })counterContentEdgeInsetsForLayoutMetrics:(id)metrics;
- (double)lineSpacingForLayoutMetrics:(id)metrics;
- (double)fieldSpacingForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetForSectionAtIndex:(long long)index withLayoutMetrics:(id)metrics;
- (double)standardFieldHeightForLayoutMetrics:(id)metrics;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isOverlapped;

@end

#endif /* TFNLegacyFormAppearance_h */
