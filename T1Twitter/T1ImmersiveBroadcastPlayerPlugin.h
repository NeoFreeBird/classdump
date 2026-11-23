//
#ifndef T1ImmersiveBroadcastPlayerPlugin_h
#define T1ImmersiveBroadcastPlayerPlugin_h
@import Foundation;

@class UIView;

@interface T1ImmersiveBroadcastPlayerPlugin : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *videoSettingsCoordinator;
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *videoPlayerView;
    NSNumber"16@0:8 *broadcastStatus;
    NSNumber"16@0:8 *lastHandledError;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1ImmersiveBroadcastPlayerPlugin_h */
