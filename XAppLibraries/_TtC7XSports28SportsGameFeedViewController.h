//
#ifndef _TtC7XSports28SportsGameFeedViewController_h
#define _TtC7XSports28SportsGameFeedViewController_h
@import Foundation;

@class UIViewController, XSports.SegmentedControlView, XSports.SportsGameFeedContent XSports.SportsGameFeedSource _$s_ XSports.SportsGameFeedKind _$stScMYccSg, XSports.SportsGameFeedKind, XSports.SportsGameFeedKind _$scSg ->, XSports.SportsGameFeedKind _$syScMYcc, XSports.SportsGameFeedSource, _$sSD -> XSports.SportsGameFeedKind XSports.SportsGameFeedContent, _$sSo12UIScrollViewC;

@interface XSports.SportsGameFeedViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsGameFeedKind _$scSg -> onActiveFeedChange;
    XSports.SportsGameFeedKind activeKind;
    XSports.SportsGameFeedContent XSports.SportsGameFeedSource  first-element-marker  XSports.SportsGameFeedKind _$stScMYccSg provider;
    XSports.SportsGameFeedKind _$syScMYcc resolveKind;
    XSports.SportsGameFeedSource source;
    Swift.Dictionary -> XSports.SportsGameFeedKind XSports.SportsGameFeedContent contents;
    XSports.SegmentedControlView kindControl;
    __C.UIScrollView placeholderScrollView;
}

@property (nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports28SportsGameFeedViewController_h */
