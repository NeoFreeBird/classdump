//
#ifndef _TtC16ChatConversation29MessageAttachmentPostBodyView_h
#define _TtC16ChatConversation29MessageAttachmentPostBodyView_h
@import Foundation;

@class UIView, _$sSSSg, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostBodyView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel translationLabel;
    __C.UILabel textLabel;
    Swift.String? cachedTranslationLanguage;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation29MessageAttachmentPostBodyView_h */
