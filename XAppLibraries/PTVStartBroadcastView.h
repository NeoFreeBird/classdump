//
#ifndef PTVStartBroadcastView_h
#define PTVStartBroadcastView_h
@import Foundation;

@class NSAttributedString, UIButton, UILabel, UIView;

@interface PTVStartBroadcastView : UIView {
    /* instance variables */
    NSAttributedString *_poorConnectionError;
    NSAttributedString *_failedCreateError;
    NSAttributedString *_needsLoginError;
}

@property (readonly, nonatomic) UIView *border;
@property (readonly, nonatomic) UILabel *connectingLabel;
@property (readonly, nonatomic) UILabel *errorLabel;
@property (readonly, nonatomic) UIButton *startButton;
@property (nonatomic) unsigned long long startBroadcastState;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setupPTVPreBroadcastConnectionStatusView;
- (void)setAudienceDisplayName:(id)name;
- (id)startButtonTitleForAudienceNamed:(id)named;
- (_Bool)isStartButtonVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForStartButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBorder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForConnectingLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForErrorLabel;
- (id)poorConnectionError;
- (id)failedCreateError;
- (id)needsLoginError;

@end

#endif /* PTVStartBroadcastView_h */
