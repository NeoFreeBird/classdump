//
#ifndef _TtC14T1TwitterSwift30DirectMessageCardRecipientView_h
#define _TtC14T1TwitterSwift30DirectMessageCardRecipientView_h
@import Foundation;

@class UIView, _$sSo10T1UserViewC, _$sSo14TFNTwitterUserCSg, _$sSo17TFNTwitterAccountCSg;

@interface T1TwitterSwift.DirectMessageCardRecipientView : UIView { // (Swift)
    /* instance variables */
    __C.T1UserView userView;
    __C.TFNTwitterUser? user;
    __C.TFNTwitterAccount? account;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (id)calculatedLayoutMetrics;

@end

#endif /* _TtC14T1TwitterSwift30DirectMessageCardRecipientView_h */
