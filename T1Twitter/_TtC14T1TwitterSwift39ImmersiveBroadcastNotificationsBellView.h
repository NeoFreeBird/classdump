//
#ifndef _TtC14T1TwitterSwift39ImmersiveBroadcastNotificationsBellView_h
#define _TtC14T1TwitterSwift39ImmersiveBroadcastNotificationsBellView_h
@import Foundation;

@class UIView, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterCanonicalUser_pSg, _$sSo23TFSTwitterScribeContextCSg, _$sSo9TFNButtonC;

@interface T1TwitterSwift.ImmersiveBroadcastNotificationsBellView : UIView { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFNButton button;
    __C.TFSTwitterCanonicalUser? user;
    __C.TFSTwitterScribeContext? scribeContext;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift39ImmersiveBroadcastNotificationsBellView_h */
