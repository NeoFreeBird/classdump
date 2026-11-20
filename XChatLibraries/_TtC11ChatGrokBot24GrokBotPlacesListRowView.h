//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotPlacesListRowView_h
#define _TtC11ChatGrokBot24GrokBotPlacesListRowView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotMapboxCreditView, ChatGrokBot.GrokBotPlacesChipView, ChatGrokBot.GrokBotShoppingPhotoView, ChatGrokBot.GrokBotYelpRatingView, UIView, _$s10Foundation3URLVMn _$scSg ->, _$sSSSg, _$sSo22UITapGestureRecognizerC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotPlacesListRowView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    Swift.String? disabledReason;
    (() -> ())? onTap;
    __C.UILabel detailLabel;
    ChatGrokBot.GrokBotMapboxCreditView mapboxCreditView;
    __C.UILabel metaLabel;
    __C.UILabel nameLabel;
    ChatGrokBot.GrokBotShoppingPhotoView photoView;
    ChatGrokBot.GrokBotPlacesChipView ratingBadgeView;
    __C.UITapGestureRecognizer tapRecognizer;
    ChatGrokBot.GrokBotYelpRatingView yelpRatingView;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (_Bool)accessibilityActivate;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot24GrokBotPlacesListRowView_h */
