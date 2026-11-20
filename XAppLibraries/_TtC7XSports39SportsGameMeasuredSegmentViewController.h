//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports39SportsGameMeasuredSegmentViewController_h
#define _TtC7XSports39SportsGameMeasuredSegmentViewController_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIViewController, XSports.SportsGameAdBannerHeader ?, XSports.SportsGameSegmentContentType, _$sSo12UIScrollViewC;

@interface XSports.SportsGameMeasuredSegmentViewController : UIViewController <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    XSports.SportsGameSegmentContentType content;
    Swift.Bool prefersBottomRest;
    XSports.SportsGameAdBannerHeader ? adBanner;
    __C.UIScrollView scrollView;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports39SportsGameMeasuredSegmentViewController_h */
