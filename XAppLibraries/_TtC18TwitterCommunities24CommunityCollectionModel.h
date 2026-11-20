//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterCommunities24CommunityCollectionModel_h
#define _TtC18TwitterCommunities24CommunityCollectionModel_h
@import Foundation;

@class DispatchQueue, NSObject, TwitterCommunities.CommunitiesContext ?, TwitterCommunities.Observers TwitterCommunities.CommunityCollectionModelObserver, TwitterCommunities.RateLimitingLoader TwitterCommunities.ActionLoader TwitterCommunities.FetchCommunities _$sGGSg ->, _$s13GraphQLModels0A7QLSliceV4InfoVMn _$s14TFSTwitterCore16TwitterCommunityOMn _$s_GSg ->, _$s13TFSObservable15ObservableInputVMn _$sSbSg, _$s13TFSObservable16ObservableEntityCMn _$sSbSg, _$sSD -> TwitterCommunities.CommunityModel.InstanceReference _$sXl, _$sSa -> TwitterCommunities.CommunityModel ?, _$sSbSg, _$syXlSg;

@interface TwitterCommunities.CommunityCollectionModel : NSObject { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunitiesContext ? context;
    DispatchQueue syncQueue;
    Swift.Array -> TwitterCommunities.CommunityModel ? unsyncedCommunityModels;
    Swift.Bool? unsync_hasCommunityMemberships;
    nominal type descriptor for TFSObservable.ObservableEntity Swift.Bool? hasCommunityMembershipsObservable;
    nominal type descriptor for TFSObservable.ObservableInput Swift.Bool? hasCommunityMembershipsInput;
    nominal type descriptor for GraphQLModels.GraphQLSlice.Info nominal type descriptor for TFSTwitterCore.TwitterCommunity _$s_GSg -> unsyncedCommunitiesSliceInfo;
    TwitterCommunities.RateLimitingLoader TwitterCommunities.ActionLoader TwitterCommunities.FetchCommunities _$sGGSg -> $__lazy_storage_$_communitiesLoader;
    Swift.AnyObject? contextObserver;
    Swift.Dictionary -> TwitterCommunities.CommunityModel.InstanceReference _$sXl communityModelObserverHandles;
    TwitterCommunities.Observers TwitterCommunities.CommunityCollectionModelObserver observers;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterCommunities24CommunityCollectionModel_h */
