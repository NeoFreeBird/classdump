//
#ifndef _TtC4Grok22GrokComposerPlusButton_h
#define _TtC4Grok22GrokComposerPlusButton_h
@import Foundation;

@class Grok.GrokInputBarView.ViewModel, Swift.Bool, UIButton, _$sSo16TIPImagePipelineC;

@interface Grok.GrokComposerPlusButton : UIButton { // (Swift)
    /* instance variables */
    Grok.GrokInputBarView.ViewModel inputViewModel;
    __C.TIPImagePipeline imagePipeline;
    Swift.Bool isMenuPresented;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)isEnabled;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok22GrokComposerPlusButton_h */
