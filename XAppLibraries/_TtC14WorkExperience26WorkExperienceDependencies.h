//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
    (__C.UIViewController) -> () presentPremiumUpsell;
    WorkExperience.WorkExperienceCompanyAccount _$s_So16UIViewControllerCtScMYcc openCompanyProfile;
    (Swift.String) -> () showErrorMessage;
    WorkExperience.WorkExperienceEvent function type (escaping) report;
}

@end

#endif /* _TtC14WorkExperience26WorkExperienceDependencies_h */
