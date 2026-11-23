//
#ifndef _TtC10XElections37ElectionsReportingUnitsViewController_h
#define _TtC10XElections37ElectionsReportingUnitsViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XDiffableCollection.DiffableView, XElections.ElectionsAdBanner ?, XElections.ElectionsRace, _$s20TwitterActionService0bC0CMn, _$sSS, _$sSa -> XElections.ElectionsReportingUnit, _$sScTyyt _$ss5NeverOMn ?, _$sSo23UIActivityIndicatorViewC, _$sySa -> XElections.ElectionsReportingUnit _$sGcSg;

@interface XElections.ElectionsReportingUnitsViewController : UIViewController { // (Swift)
    /* instance variables */
     empty-list Swift.Array -> XElections.ElectionsReportingUnit _$sGcSg onUnitsLoaded;
    Swift.String electionID;
    XElections.ElectionsRace race;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    XDiffableCollection.DiffableView diffableView;
    __C.UIActivityIndicatorView spinner;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Bool hasLoaded;
    Swift.Array -> XElections.ElectionsReportingUnit units;
    Swift.Bool isOnScreen;
    XElections.ElectionsAdBanner ? adBanner;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections37ElectionsReportingUnitsViewController_h */
