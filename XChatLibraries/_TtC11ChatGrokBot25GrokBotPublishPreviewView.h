//
#ifndef _TtC11ChatGrokBot25GrokBotPublishPreviewView_h
#define _TtC11ChatGrokBot25GrokBotPublishPreviewView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo11UIImageViewC;

@interface ChatGrokBot.GrokBotPublishPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView glyphView;
    __C.UIImageView imageView;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    nominal type descriptor for Foundation.URL ? url;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot25GrokBotPublishPreviewView_h */
