//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTATimelinesStatusConversationContextView_h
#define TTATimelinesStatusConversationContextView_h
@import Foundation;

#include "TFNPreviewSuppressing-Protocol.h"
#include "TFNPreviewable-Protocol.h"

@class NSString, TFNAttributedActiveTextModel, TFNAttributedTextView, TFNTappableHighlightView, UIView;
@protocol TTATimelinesStatusConversationContextViewDelegate;

@interface TTATimelinesStatusConversationContextView : UIView <TFNPreviewable, TFNPreviewSuppressing> {
    /* instance variables */
    id _previewingTarget;
    SEL _previewingAction;
}

@property (readonly, nonatomic) TFNAttributedTextView *textView;
@property (readonly, nonatomic) TFNTappableHighlightView *highlightView;
@property (weak, nonatomic) id <TTATimelinesStatusConversationContextViewDelegate> delegate;
@property (retain, nonatomic) TFNAttributedActiveTextModel *activeTextModel;
@property (nonatomic) _Bool longPressEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_highlightViewDidTap:(id)tap;
- (void)_t1_highlightViewDidLongPress:(id)press;
- (void)updateWithLayoutState:(id)state resettingFrame:(_Bool)frame;
- (void)setPreviewingTarget:(id)target action:(SEL)action;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TTATimelinesStatusConversationContextView_h */
