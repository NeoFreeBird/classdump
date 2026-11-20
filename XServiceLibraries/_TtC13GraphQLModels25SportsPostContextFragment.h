//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels25SportsPostContextFragment_h
#define _TtC13GraphQLModels25SportsPostContextFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.SportsPostContextState, GraphQLModels.SportsPostContextFragment.GameId, GraphQLScalars.NumericString ?, _$sSS, _$sSa -> GraphQLModels.SportsPostContextFragment.Competitors, _TtCs12_SwiftObject;

@interface GraphQLModels.SportsPostContextFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.SportsPostContextFragment.Competitors competitors;
    GraphQLModels.SportsPostContextFragment.GameId gameId;
    Swift.String league;
    GraphQLScalars.NumericString ? scheduledAtMs;
    GraphQLModels.Enumeration GraphQLScalars.SportsPostContextState state;
    Swift.String statusText;
    Swift.String title;
    Swift.String url;
}

@end

#endif /* _TtC13GraphQLModels25SportsPostContextFragment_h */
