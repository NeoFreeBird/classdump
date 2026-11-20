//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSARequestItemView_h
#define TSARequestItemView_h
@import Foundation;

#include "TFNDismissableView-Protocol.h"
#include "TSARequestItem-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TFNButton, TFNLinkTextLabel, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol TFNDismissDelegate;

@interface TSARequestItemView : UIView <UIGestureRecognizerDelegate, TFNDismissableView> {
    /* instance variables */
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    TFNLinkTextLabel *_learnMoreLabel;
    TFNButton *_acceptButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, weak, nonatomic) id learnMoreTarget;
@property (readonly, nonatomic) SEL learnMoreAction;
@property (retain, nonatomic) id <TSARequestItem> requestItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id <TFNDismissDelegate> dismissDelegate;

/* instance methods */
- (id)init;
- (id)initWithRequestItem:(id)item;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setLearnMoreTarget:(id)target action:(SEL)action;
- (void)learnMoreTapped:(id)tapped;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)notNow:(id)now;
- (void)accept:(id)accept;

@end

#endif /* TSARequestItemView_h */
