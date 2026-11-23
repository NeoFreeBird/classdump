//
#ifndef _TtC14WorkExperience52WorkExperienceCompanySearchTrayContentViewController_h
#define _TtC14WorkExperience52WorkExperienceCompanySearchTrayContentViewController_h
@import Foundation;

@class Swift.Bool, WorkExperience.WorkExperienceCompanySearchTrayContentViewController _$s_ -> WorkExperience.WorkExperienceCompany _$stc, WorkExperience.WorkExperienceCompanySearchTrayContentViewController.Listing, WorkExperience.WorkExperienceCompanySearchTrayContentViewController.Mode, WorkExperience.WorkExperienceEditorSession, WorkExperience.WorkExperienceLogoTiles, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem23TrayHeaderConfigurationVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem8ListItemV7LeadingOMn ?, _$s13XDesignSystem9ListItemsCMn, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSiSg;

@interface WorkExperience.WorkExperienceCompanySearchTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceCompanySearchTrayContentViewController.Mode mode;
    WorkExperience.WorkExperienceEditorSession session;
    WorkExperience.WorkExperienceCompanySearchTrayContentViewController  first-element-marker  -> WorkExperience.WorkExperienceCompany _$stc onSelect;
    WorkExperience.WorkExperienceLogoTiles logos;
    nominal type descriptor for XDesignSystem.TrayHeaderConfiguration headerConfiguration;
    Swift.Bool refusesEditsPastLimit;
    nominal type descriptor for XDesignSystem.Input searchInput;
    nominal type descriptor for XDesignSystem.ListItems results;
    nominal type descriptor for XDesignSystem.ListItem.Leading ? $__lazy_storage_$_addNamedLeading;
    WorkExperience.WorkExperienceCompanySearchTrayContentViewController.Listing listing;
    Swift.String listedQuery;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? searchTask;
    Swift.Bool hasAutoFocused;
    Swift.Int? lengthOfTextNotedAtItsLimit;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? $__lazy_storage_$_textLimitNoteView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14WorkExperience52WorkExperienceCompanySearchTrayContentViewController_h */
