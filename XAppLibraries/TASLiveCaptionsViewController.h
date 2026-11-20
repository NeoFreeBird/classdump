//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASLiveCaptionsViewController_h
#define TASLiveCaptionsViewController_h
@import Foundation;

#include "TASSpaceModelObserver-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class TFNViewController;

@interface TASLiveCaptionsViewController : TFNViewController <UICollectionViewDelegate, TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 captionsDisplaySpacerView;
    @40@0:8:16@24@32 noCaptionsContentView;
    @40@0:8:16@24@32 captionsDisplayView;
    @40@0:8:16@24@32 mixerDataSource;
    @40@0:8:16@24@32 spaceModel;
    @40@0:8:16@24@32 currentCaptionsStyle;
    @40@0:8:16@24@32 userDidPauseAutoScrolling;
}

@property (nonatomic) long long liveCaptionsMixerQueueSize;
@property (nonatomic) double liveCaptionsMixerStaleness;

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)captionAppearanceSettingsDidChange;
- (void)spaceModel:(id)model didReceiveClosedCaptionText:(id)text isTranscriptionFinal:(_Bool)final language:(id)language fromUser:(id)user;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TASLiveCaptionsViewController_h */
