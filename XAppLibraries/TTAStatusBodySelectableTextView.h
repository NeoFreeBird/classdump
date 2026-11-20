//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAStatusBodySelectableTextView_h
#define TTAStatusBodySelectableTextView_h
@import Foundation;

#include "TTAStatusBodySelectableContentTextView.h"
#include "TTAStatusBodyTextDisplayable-Protocol.h"
#include "TTAStatusBodyTextDisplayableDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSString, TFNAttributedTextModel, UIColor, UIView;

@interface TTAStatusBodySelectableTextView : UIView <TTAStatusBodyTextDisplayable>

@property (retain, nonatomic) TTAStatusBodySelectableContentTextView *textView;
@property (retain, nonatomic) NSAttributedString *cachedAttributedString;
@property (weak, nonatomic) id <TTAStatusBodyTextDisplayableDelegate> textViewDelegate;
@property (retain, nonatomic) NSArray *activeRanges;
@property (nonatomic) _Bool selectionPaddingEnabled;
@property (nonatomic) _Bool textLayoutAnimationEnabled;
@property (retain, nonatomic) TFNAttributedTextModel *textModel;
@property (retain, nonatomic) UIColor *selectionColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForAttributedTextModel:(id)model width:(double)width textKit2Enabled:(_Bool)enabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textKit2Enabled:(_Bool)enabled askGrokEnabled:(_Bool)enabled;
- (void)layoutSubviews;
- (id)hitTestForActiveRangesAtPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGSize { double x0; double x1; })actualSize;
- (void)_tfn_updateTextView;
- (_Bool)isTextLayoutAnimationEnabled;
- (_Bool)isSelectionPaddingEnabled;

@end

#endif /* TTAStatusBodySelectableTextView_h */
