//
#ifndef _TtC14WorkExperience43WorkExperienceListTrayContentViewController_h
#define _TtC14WorkExperience43WorkExperienceListTrayContentViewController_h
@import Foundation;

@class Swift.Bool, WorkExperience.WorkExperienceEditorSession, WorkExperience.WorkExperienceLoadingView ?, WorkExperience.WorkExperienceLogoTiles, WorkExperience.WorkExperienceRolesListView, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem8ListItemV7LeadingOMn ?, _$sSS;

@interface WorkExperience.WorkExperienceListTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceEditorSession session;
    WorkExperience.WorkExperienceLogoTiles logos;
    nominal type descriptor for XDesignSystem.ListItem.Leading ? $__lazy_storage_$_addLeading;
    WorkExperience.WorkExperienceRolesListView rolesView;
    Swift.String headerTitle;
    WorkExperience.WorkExperienceLoadingView ? $__lazy_storage_$_loadingView;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? $__lazy_storage_$_limitNoteView;
    Swift.Bool isAwaitingRoles;
    Swift.Bool isAwaitingAddSearch;
    Swift.Bool isShowingLimitNote;
    Swift.Bool hasTrayLanded;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)traitCollectionDidChange:(id)change;
- (void)storeDidFailToLoad:(id)load;
- (void)storeDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14WorkExperience43WorkExperienceListTrayContentViewController_h */
