//
#ifndef T1LiveEventCarouselSubheaderViewController_h
#define T1LiveEventCarouselSubheaderViewController_h
@import Foundation;

#include "T1LiveEventCarousel.h"
#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventCarouselSubheaderViewControllerDelegate-Protocol.h"
#include "T1LiveEventCarouselViewController.h"
#include "T1LiveEventCarouselViewControllerDelegate-Protocol.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSLayoutConstraint, NSNumber, NSString, TFNViewController;

@interface T1LiveEventCarouselSubheaderViewController : TFNViewController <T1LiveEventCarouselViewControllerDelegate, TFNLayoutMetricsEnvironment, T1ResizableHeaderSubheader>

@property (retain, nonatomic) T1LiveEventCarouselViewController *carouselViewController;
@property (nonatomic) double desiredHeight;
@property (retain, nonatomic) NSLayoutConstraint *carouselHeightConstraint;
@property (retain, nonatomic) T1LiveEventCarousel *carousel;
@property (retain, nonatomic) NSNumber *selectedCarouselIndex;
@property (retain, nonatomic) T1LiveEventCarouselEntry *selectedCarouselEntry;
@property (weak, nonatomic) id <T1LiveEventCarouselSubheaderViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id subheaderInfo;
@property (copy, nonatomic) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithCarousel:(id)carousel imagePipeline:(id)pipeline userBadger:(id)badger scribe:(id)scribe impressionLogger:(id)logger;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (double)preferredHeight;
- (void)liveEventCarouselViewController:(id)controller didSelectCarouselEntry:(id)entry;
- (id)scribeContextForCarouselViewController:(id)controller tilePosition:(id)position;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventCarouselSubheaderViewController_h */
