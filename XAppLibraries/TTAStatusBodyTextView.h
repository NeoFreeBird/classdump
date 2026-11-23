//
#ifndef TTAStatusBodyTextView_h
#define TTAStatusBodyTextView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TTAFullNoteTextTransition.h"
#include "TTAStatusBodyTextDisplayable-Protocol.h"
#include "TTAStatusBodyTextDisplayableDelegate-Protocol.h"
#include "TTAStatusBodyTextViewDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, UIView;
@protocol TFNTwitterStatusDisplayTextAttachmentDelegate;

@interface TTAStatusBodyTextView : UIView <TFNLayoutMetricsEnvironment, TTAStatusBodyTextDisplayableDelegate, TFNPreviewable> {
    /* instance variables */
    NSNumber *_selectionPaddingEnabledNumber;
    _Bool _needsContentUpdate;
    _Bool _needsFullNoteTextTransition;
    TTAFullNoteTextTransition *_fullNoteTextTransition;
}

@property (nonatomic) _Bool selectionPaddingEnabled;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long displayTextOptions;
@property (readonly, nonatomic) _Bool richTextEnabled;
@property (readonly, nonatomic) id <TFNTwitterStatusDisplayTextAttachmentDelegate> attachmentDelegate;
@property (readonly, nonatomic) _Bool textKit2Enabled;
@property (readonly, nonatomic) _Bool askGrokEnabled;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSize;
@property (readonly, nonatomic) unsigned long long currentLinesCount;
@property (weak, nonatomic) id <TTAStatusBodyTextViewDelegate> delegate;
@property (nonatomic) _Bool animatesFullNoteTextChanges;
@property (retain, nonatomic) NSString *trailingString;
@property (nonatomic) unsigned long long maxLines;
@property (readonly, nonatomic) NSArray *lineRanges;
@property (readonly, nonatomic) NSArray *activeRanges;
@property (readonly, nonatomic) UIView *bodyTextView;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) _Bool displayTextCachingEnabled;
@property (nonatomic) _Bool validatesDisplayTextCacheAgainstEffectiveMaxLines;
@property (readonly, nonatomic) _Bool hasURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fontForViewModel:(id)model options:(unsigned long long)options displayTextOptions:(unsigned long long)options displayType:(unsigned long long)type width:(double)width layoutMetrics:(id)metrics;
+ (double)heightForViewModel:(id)model options:(unsigned long long)options displayTextOptions:(unsigned long long)options displayType:(unsigned long long)type width:(double)width layoutMetrics:(id)metrics richTextEnabled:(_Bool)enabled trailingString:(id)string maxLines:(id)lines attachmentDelegate:(id)delegate textKit2Enabled:(_Bool)enabled cachingEnabled:(_Bool)enabled;
+ (double)selectionPadding;
+ (double)linkTapDetectionBottomPadding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithDisplayType:(unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame displayType:(unsigned long long)type;
- (void)dealloc;
- (void)setViewModel:(id)model options:(unsigned long long)options displayType:(unsigned long long)type displayTextOptions:(unsigned long long)options richTextEnabled:(_Bool)enabled attachmentDelegate:(id)delegate textKit2Enabled:(_Bool)enabled askGrokEnabled:(_Bool)enabled cachingEnabled:(_Bool)enabled maxLines:(unsigned long long)lines;
- (void)_t1_updateForOptions;
- (void)statusDidUpdate:(_Bool)update;
- (id)activeRangeAtPoint:(struct CGPoint { double x0; double x1; })point;
- (_Bool)isSelectionPaddingEnabled;
- (void)_t1_updateTextViewSelectionPaddingEnabled;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (_Bool)openURL;
- (_Bool)isTextLayoutAnimationEnabled;
- (void)setTextLayoutAnimationEnabled:(_Bool)enabled;
- (id)_t1_textViewForDisplayType:(unsigned long long)type textKit2Enabled:(_Bool)enabled askGrokEnabled:(_Bool)enabled;
- (void)_t1_updateTextViewForDisplayType:(unsigned long long)type textKit2Enabled:(_Bool)enabled askGrokEnabled:(_Bool)enabled;
- (void)_updateContentIfNeeded;
- (id)_attributedTextModelWithLayoutMetrics:(id)metrics;
- (id)_filteredDisplayTextRanges;
- (void)_tta_applicationDidBecomeActive:(id)active;
- (void)layoutSubviews;
- (_Bool)_tta_canSnapshotBodyText;
- (void)_tta_transitionFullNoteTextAlongsideResizeAnimation:(id)animation;
- (void)_tta_beginFullNoteTextTransition:(id)transition;
- (id /* block */)_tta_endBlockForFullNoteTextTransition:(id)transition;
- (void)_tta_endFullNoteTextTransition;
- (double)_tta_perceptualDurationOfResizeAnimation:(id)animation;
- (id)_tta_installRevealMaskOnBodyTextBelowY:(double)y rightOfX:(double)x;
- (double)_tta_minXOfBodyTextTrailingString;
- (id)_tta_bodyTextLineRects;
- (id)_tta_addClippedSnapshotOfBodyTextWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bodyTextViewFrame;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)bodyTextDisplayable:(id)displayable didTapRange:(id)range;
- (void)bodyTextDisplayable:(id)displayable didLongPressRange:(id)range;
- (_Bool)bodyTextDisplayable:(id)displayable shouldRecognizeLongPressOnRange:(id)range;
- (void)bodyTextDisplayableDidTapTruncationToken:(id)token;
- (void)bodyTextDisplayable:(id)displayable didCopyText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didMuteText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didSearchText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didAskGrokText:(id)text;
- (_Bool)bodyTextDisplayableTextTapExpansionEnabled;
- (_Bool)isAccessibilityElement;
- (_Bool)isDisplayTextCachingEnabled;

@end

#endif /* TTAStatusBodyTextView_h */
