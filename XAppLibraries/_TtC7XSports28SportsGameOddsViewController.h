//
#ifndef _TtC7XSports28SportsGameOddsViewController_h
#define _TtC7XSports28SportsGameOddsViewController_h
@import Foundation;

@class UIViewController, XDiffableCollection.DiffableView, XSports.SportsGameOddsHeaderView, XSports.SportsGameOddsSectionFactory.Input input_ XSports.SportsGameOddsViewController.Teams teams XSports.SportsGamePlayerPropsState _$sSg11playerPropstSg, XSports.SportsGameOddsState ?, XSports.SportsGameOddsViewController.Teams, XSports.SportsGamePlayerPropsState ?, _$syycSg;

@interface XSports.SportsGameOddsViewController : UIViewController { // (Swift)
    /* instance variables */
    (() -> ())? onSportsbookClick;
    (() -> ())? onGameLinesImpression;
    XSports.SportsGameOddsHeaderView headerView;
    XDiffableCollection.DiffableView diffableView;
    XSports.SportsGameOddsState ? odds;
    XSports.SportsGamePlayerPropsState ? playerProps;
    XSports.SportsGameOddsViewController.Teams teams;
    XSports.SportsGameOddsSectionFactory.Input input_ XSports.SportsGameOddsViewController.Teams teams XSports.SportsGamePlayerPropsState _$sSg11playerPropstSg rendered;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports28SportsGameOddsViewController_h */
