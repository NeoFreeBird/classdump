//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL22SportsHubEventFragment_h
#define _TtC14XSportsGraphQL22SportsHubEventFragment_h
@import Foundation;

@class XSportsGraphQL.SportsHubEventFragment.Branding, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars19SportsHubEventPhaseOMn, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SportsHubEventCardFragment, _$sSa -> XSportsGraphQL.SportsHubEventFragment.Tabs, _TtCs12_SwiftObject;

@interface XSportsGraphQL.SportsHubEventFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.SportsHubEventFragment.Branding branding;
    Swift.String defaultTabKey;
    nominal type descriptor for GraphQLScalars.NumericString endsAtMs;
    nominal type descriptor for GraphQLScalars.NumericString eventRestId;
    Swift.Array -> XSportsGraphQL.SportsHubEventCardFragment featured;
    Swift.String league;
    Swift.String name;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.SportsHubEventPhase phase;
    nominal type descriptor for GraphQLScalars.NumericString refreshIntervalMs;
    Swift.String? shortName;
    nominal type descriptor for GraphQLScalars.NumericString startsAtMs;
    Swift.Array -> XSportsGraphQL.SportsHubEventFragment.Tabs tabs;
    Swift.String takeoverKey;
}

@end

#endif /* _TtC14XSportsGraphQL22SportsHubEventFragment_h */
