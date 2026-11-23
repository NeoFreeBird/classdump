//
#ifndef T1VoiceDockStatusViewController_h
#define T1VoiceDockStatusViewController_h
@import Foundation;

#include "T1VoiceDockStatusContentViewDelegate-Protocol.h"
#include "T1VoicePlayableCollectionViewModelObserver-Protocol.h"
#include "T1VoiceTrackViewModel.h"
#include "TUIVoiceDockViewControllerContainer-Protocol.h"
#include "TUIVoiceDockableContent-Protocol.h"
#include "TUIVoiceDockableViewController-Protocol.h"

@class NSArray, NSString, TFNTwitterAccount, TFNViewController, UIView;

@interface T1VoiceDockStatusViewController : TFNViewController <T1VoiceDockStatusContentViewDelegate, T1VoicePlayableCollectionViewModelObserver, TUIVoiceDockableViewController>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSArray *timelinePlayers;
@property (retain, nonatomic) T1VoiceTrackViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id <TUIVoiceDockViewControllerContainer> dockContainer;
@property (readonly, nonatomic) UIView<TUIVoiceDockableContent> *dockContentView;
@property (nonatomic) _Bool hasAudioFocus;
@property (readonly, nonatomic) _Bool isPaused;
@property (readonly, nonatomic) _Bool isPlaying;
@property (readonly, nonatomic) NSString *playerIdentifier;
@property (readonly, nonatomic) _Bool allowAutoplay;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithAccount:(id)account;
- (void)loadView;
- (id)calculatedLayoutMetrics;
- (void)togglePlaybackForStatus:(id)status;
- (id)_t1_statusContentView;
- (void)voicePlayableViewModel:(id)model didUpdatePlaybackState:(id)state;
- (void)voicePlayableViewModel:(id)model didUpdateClip:(id)clip;
- (void)voiceDockViewWasTapped:(id)tapped;
- (void)voiceDockViewPlayPauseButtonWasTapped:(id)tapped;
- (void)voiceDockViewCloseButtonWasTapped:(id)tapped;
- (void)play;
- (void)pause;
- (void)setMuted:(_Bool)muted;
- (void)_t1_updateControlCenterWithPlaybackState:(id)state;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeParameters;
- (void)logClickActionOnElement:(id)element;

@end

#endif /* T1VoiceDockStatusViewController_h */
