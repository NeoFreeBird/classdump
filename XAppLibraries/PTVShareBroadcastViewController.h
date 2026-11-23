//
#ifndef PTVShareBroadcastViewController_h
#define PTVShareBroadcastViewController_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastThumbnailManagerObserver-Protocol.h"
#include "PTVOverflowContentViewController-Protocol.h"
#include "PTVShareBroadcastViewControllerDelegate-Protocol.h"
#include "PTVShareBroadcastViewDelegate-Protocol.h"

@class NSString, UIViewController;

@interface PTVShareBroadcastViewController : UIViewController <PTVOverflowContentViewController, PTVShareBroadcastViewDelegate, PTVBroadcastThumbnailManagerObserver> {
    /* instance variables */
    PTVShareBroadcastViewController *_weakSelf;
}

@property (nonatomic) double initialTimeCode;
@property (nonatomic) _Bool hasConfiguredInitialTimeCode;
@property (nonatomic) _Bool hasLoadedThumbnails;
@property (nonatomic) _Bool hasViewAppeared;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (weak, nonatomic) id <PTVShareBroadcastViewControllerDelegate> delegate;
@property (readonly, nonatomic) double selectedTimecode;
@property (readonly, nonatomic) _Bool shareHighlightSelectedByDefault;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentVideoPlayerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)overflowContentViewControllerDismissButtonTitle;
- (void)shareBroadcastViewDidSelectShareURL:(id)url fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidSelectComposeTweet:(id)tweet fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidSelectComposeDirectMessage:(id)message fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidTapEmptySpace:(id)space;
- (void)broadcastThumbnailManagerDidLoadThumbnails:(id)thumbnails;
- (void)broadcastThumbnailManagerDidFailToLoadThumbnails:(id)thumbnails;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initializeShareBroadcastView;
- (_Bool)shouldFillScrubbingViewByDefault;
- (id)initWithBroadcastController:(id)controller delegate:(id)delegate shareHighlightSelectedByDefault:(_Bool)_default currentVideoPlayerSize:(struct CGSize { double x0; double x1; })size;
- (id)shareBroadcastView;
- (void)didTapEmptySpace;
- (void)didSelectComposeTweetFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)didSelectComposeDirectMessageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)didSelectShareURLFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)setupShareView;
- (void)configureInitialTimeCodeIfNeeded;
- (void)configureHighlightShareTimeFromCurrentVideoPosition:(double)position;
- (double)calculateInitialTimeCodeFromVideoPosition:(double)position;
- (void)didLoadThumbnails;
- (void)didFailToLoadThumbnails;

@end

#endif /* PTVShareBroadcastViewController_h */
