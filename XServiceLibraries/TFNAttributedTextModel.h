//
#ifndef TFNAttributedTextModel_h
#define TFNAttributedTextModel_h
@import Foundation;

@class NSArray, NSAttributedString, NSObject, UIView;

@interface TFNAttributedTextModel : NSObject {
    /* instance variables */
    struct CGSize { double width; double height; } _requestedSize;
    struct __CTFrame * _coreTextFrame;
    struct __CTLine * _truncatedLastLine;
    struct CGPoint { double x; double y; } _truncatedLastLineOrigin;
    UIView *_colorProviderView;
}

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) unsigned char lineBreakMode;
@property (nonatomic) unsigned long long maxLines;
@property (retain, nonatomic) NSAttributedString *attributedTrailingString;
@property (nonatomic) _Bool shouldAlwaysSuffixTrailingString;
@property (nonatomic) _Bool truncatesAtWordBoundary;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } actualSize;
@property (readonly, nonatomic) NSAttributedString *renderedAttributedString;
@property (readonly, nonatomic) NSArray *lineRanges;
@property (readonly, nonatomic) _Bool truncated;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } attributedTrailingStringRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } attributedTrailingStringRangeIncludingPrefix;
@property (readonly, nonatomic) double contentBottomPadding;
@property (readonly, nonatomic) double contentTopPadding;

/* class methods */
+ (double)maxHeight;

/* instance methods */
- (id)init;
- (id)initWithAttributedString:(id)string;
- (id)initWithAttributedString:(id)string colorProviderView:(id)view;
- (void)dealloc;
- (struct __CTFrame *)coreTextFrame;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })coreTextTransform;
- (struct __CTLine *)truncatedLastLine;
- (struct CGPoint { double x0; double x1; })truncatedLastLineOrigin;
- (_Bool)isTruncated;
- (void)fitToWidth:(double)width;
- (void)fitToSize:(struct CGSize { double x0; double x1; })size;
- (_Bool)_tfn_sizeRequiresRelayout:(struct CGSize { double x0; double x1; })relayout;
- (_Bool)isContentEqualTo:(id)to;
- (id)dynamicColorView;
- (void)_tfn_releaseCoreTextFrame;
- (void)_tfn_resetTextProperties;
- (void)_tfn_buildTextProperties;
- (void)_tfn_buildTextPropertiesWithTrailingString;
- (void)_tfn_buildTextPropertiesInMultiLinesWithoutTrailingString;
- (void)_tfn_buildTextPropertiesInSingleLineWithoutTrailingString;
- (void)_tfn_updateTextPropertiesWithRenderedAttributedString:(id)string;

@end

#endif /* TFNAttributedTextModel_h */
