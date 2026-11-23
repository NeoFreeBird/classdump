//
#ifndef PTVBroadcastControlsDrawerView_h
#define PTVBroadcastControlsDrawerView_h
@import Foundation;

#include "PTVBroadcastControlsDelegate-Protocol.h"
#include "PTVExtendedButton.h"

@class NSString, UIButton, UIImage, UILabel, UIView;

@interface PTVBroadcastControlsDrawerView : UIView {
    /* instance variables */
    UIButton *_leaveBroadcastButton;
    UIButton *_stopBroadcastButton;
    UILabel *_debugLabel;
    PTVExtendedButton *_mute;
    PTVExtendedButton *_audioScope;
    PTVExtendedButton *_flip;
    UIImage *_muteImage;
    UIImage *_unmuteImage;
    UIImage *_audioScopeOnImage;
    UIImage *_audioScopeOffImage;
    UIImage *_flipToFront;
    UIImage *_flipToBack;
}

@property (weak, nonatomic) id <PTVBroadcastControlsDelegate> delegate;
@property (nonatomic) unsigned long long broadcastingCamera;
@property (nonatomic) _Bool isMuted;
@property (nonatomic) _Bool isAudioScope;
@property (nonatomic) _Bool isAudioScopeSupported;
@property (retain, nonatomic) NSString *debugLabelText;

/* class methods */
+ (double)BroadcastControlsHeight;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame delegate:(id)delegate;
- (void)leave;
- (void)stop;
- (void)flipCamera;
- (void)mutePressed;
- (void)audioScopePressed;
- (void)setLeaveBroadcastButtonHidden:(_Bool)hidden;

@end

#endif /* PTVBroadcastControlsDrawerView_h */
