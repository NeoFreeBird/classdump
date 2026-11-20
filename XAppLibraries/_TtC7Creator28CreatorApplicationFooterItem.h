//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7Creator28CreatorApplicationFooterItem_h
#define _TtC7Creator28CreatorApplicationFooterItem_h
@import Foundation;

@class Creator.CreatorApplicationFooterItemAdapter.ApplicationFormFooterCell ?, NSObject, Swift.Bool, _$sSS, _$syycSg;

@interface Creator.CreatorApplicationFooterItem : NSObject { // (Swift)
    /* instance variables */
    Swift.Bool isApplyEnabled;
    (() -> ())? onViewCreatorAgreement;
    (() -> ())? onApply;
    Swift.String submitApplicationTermsAndConditionsHTMLText;
    Swift.String termsAndConditionsTitle;
    Swift.String applicationApplyButtonTitle;
    Creator.CreatorApplicationFooterItemAdapter.ApplicationFormFooterCell ? backingCell;
}

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC7Creator28CreatorApplicationFooterItem_h */
