//
#ifndef TAVPlayerViewDebugOverlay_h
#define TAVPlayerViewDebugOverlay_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerView-Protocol.h"

@class CADisplayLink, UILabel, UIView;

@interface TAVPlayerViewDebugOverlay : UIView <TAVPlaybackObserver>

@property (readonly, nonatomic) UILabel *summaryLabel;
@property (readonly, nonatomic) UILabel *rpoLabel;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) _Bool needsUpdate;
@property (weak, nonatomic) id <TAVPlayerView> playerView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)private_displayLinkTick:(id)tick;
- (void)private_updateIfNeeded;
- (void)private_updateRPOLabel;
- (void)private_updateSummaryLabel;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidDetachFromPlayer:(id)player;
- (void)observerDidAttachToPlayer:(id)player;
- (void)layoutSubviews;
- (void)dealloc;

@end

#endif /* TAVPlayerViewDebugOverlay_h */
