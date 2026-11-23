//
#ifndef _TtC7XSports27SportsPlayerLeadersListView_h
#define _TtC7XSports27SportsPlayerLeadersListView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XDiffableCollection.DiffableView, XSports.SportsPlayerLeadersListView.Scope, _$s13XDesignSystem5InputCMn ?, _$sSS, _$sSa -> XSports.SportsPlayerLeadersState.Group, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC, _$sySScSg, __C.NSDirectionalEdgeInsets ?;

@interface XSports.SportsPlayerLeadersListView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectAthlete;
    ((Swift.String) -> ())? onDisplayAthlete;
    ((Swift.String) -> ())? onPrewarmAthlete;
    ((Swift.String) -> ())? onSelectGroup;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsPlayerLeadersListView.Scope scope;
    __C.NSDirectionalEdgeInsets ? sectionInsets;
    nominal type descriptor for XDesignSystem.Input ? searchInput;
    XDiffableCollection.DiffableView diffableView;
    __C.UILabel emptyLabel;
    Swift.Array -> XSports.SportsPlayerLeadersState.Group groups;
    Swift.String searchIdentifier;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports27SportsPlayerLeadersListView_h */
