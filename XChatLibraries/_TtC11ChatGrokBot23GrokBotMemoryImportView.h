//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot23GrokBotMemoryImportView_h
#define _TtC11ChatGrokBot23GrokBotMemoryImportView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class UIView, _$s13XDesignSystem6ButtonCMn, _$sSo10UITextViewC, _$sSo11UIStackViewC, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sySScSg, _$syycSg;

@interface ChatGrokBot.GrokBotMemoryImportView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onAdd;
    (() -> ())? onCopy;
    ((Swift.String) -> ())? onExportChanged;
    nominal type descriptor for XDesignSystem.Button addButton;
    nominal type descriptor for XDesignSystem.Button copyButton;
    __C.UIView fieldBoxView;
    __C.UILabel fieldPlaceholderLabel;
    __C.UITextView fieldView;
    __C.UILabel footerLabel;
    __C.UIView promptBoxView;
    __C.UILabel promptLabel;
    __C.UIScrollView scrollView;
    __C.UIStackView stackView;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didTapCopy;
- (void)didTapAdd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot23GrokBotMemoryImportView_h */
