//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GlassVoiceDockViewController_h
#define T1GlassVoiceDockViewController_h
@import Foundation;

#include "T1VoiceDockHost-Protocol.h"
#include "TUIVoiceDockViewControllerContainer-Protocol.h"
#include "TUIVoiceDockableViewController-Protocol.h"
#include "_TtP14T1TwitterSwift24TabBottomSegmentDockable_-Protocol.h"

@class TFNViewController, UIViewController;

@interface T1GlassVoiceDockViewController : TFNViewController <T1TwitterSwift.TabBottomSegmentDockable, T1VoiceDockHost, TUIVoiceDockViewControllerContainer> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *spaceViewController;
    NSNumber"16@0:8 *dockBar;
}

@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, readonly) UIViewController<TUIVoiceDockableViewController> *baseContentViewController;
@property (nonatomic, readonly) UIViewController<TUIVoiceDockableViewController> *topContentViewController;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)concealUntilRevealed;
- (void)revealAnimated:(_Bool)animated;
- (void)bottomSegmentDidDismiss;
- (void)pushVoiceDockViewController:(id)controller;
- (void)removeVoiceDockViewController:(id)controller;
- (void)voiceDockableViewControllerHasEndedSession:(id)session;
- (void)voiceDockableViewControllerRequestedAudioFocus:(id)focus;
- (void)voiceDockableViewControllerCanResignAudioFocus:(id)focus;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1GlassVoiceDockViewController_h */
