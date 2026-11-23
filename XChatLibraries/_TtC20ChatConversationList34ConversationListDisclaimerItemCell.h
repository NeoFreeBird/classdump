//
#ifndef _TtC20ChatConversationList34ConversationListDisclaimerItemCell_h
#define _TtC20ChatConversationList34ConversationListDisclaimerItemCell_h
@import Foundation;

@class UITableViewCell, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo7UILabelC, _$sSo9UIControlC, _$syycSg;

@interface ChatConversationList.ConversationListDisclaimerItemCell : UITableViewCell { // (Swift)
    /* instance variables */
    __C.UILabel textLabelView;
    nominal type descriptor for XDesignSystem.Button button;
    __C.UIControl ctaControl;
    __C.UIImageView ctaIconView;
    __C.UILabel ctaLabel;
    (() -> ())? actionHandler;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapAction;

@end

#endif /* _TtC20ChatConversationList34ConversationListDisclaimerItemCell_h */
