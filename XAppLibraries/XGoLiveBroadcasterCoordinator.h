//
#ifndef XGoLiveBroadcasterCoordinator_h
#define XGoLiveBroadcasterCoordinator_h
@import Foundation;

@class NSObject;

@interface XGoLiveBroadcasterCoordinator : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 engine;
    @40@0:8:16@24@32 hostViewController;
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 $__lazy_storage_$_menuPresenter;
    @40@0:8:16@24@32 imagePipeline;
    @40@0:8:16@24@32 summaryViewController;
    @40@0:8:16@24@32 theaterModeExitView;
}

/* instance methods */
- (id)initWithEngine:(id)engine imagePipeline:(id)pipeline hostViewController:(id)controller delegate:(id)delegate;
- (void)presentMenu;
- (void)showEndedScreenWithPreviewSnapshotView:(id)view below:(id)below;
- (void)theaterModeExitTapped;
- (id)init;

@end

#endif /* XGoLiveBroadcasterCoordinator_h */
