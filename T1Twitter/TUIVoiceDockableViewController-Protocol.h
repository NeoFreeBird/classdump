//
#ifndef TUIVoiceDockableViewController_Protocol_h
#define TUIVoiceDockableViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUIVoiceDockViewControllerContainer-Protocol.h"
#include "TUIVoiceDockableContent-Protocol.h"

@class NSString, UIView;

@protocol TUIVoiceDockableViewController <NSObject>

@required

@property (nonatomic, weak) id <TUIVoiceDockViewControllerContainer> dockContainer;
@property (nonatomic, readonly) UIView<TUIVoiceDockableContent> *dockContentView;
@property (nonatomic) _Bool hasAudioFocus;
@property (nonatomic, readonly) _Bool isPaused;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) NSString *playerIdentifier;
@property (nonatomic, readonly) _Bool allowAutoplay;

@optional

/* optional instance methods */
- (void)play;
- (void)pause;
- (void)setMuted:(_Bool)muted;

@end

#endif /* TUIVoiceDockableViewController_Protocol_h */
