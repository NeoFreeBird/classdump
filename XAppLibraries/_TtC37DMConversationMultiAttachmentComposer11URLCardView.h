//
#ifndef _TtC37DMConversationMultiAttachmentComposer11URLCardView_h
#define _TtC37DMConversationMultiAttachmentComposer11URLCardView_h
@import Foundation;

@class DMConversationMultiAttachmentComposer.URLCardViewModel ?, NSString, UIView, _$sSo6UIViewCSg;

@interface DMConversationMultiAttachmentComposer.URLCardView : UIView { // (Swift)
    /* instance variables */
    DMConversationMultiAttachmentComposer.URLCardViewModel ? viewModel;
    __C.UIView? contentView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC37DMConversationMultiAttachmentComposer11URLCardView_h */
