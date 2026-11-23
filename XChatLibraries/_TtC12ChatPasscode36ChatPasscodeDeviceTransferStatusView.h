//
#ifndef _TtC12ChatPasscode36ChatPasscodeDeviceTransferStatusView_h
#define _TtC12ChatPasscode36ChatPasscodeDeviceTransferStatusView_h
@import Foundation;

@class ChatPasscode.ChatPasscodeCodeLabel, UIView, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface ChatPasscode.ChatPasscodeDeviceTransferStatusView : UIView { // (Swift)
    /* instance variables */
    __C.UIActivityIndicatorView activityIndicatorView;
    __C.UILabel messageLabel;
    ChatPasscode.ChatPasscodeCodeLabel codeLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC12ChatPasscode36ChatPasscodeDeviceTransferStatusView_h */
