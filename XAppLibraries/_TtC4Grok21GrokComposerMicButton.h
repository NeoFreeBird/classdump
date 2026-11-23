//
#ifndef _TtC4Grok21GrokComposerMicButton_h
#define _TtC4Grok21GrokComposerMicButton_h
@import Foundation;

@class Grok.GrokComposerMicButton.Glyph ?, Grok.GrokInputBarView.ViewModel, Grok.GrokInputSpeechState, Swift.Bool, UIButton, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo23UIActivityIndicatorViewC;

@interface Grok.GrokComposerMicButton : UIButton { // (Swift)
    /* instance variables */
    Grok.GrokInputBarView.ViewModel inputViewModel;
    Grok.GrokInputSpeechState speechState;
    __C.UIActivityIndicatorView spinner;
    Swift.Bool isDictationLoading;
    Grok.GrokComposerMicButton.Glyph ? glyph;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)isEnabled;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok21GrokComposerMicButton_h */
