//
#ifndef _TtC11ChatGrokBot25GrokBotPlaceStripCardView_h
#define _TtC11ChatGrokBot25GrokBotPlaceStripCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotMapboxCreditView, ChatGrokBot.GrokBotPlacesChipView, ChatGrokBot.GrokBotShoppingPhotoView, ChatGrokBot.GrokBotYelpRatingView, Swift.Bool, UIControl, _$s10Foundation3URLVMn _$scSg ->, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotPlaceStripCardView : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    Swift.Bool showsHoursChange;
    __C.UILabel detailLabel;
    __C.UILabel hoursLabel;
    ChatGrokBot.GrokBotMapboxCreditView mapboxCreditView;
    __C.UILabel metaLabel;
    __C.UILabel nameLabel;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    ChatGrokBot.GrokBotPlacesChipView ratingBadgeView;
    __C.UIView surfaceView;
    ChatGrokBot.GrokBotYelpRatingView yelpRatingView;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool selected;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (_Bool)isSelected;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotPlaceStripCardView_h */
