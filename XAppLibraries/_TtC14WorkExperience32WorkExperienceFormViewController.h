//
#ifndef _TtC14WorkExperience32WorkExperienceFormViewController_h
#define _TtC14WorkExperience32WorkExperienceFormViewController_h
@import Foundation;

@class Swift.Bool, WorkExperience.WorkExperienceChosenLogo ?, WorkExperience.WorkExperienceCompany, WorkExperience.WorkExperienceEditorSession, WorkExperience.WorkExperienceFormViewController.FooterNote ?, WorkExperience.WorkExperienceFormViewController.MissingInput ?, WorkExperience.WorkExperienceFormViewController.Phase, WorkExperience.WorkExperienceLogoButton ?, WorkExperience.WorkExperienceLogoPicker, WorkExperience.WorkExperienceLogoTiles, WorkExperience.WorkExperienceMonth ?, WorkExperience.WorkExperienceRole.EmploymentType ?, WorkExperience.WorkExperienceSaveSequence, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem9ListItemsCMn, _$sSS;

@interface WorkExperience.WorkExperienceFormViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceEditorSession session;
    WorkExperience.WorkExperienceSaveSequence saveSequence;
    Swift.Bool refusesEditsPastLimit;
    WorkExperience.WorkExperienceCompany initialCompany;
    WorkExperience.WorkExperienceLogoTiles logos;
    WorkExperience.WorkExperienceLogoPicker logoPicker;
    WorkExperience.WorkExperienceLogoButton ? $__lazy_storage_$_logoButton;
    Swift.String headerTitle;
    Swift.String saveTitle;
    WorkExperience.WorkExperienceCompany company;
    WorkExperience.WorkExperienceChosenLogo ? chosenLogo;
    WorkExperience.WorkExperienceRole.EmploymentType ? employmentType;
    WorkExperience.WorkExperienceMonth ? start;
    WorkExperience.WorkExperienceMonth ? end;
    Swift.Bool isCurrent;
    WorkExperience.WorkExperienceFormViewController.Phase phase;
    Swift.Bool lastSaveEnabled;
    WorkExperience.WorkExperienceFormViewController.MissingInput ? lastMissingInput;
    WorkExperience.WorkExperienceFormViewController.FooterNote ? footerNote;
    nominal type descriptor for XDesignSystem.ListItems companyList;
    nominal type descriptor for XDesignSystem.Input titleInput;
    nominal type descriptor for XDesignSystem.ListItems detailsList;
    nominal type descriptor for XDesignSystem.Input locationInput;
    nominal type descriptor for XDesignSystem.ListItems deleteList;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? $__lazy_storage_$_footerNoteView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14WorkExperience32WorkExperienceFormViewController_h */
