//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAttributedTextView_h
#define TFNAttributedTextView_h
@import Foundation;

#include "TFNAccessibilityProxyView.h"
#include "TFNActiveTextItem.h"
#include "TFNAttributedTextModel.h"
#include "TFNAttributedTextRenderer.h"
#include "TFNAttributedTextRendererDelegate-Protocol.h"
#include "TFNAttributedTextViewConfiguration.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLongPressGestureRecognizer.h"
#include "TFNPreferredMaxLayoutWidthSizable-Protocol.h"
#include "TFNSwiftUIComponentRepresentable-Protocol.h"
#include "TFNTouchDownGestureRecognizer.h"
#include "TFSActiveTextRange-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UITapGestureRecognizer, UIView;

@interface TFNAttributedTextView : UIView <TFNAttributedTextRendererDelegate, UIGestureRecognizerDelegate, TFNPreferredMaxLayoutWidthSizable, TFNSwiftUIComponentRepresentable> {
    /* instance variables */
    _Bool _updateForFontSizeChanges;
    _Bool _updateForHashflagChanges;
    _Bool _isSwiftUIHosted;
    id /* block */ _updateTextAndRangesBlock;
    NSString *_lastSelectedString;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    id _hashflagVersionDidChangeObserver;
    id _imageDidDownloadObserver;
    id _menuControllerWillHideObserver;
    id _dynamicColorsDidReloadObserver;
    id _voiceOverStatusDidChangeObserver;
}

@property (retain, nonatomic) TFNActiveTextItem *activeTextItem;
@property (retain, nonatomic) TFNAccessibilityProxyView *accessibilityProxyView;
@property (readonly, nonatomic) TFNAttributedTextRenderer *textRenderer;
@property (copy, nonatomic) TFNAttributedTextViewConfiguration *configuration;
@property (weak, nonatomic) id <TFNAttributedTextViewDelegate> delegate;
@property (retain, nonatomic) TFNAttributedTextModel *textModel;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool pressed;
@property (retain, nonatomic) UIColor *selectionColor;
@property (readonly, nonatomic) double selectionRoundRadius;
@property (retain, nonatomic) NSArray *activeRanges;
@property (readonly, nonatomic) id <TFSActiveTextRange> hitRange;
@property (nonatomic) _Bool textLayoutAnimationEnabled;
@property (nonatomic) _Bool selectionPaddingEnabled;
@property (readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly, nonatomic) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) UIView *viewForFirstBaselineLayout;
@property (readonly) UIView *viewForLastBaselineLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textRendererFrame;
@property (readonly, nonatomic) _Bool highlightAllText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (double)selectionPadding;
+ (Class)layerClass;
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (_Bool)isTextLayoutAnimationEnabled;
- (void)setUpdateTextAndRangesBlock:(id /* block */)block updateForFontSizeChanges:(_Bool)changes updateForHashflagChanges:(_Bool)changes;
- (id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)lineRects;
- (id)hitTestRanges:(id)ranges forPoint:(struct CGPoint { double x0; double x1; })point;
- (id)activeRangeAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)presentMenuController;
- (void)setAttributedActiveTextModel:(id)model;
- (void)_setupNonCodedValues;
- (void)_menuWasHidden:(id)hidden;
- (_Bool)_hitTestAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)activeRangesForAttributedTextRenderer:(id)renderer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_positionFirstBaselineView;
- (void)_positionLastBaselineView;
- (void)copy:(id)copy;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (void)_touchDownAction;
- (void)_tapAction;
- (void)_doubleTapAction;
- (void)_longPressAction;
- (_Bool)_textBodyTapExpansionEnabled;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (void)_dynamicColorsDidReload:(id)reload;
- (void)_tfn_hashflagImageDidChange:(id)change;
- (void)_tfn_hashflagVersionDidChange:(id)change;
- (void)applySwiftUIConfiguration:(id)uiconfiguration;
- (void)tfn_fontSizeChanged;
- (void)_tfn_updateTextAndRangesIfNeeded;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)setIsAccessibilityElement:(_Bool)element;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (void)_updateAccessibilityProxy;
- (void)private_setNeedsDisplayIfRequired;
- (_Bool)private_hasAccessibleSubranges;
- (_Bool)private_hasAccessibleFullText;
- (void)_tfn_setupPointerInteractions;
- (void)_tfn_didHover:(id)hover;
- (_Bool)isSelectionPaddingEnabled;

@end

#endif /* TFNAttributedTextView_h */
