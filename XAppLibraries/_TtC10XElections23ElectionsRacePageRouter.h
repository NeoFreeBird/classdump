//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections23ElectionsRacePageRouter_h
#define _TtC10XElections23ElectionsRacePageRouter_h
@import Foundation;

@class _$s20TwitterActionService0bC0CMn, _$sSS, _$sSo16TIPImagePipelineCSg, _$sySS_SSSo16UIViewControllerCtScMYcc, _$sySo16UIViewControllerCScMYccSg, _TtCs12_SwiftObject;

@interface XElections.ElectionsRacePageRouter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String electionID;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.TIPImagePipeline? imagePipeline;
    @Swift.MainActor (Swift.String, Swift.String, __C.UIViewController) -> () openProfile;
    (@Swift.MainActor (__C.UIViewController) -> ())? openDataProvider;
}

@end

#endif /* _TtC10XElections23ElectionsRacePageRouter_h */
