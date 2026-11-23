//
#ifndef T1TrendsLandingViewController_h
#define T1TrendsLandingViewController_h
@import Foundation;

#include "T1URTViewControllerLoadingDelegate-Protocol.h"

@class TFNViewController, UIScrollView;

@interface T1TrendsLandingViewController : TFNViewController <T1URTViewControllerLoadingDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *ignoreInteractionEventsDuringPresentation;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *traceRepository;
    NSNumber"16@0:8 *features;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *disposeBag;
    NSNumber"16@0:8 *urtChildViewController;
    NSNumber"16@0:8 *personalizationOptionsBar;
    NSNumber"16@0:8 *headerBackgroundView;
    NSNumber"16@0:8 *personalizedButton;
    NSNumber"16@0:8 *personalizedButtonPadding;
}

@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic, readonly) _Bool tfn_ignoreInteractionEventsDuringPresentation;

/* instance methods */
- (void)urtViewController:(id)controller didLoadTimelineInitially:(_Bool)initially;
- (id)initWithFeatures:(id)features account:(id)account scribeContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)urtViewControllerDidCompleteInitialRenderWithNotification:(id)notification;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)showSettings;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1TrendsLandingViewController_h */
