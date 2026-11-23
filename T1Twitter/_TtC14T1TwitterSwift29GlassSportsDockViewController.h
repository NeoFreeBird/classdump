//
#ifndef _TtC14T1TwitterSwift29GlassSportsDockViewController_h
#define _TtC14T1TwitterSwift29GlassSportsDockViewController_h
@import Foundation;

#include "_TtP14T1TwitterSwift24TabBottomSegmentDockable_-Protocol.h"

@class T1TwitterSwift.GlassSportsDockViewController.FeaturedContentView ?, T1TwitterSwift.GlassSportsDockViewController.LogoLoader, TFNViewController, _$s7XSports27SportsFloatingGameCardStateVMn ?, _$s7XSports28SportsFloatingGameCardSourceMp, _$s9GlassDock0B14ScoreboardViewCMn, _$syycSg;

@interface T1TwitterSwift.GlassSportsDockViewController : TFNViewController <T1TwitterSwift.TabBottomSegmentDockable> { // (Swift)
    /* instance variables */
    nominal type descriptor for GlassDock.DockScoreboardView scoreboardView;
    (() -> ())? onExpand;
    (() -> ())? onClose;
    (() -> ())? onDidDismiss;
    protocol descriptor for XSports.SportsFloatingGameCardSource source;
    T1TwitterSwift.GlassSportsDockViewController.FeaturedContentView ? featuredContentView;
    T1TwitterSwift.GlassSportsDockViewController.LogoLoader awayLogo;
    T1TwitterSwift.GlassSportsDockViewController.LogoLoader homeLogo;
    nominal type descriptor for XSports.SportsFloatingGameCardState ? state;
}

@property (nonatomic, readonly) double contentHeight;

/* instance methods */
- (void)bottomSegmentDidDismiss;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift29GlassSportsDockViewController_h */
