//
#ifndef _TtC9PostAbout34PostAboutTrayContentViewController_h
#define _TtC9PostAbout34PostAboutTrayContentViewController_h
@import Foundation;

@class _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSDySS PostAbout.PostAboutDisclosureView, _$sSa -> PostAbout.PostAboutRowSource, _$sSa -> PostAbout.PostAboutTrayContentViewController.RowList, _$sSo7UILabelCSg, _$syycSg;

@interface PostAbout.PostAboutTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    __C.UILabel? headingLabel;
    Swift.Array -> PostAbout.PostAboutTrayContentViewController.RowList rowLists;
    Swift.Array -> PostAbout.PostAboutRowSource rowSources;
    Swift.Dictionary empty-list Swift.String PostAbout.PostAboutDisclosureView disclosures;
    (() -> ())? onDidFinishPresenting;
}

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9PostAbout34PostAboutTrayContentViewController_h */
