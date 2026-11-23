//
#ifndef _TtC14T1TwitterSwift40EditorEducationTrayContentViewController_h
#define _TtC14T1TwitterSwift40EditorEducationTrayContentViewController_h
@import Foundation;

@class T1TwitterSwift.EditorEducationHeroView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$syycSg;

@interface T1TwitterSwift.EditorEducationTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onPrimaryAction;
    Swift.String titleText;
    Swift.String bodyText;
    Swift.String primaryButtonTitle;
    T1TwitterSwift.EditorEducationHeroView heroView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift40EditorEducationTrayContentViewController_h */
