//
#ifndef T1VoicePlaybackView_h
#define T1VoicePlaybackView_h
@import Foundation;

@class TAVPlayer, TAVPlayerView, TFNSolidColorView;

@interface T1VoicePlaybackView : TFNSolidColorView

@property (retain, nonatomic) TAVPlayer *player;
@property (retain, nonatomic) TAVPlayerView *playerView;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)t1_playerViewAttachmentPriority;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* T1VoicePlaybackView_h */
