//
#ifndef _TtC10XElections31ElectionsRaceListViewController_h
#define _TtC10XElections31ElectionsRaceListViewController_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIViewController, XDiffableCollection.DiffableView, XElections.ElectionsChamberSummaryView, XElections.ElectionsRaceListRouter, XElections.ElectionsRaceListState ?, XElections.ElectionsRaceListStore, _$s13XDesignSystem5InputCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineCSg, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XElections.ElectionsRaceListViewController : UIViewController <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    XElections.ElectionsRaceListStore store;
    XElections.ElectionsRaceListRouter router;
    __C.TIPImagePipeline? imagePipeline;
    XElections.ElectionsRaceListState ? renderedState;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    XDiffableCollection.DiffableView diffableView;
    XElections.ElectionsChamberSummaryView summaryView;
    __C.UIView sheetView;
    __C.UIActivityIndicatorView spinner;
    __C.UILabel messageLabel;
    nominal type descriptor for XDesignSystem.Input searchInput;
    __C.UILabel noMatchesLabel;
    Swift.Bool isSearching;
    (() -> ())? onSearchActiveChange;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections31ElectionsRaceListViewController_h */
