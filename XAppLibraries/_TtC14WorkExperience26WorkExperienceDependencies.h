//
#ifndef _TtC14WorkExperience26WorkExperienceDependencies_h
#define _TtC14WorkExperience26WorkExperienceDependencies_h
@import Foundation;

@class WorkExperience.WorkExperienceCompanyAccount _$s_So16UIViewControllerCtScMYcc, WorkExperience.WorkExperienceCompanySearching, WorkExperience.WorkExperienceStore, _$sSbyc, _$sSo16TIPImagePipelineCSg, _$sySSc, _$sySo16UIViewControllerCc, _TtCs12_SwiftObject;

@interface WorkExperience.WorkExperienceDependencies : Swift._SwiftObject { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceStore store;
    WorkExperience.WorkExperienceCompanySearching companySearch;
    __C.TIPImagePipeline? imagePipeline;
    () -> Swift.Bool isViewerEntitledToAddExperience;
    () -> Swift.Bool isOffline;
    (__C.UIViewController) -> () presentPremiumUpsell;
    WorkExperience.WorkExperienceCompanyAccount _$s_So16UIViewControllerCtScMYcc openCompanyProfile;
    (Swift.String) -> () showErrorMessage;
    WorkExperience.WorkExperienceEvent function type (escaping) report;
}

@end

#endif /* _TtC14WorkExperience26WorkExperienceDependencies_h */
