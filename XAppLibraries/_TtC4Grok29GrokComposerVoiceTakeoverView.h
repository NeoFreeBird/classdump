//
#ifndef _TtC4Grok29GrokComposerVoiceTakeoverView_h
#define _TtC4Grok29GrokComposerVoiceTakeoverView_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class Grok.GrokComposerSendButton, Grok.GrokVoiceInputBarViewModel, Swift.Bool, UIView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UITextFieldC, _$sySbcSg;

@interface Grok.GrokComposerVoiceTakeoverView : UIView <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    __C.UITextField textField;
    ((Swift.Bool) -> ())? onEditingChange;
    Grok.GrokVoiceInputBarViewModel viewModel;
    Grok.GrokComposerSendButton sendButton;
    Swift.Bool showsSend;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (_Bool)textFieldShouldReturn:(id)_return;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok29GrokComposerVoiceTakeoverView_h */
