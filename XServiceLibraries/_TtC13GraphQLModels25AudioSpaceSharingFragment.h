//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels25AudioSpaceSharingFragment_h
#define _TtC13GraphQLModels25AudioSpaceSharingFragment_h
@import Foundation;

@class GraphQLModels.Union GraphQLModels.AudioSpaceSharingFragment.SharedItem, GraphQLModels.UserResultsFragment, GraphQLScalars.NumericString, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GraphQLModels.AudioSpaceSharingFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 createdAtMs;
    GraphQLModels.Union GraphQLModels.AudioSpaceSharingFragment.SharedItem sharedItem;
    GraphQLScalars.NumericString sharingId;
    nominal type descriptor for Swift.Int64 updatedAtMs;
    GraphQLModels.UserResultsFragment userResults;
}

@end

#endif /* _TtC13GraphQLModels25AudioSpaceSharingFragment_h */
