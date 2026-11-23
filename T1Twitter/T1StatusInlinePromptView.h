//
#ifndef T1StatusInlinePromptView_h
#define T1StatusInlinePromptView_h
@import Foundation;

#include "T1StatusInlinePromptContentView.h"
#include "T1StatusInlinePromptViewDelegate-Protocol.h"
#include "T1StatusInlinePromptViewModel.h"

@class TFNTooltipView, UIView;

@interface T1StatusInlinePromptView : UIView

@property (retain, nonatomic) T1StatusInlinePromptViewModel *viewModel;
@property (retain, nonatomic) TFNTooltipView *topicPromptView;
@property (retain, nonatomic) T1StatusInlinePromptContentView *topicPromptContentView;
@property (weak, nonatomic) id <T1StatusInlinePromptViewDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model maximumWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)pointPromptArrow:(id)arrow;
- (void)updateWithViewModel:(id)model;

@end

#endif /* T1StatusInlinePromptView_h */
