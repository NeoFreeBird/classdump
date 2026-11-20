//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14TwitterUISwift14FollowButtonV29ViewModel_h
#define _TtCC14TwitterUISwift14FollowButtonV29ViewModel_h
@import Foundation;

@class Swift.Bool, TAPAccount0A11Perspective_14TFSTwitterCore0C29AccountFeatureSwitchProvidingAC0cE9FollowingAC0cE12ScribeAccesspSg, TFSTwitterCore0A19UserDataSourceModel_pSg, TwitterUISwift.FollowButtonV2.ActionPerformer, TwitterUISwift.FollowButtonV2.Style, TwitterUISwift.FollowButtonV2.ViewModel.Phase, TwitterUISwift.FollowButtonV2ViewModelOutput ?, _$s14TFSTwitterCore19TwitterRelationshipCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSo21TUITwitterUserContextCSg, _$sSo23TFSTwitterScribeContextCSg, _$sSo31TFSTwitterPromotedEventMetadata_pSg, _$sSo8NSNumberCSg, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface TwitterUISwift.FollowButtonV2.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterUISwift.FollowButtonV2ViewModelOutput ? output;
    Swift.Bool confirmUnfollow;
    Swift.Bool confirmBlock;
    Swift.Bool showUnblocked;
    Swift.Bool showDMBlocked;
    __C.TFSTwitterPromotedEventMetadata? promotedMetadata;
    __C.TFSTwitterScribeContext? scribeContext;
    TFSTwitterCore0A19UserDataSourceModel_pSg userDataSource;
    __C.TUITwitterUserContext? userContext;
    TAPAccount0A11Perspective_14TFSTwitterCore0C29AccountFeatureSwitchProvidingAC0cE9FollowingAC0cE12ScribeAccesspSg account;
    TwitterUISwift.FollowButtonV2.Style style;
    TwitterUISwift.FollowButtonV2.ActionPerformer actionPerformer;
    TwitterUISwift.FollowButtonV2.ViewModel.Phase phase;
    nominal type descriptor for TFSTwitterCore.TwitterRelationship ? standinRelationship;
    __C.NSNumber? standinProtectedUser;
    __C.NSObject? dataSourceObserver;
    nominal type descriptor for Dispatch.DispatchWorkItem ? settleTimerWorkItem;
}

@end

#endif /* _TtCC14TwitterUISwift14FollowButtonV29ViewModel_h */
