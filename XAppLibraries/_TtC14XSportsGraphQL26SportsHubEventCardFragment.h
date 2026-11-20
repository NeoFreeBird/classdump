//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL26SportsHubEventCardFragment_h
#define _TtC14XSportsGraphQL26SportsHubEventCardFragment_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18SportsHubGameStateOMn, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SportsHubCompetitorFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.SportsHubEventCardFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XSportsGraphQL.SportsHubCompetitorFragment competitors;
    nominal type descriptor for GraphQLScalars.NumericString eventRestId;
    Swift.String league;
    Swift.String? logoDarkUrl;
    Swift.String? logoLightUrl;
    nominal type descriptor for GraphQLScalars.NumericString startsAtMs;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.SportsHubGameState state;
    Swift.String? statusText;
    Swift.String? title;
    Swift.String url;
}

@end

#endif /* _TtC14XSportsGraphQL26SportsHubEventCardFragment_h */
