//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports44BaseballAtBatDetailTrayContentViewController_h
#define _TtC7XSports44BaseballAtBatDetailTrayContentViewController_h
@import Foundation;

@class XSports.BaseballAtBatBattersBoxCard, XSports.BaseballAtBatDetail, XSports.BaseballAtBatMatchupView, XSports.BaseballPitchListView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC;

@interface XSports.BaseballAtBatDetailTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XSports.BaseballAtBatDetail detail;
    __C.UILabel inningLabel;
    __C.UILabel descriptionLabel;
    XSports.BaseballAtBatMatchupView matchupView;
    XSports.BaseballAtBatBattersBoxCard battersBoxCard;
    XSports.BaseballPitchListView pitchesView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports44BaseballAtBatDetailTrayContentViewController_h */
