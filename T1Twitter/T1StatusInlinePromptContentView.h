//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusInlinePromptContentView_h
#define T1StatusInlinePromptContentView_h
@import Foundation;

#include "TFNTooltipContentView-Protocol.h"

@class NSString, TFNAttributedTextView, TFNButton, UIView;

@interface T1StatusInlinePromptContentView : UIView <TFNTooltipContentView>

@property (retain, nonatomic) TFNAttributedTextView *attributedTextView;
@property (retain, nonatomic) TFNButton *actionButton;
@property (copy, nonatomic) id /* block */ contentSizeChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })actionButtonSizeForTitle:(id)title;
+ (double)largestActionButtonWidth:(id)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateWithViewModel:(id)model;

@end

#endif /* T1StatusInlinePromptContentView_h */
