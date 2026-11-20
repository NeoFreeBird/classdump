//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomSharingsViewController_h
#define T1VoiceRoomSharingsViewController_h
@import Foundation;

#include "T1VoiceRoomSharingsViewControllerDelegate-Protocol.h"
#include "TASSharingObserver-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class TASSharing, UIViewController;

@interface T1VoiceRoomSharingsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, TASSharingObserver, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *spaceModel;
    NSNumber"16@0:8 *needsReload;
    NSNumber"16@0:8 *observingTweets;
    NSNumber"16@0:8 *lastStatusChangedUpdate;
    NSNumber"16@0:8 *itemViewModels;
    NSNumber"16@0:8 *_currentItemViewModel;
    NSNumber"16@0:8 *contentView;
    NSNumber"16@0:8 *pageControl;
    NSNumber"16@0:8 *collectionView;
    NSNumber"16@0:8 *summaryLabel;
    NSNumber"16@0:8 *needsUpdatePreferredContentSize;
    NSNumber"16@0:8 *lastViewBounds;
}

@property (nonatomic, weak) id <T1VoiceRoomSharingsViewControllerDelegate> delegate;
@property (nonatomic, retain) TASSharing *sharing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } preferredSummaryLabelSize;
@property (nonatomic) double contentVisibilityPercentage;

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)sharingDidUpdateSharedItemViewModels:(id)models;
- (id)initWithSpaceModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)statusChanged:(id)changed;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)pageControlDidChangeValue:(id)value;
- (void)labelDidTap:(id)tap;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomSharingsViewController_h */
