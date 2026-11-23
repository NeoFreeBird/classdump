//
#ifndef TTAStatusBodyAttributedTextView_h
#define TTAStatusBodyAttributedTextView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNPreviewSuppressing-Protocol.h"
#include "TTAStatusBodyTextDisplayable-Protocol.h"
#include "TTAStatusBodyTextDisplayableDelegate-Protocol.h"

@class NSArray, NSString, TFNAttributedTextModel, TFNAttributedTextView, UIColor;

@interface TTAStatusBodyAttributedTextView : TFNAttributedTextView <TFNAttributedTextViewDelegate, TFNPreviewSuppressing, TTAStatusBodyTextDisplayable>

@property (weak, nonatomic) id <TTAStatusBodyTextDisplayableDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *activeRanges;
@property (nonatomic) _Bool selectionPaddingEnabled;
@property (nonatomic) _Bool textLayoutAnimationEnabled;
@property (retain, nonatomic) TFNAttributedTextModel *textModel;
@property (retain, nonatomic) UIColor *selectionColor;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTestForActiveRangesAtPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGSize { double x0; double x1; })actualSize;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didLongPressRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (_Bool)attributedTextView:(id)view shouldRecognizeLongPressOnRange:(id)range;
- (_Bool)_tta_shouldRecognizeLongPressOnRange:(id)range;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextViewDidTapTruncatedBodyArea:(id)area;
- (_Bool)attributedTextViewTextTapExpansionEnabled;
- (void)attributedTextView:(id)view didCopyString:(id)string;
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* TTAStatusBodyAttributedTextView_h */
