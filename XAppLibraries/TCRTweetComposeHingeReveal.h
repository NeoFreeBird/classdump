//
#ifndef TCRTweetComposeHingeReveal_h
#define TCRTweetComposeHingeReveal_h
@import Foundation;

#include "TCRHingePassthroughView.h"

@class NSArray, NSHashTable, NSMapTable, NSObject, UIView, UIViewController;

@interface TCRTweetComposeHingeReveal : NSObject {
    /* instance variables */
    UIViewController *_containerViewController;
    UIView *_contentView;
    _Bool _composerActive;
    NSArray *_divisionFrames;
    _Bool _revealingUnderlyingContent;
    NSMapTable *_chromeSnapshots;
    NSHashTable *_hiddenDimmingViews;
    TCRHingePassthroughView *_passthroughView;
}

/* instance methods */
- (id)init;
- (void)installUpdatesOnView:(id)view;
- (void)layoutContentView:(id)view containerView:(id)view childViewController:(id)controller;
- (void)updateContainerViewController:(id)controller contentView:(id)view composerActive:(_Bool)active;
- (void)containerViewControllerDidAppear:(id)appear contentView:(id)view transitionCoordinator:(id)coordinator;
- (void)_refresh;
- (_Bool)_updateDivisionFramesForContainerView:(id)view;
- (void)_updateReveal;
- (void)_applyUncoveredAreaReveal;
- (id)_underlyingViewForHitsFromHost:(id)host;
- (void)_installPassthroughOnHost:(id)host pane:(id)pane underlyingView:(id)view;
- (void)_removePassthrough;
- (void)_hideDimmingViewsInView:(id)view depth:(long long)depth dimClass:(Class)_class;
- (void)_hideWindowDimmingViews;
- (void)_clearChromeOnView:(id)view;
- (void)_restoreCoveredChrome;

@end

#endif /* TCRTweetComposeHingeReveal_h */
