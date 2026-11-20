//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels12ListFragment_h
#define _TtC13GraphQLModels12ListFragment_h
@import Foundation;

@class GraphQLModels.ApiMediaFragment ?, GraphQLModels.Enumeration GraphQLScalars.ListAccessibility ?, GraphQLModels.UserResultsFragment ?, GraphQLScalars.NumericString, _$sSSSg, _$sSaySSGSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ListFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.ListAccessibility ? accessibility;
    GraphQLModels.ApiMediaFragment ? customBannerMedia;
    GraphQLModels.ApiMediaFragment ? defaultBannerMedia;
    Swift.String? description;
    [Swift.String]? facepileUrls;
    Swift.String? followersContext;
    Swift.Bool? following;
    nominal type descriptor for Swift.Int64 ? memberCount;
    Swift.String? membersContext;
    Swift.Bool? muting;
    Swift.String? name;
    GraphQLModels.UserResultsFragment ? ownerResults;
    Swift.Bool? pinning;
    GraphQLScalars.NumericString restId;
    nominal type descriptor for Swift.Int64 ? subscriberCount;
}

@end

#endif /* _TtC13GraphQLModels12ListFragment_h */
