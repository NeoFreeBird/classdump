//
#ifndef _TtC10XElections27ElectionsFeedViewController_h
#define _TtC10XElections27ElectionsFeedViewController_h
@import Foundation;

@class UIViewController, XElections.ElectionsAd ?, XElections.ElectionsAdStore ?, XElections.ElectionsFeedKind, XElections.ElectionsFeedSurface, XElections.ElectionsKeyRacesSource ?, XElections.ElectionsScribe, XElections.ElectionsSegmentedControl, _$s20TwitterActionService0bC0CMn, _$sSD -> XElections.ElectionsFeedKind String?, _$sSD -> XElections.ElectionsFeedKind XElections.ElectionsFeedHeader, _$sSD -> XElections.ElectionsFeedKind _$sSo16UIViewControllerC, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo16UIViewControllerCSS_ XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc, _$sSo23UIActivityIndicatorViewC;

@interface XElections.ElectionsFeedViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String eventID;
    XElections.ElectionsFeedSurface surface;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.UIViewControllerSwift.String first-element-marker  XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc makeFeed;
    XElections.ElectionsScribe scribe;
    XElections.ElectionsKeyRacesSource ? keyRaces;
    XElections.ElectionsAdStore ? ads;
    XElections.ElectionsAd ? ad;
    Swift.Dictionary -> XElections.ElectionsFeedKind XElections.ElectionsFeedHeader headers;
    XElections.ElectionsSegmentedControl kindControl;
    __C.UIActivityIndicatorView spinner;
    XElections.ElectionsFeedKind activeKind;
    Swift.Dictionary -> XElections.ElectionsFeedKind String? timelineIDs;
    Swift.Dictionary -> XElections.ElectionsFeedKind __C.UIViewController feeds;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
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
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections27ElectionsFeedViewController_h */
