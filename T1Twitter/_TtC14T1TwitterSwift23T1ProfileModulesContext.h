//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift23T1ProfileModulesContext_h
#define _TtC14T1TwitterSwift23T1ProfileModulesContext_h
@import Foundation;

@class NSObject, TwitterProfileModules0bC8Features_p, _$s18TwitterCommunities0B7ContextCMn ?, _$s21TwitterProfileModules0B18ScribingCapabilityMp, _$s21TwitterProfileModules0bC21NavigationContextTypeOMn, _$s21TwitterProfileModules0bC3APIMp, _$s21TwitterProfileModules16ModuleNavigationMp, _$sSS, _$sSo16TIPImagePipelineC;

@interface T1TwitterSwift.T1ProfileModulesContext : NSObject { // (Swift)
    /* instance variables */
    TwitterProfileModules0bC8Features_p features;
    nominal type descriptor for TwitterProfileModules.ProfileModulesNavigationContextType navigationContext;
    __C.TIPImagePipeline imagePipeline;
    protocol descriptor for TwitterProfileModules.ProfileModulesAPI profileModulesAPI;
    protocol descriptor for TwitterProfileModules.ProfileScribingCapability scribeCapability;
    Swift.String accountID;
    Swift.String userID;
    protocol descriptor for TwitterProfileModules.ModuleNavigation moduleNavigation;
    nominal type descriptor for TwitterCommunities.CommunitiesContext ? communitiesContext;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift23T1ProfileModulesContext_h */
