//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels25TimelineTombstoneFragment_h
#define _TtC13GraphQLModels25TimelineTombstoneFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineTombstoneDisplayType, GraphQLModels.TimelineTombstoneInfoFragment ?, GraphQLModels.TimelineTweetFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineTombstoneFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.TimelineTombstoneDisplayType timelineTombstoneDisplayType;
    GraphQLModels.TimelineTweetFragment ? timelineTombstoneTweet;
    GraphQLModels.TimelineTombstoneInfoFragment ? tombstoneInfo;
}

@end

#endif /* _TtC13GraphQLModels25TimelineTombstoneFragment_h */
