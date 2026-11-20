//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedTextRenderer_h
#define TFNAttributedTextRenderer_h
@import Foundation;

#include "TFNActiveRangeGestureHandler-Protocol.h"
#include "TFNAttributedTextModel.h"
#include "TFNAttributedTextRendererDelegate-Protocol.h"
#include "TFSActiveTextRange-Protocol.h"

@class NSMutableDictionary, NSString, UIColor, UIResponder, UIView;

@interface TFNAttributedTextRenderer : UIResponder <TFNActiveRangeGestureHandler> {
    /* instance variables */
    NSMutableDictionary *_axViews;
}

@property (weak, nonatomic) id <TFNAttributedTextRendererDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) TFNAttributedTextModel *attributedTextModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) _Bool highlightAllText;
@property (nonatomic) long long verticalAlignment;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (retain, nonatomic) UIColor *selectionColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } selectionInsets;
@property (nonatomic) double selectionRoundRadius;
@property (nonatomic) double hitTestPadding;
@property (readonly, nonatomic) id <TFSActiveTextRange> hitRange;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } hitPoint;
@property (readonly, nonatomic) id <TFSActiveTextRange> hoverRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)drawForViewInContext:(struct CGContext *)context;
- (id)selectedString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectedRect;
- (_Bool)hitTestTruncationTokenAreaForRange:(id)range;
- (_Bool)containsTruncationTokenRange;
- (id)hitTestRanges:(id)ranges forPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)lineRects;
- (id)rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)rangeAccessibilityElements;
- (void)_drawTextAttachmentsWithFrame:(struct __CTFrame *)frame context:(struct CGContext *)context;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_alignedTextFrame;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_fromCoreTextTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_toCoreTextTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromCoreText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })text;
- (void)_rectsForRange:(struct { long long x0; long long x1; })range rects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rects rectCount:(long long *)count;
- (id)_insertTruncationTokenRangeIfNeeded:(id)needed;
- (id)activeRangeGestureBeganAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)activeRangeGestureEnded;
- (id)activeRangeGestureCancelled;
- (id)activeRangeHoverBeganAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)activeRangeHoverEnded;
- (void)_addAXViews;
- (void)_removeAXViews;
- (void)_updateAXViews;

@end

#endif /* TFNAttributedTextRenderer_h */
