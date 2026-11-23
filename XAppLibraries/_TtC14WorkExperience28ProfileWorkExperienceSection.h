//
#ifndef _TtC14WorkExperience28ProfileWorkExperienceSection_h
#define _TtC14WorkExperience28ProfileWorkExperienceSection_h
@import Foundation;

@class Swift.Bool, WorkExperience.ProfileWorkExperienceView, WorkExperience.WorkExperienceCompanyAccount _$s_So16UIViewControllerCtScMYcc, WorkExperience.WorkExperienceStore, _$sSS, _$sSaySo8NSObject_pG, _$sSo16UIViewControllerCSgXw, _$syycSg, _TtCs12_SwiftObject;

@interface WorkExperience.ProfileWorkExperienceSection : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? presenter;
    (() -> ())? onHeightChange;
    Swift.String userID;
    WorkExperience.WorkExperienceStore store;
    WorkExperience.WorkExperienceCompanyAccount _$s_So16UIViewControllerCtScMYcc openCompanyProfile;
    WorkExperience.WorkExperienceEvent function type (escaping) report;
    WorkExperience.ProfileWorkExperienceView workView;
    [__C.NSObject] observers;
    Swift.Bool hasReportedImpression;
    Swift.Bool hasBeenInWindow;
    Swift.Bool hasPendingReload;
}

@end

#endif /* _TtC14WorkExperience28ProfileWorkExperienceSection_h */
