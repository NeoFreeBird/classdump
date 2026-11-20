//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL15NHLTeamFragment4Info_h
#define _TtCC14XSportsGraphQL15NHLTeamFragment4Info_h
@import Foundation;

@class XSportsGraphQL.NHLLeagueRefFragment ?, XSportsGraphQL.SportsDataImageFragment ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.NHLTeamFragment.Info.Colors, _$sSa -> XSportsGraphQL.SportsDataImageFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLTeamFragment.Info : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String abbreviation;
    Swift.Array -> XSportsGraphQL.NHLTeamFragment.Info.Colors colors;
    XSportsGraphQL.NHLLeagueRefFragment ? conference;
    XSportsGraphQL.NHLLeagueRefFragment ? division;
    Swift.Array -> XSportsGraphQL.SportsDataImageFragment images;
    XSportsGraphQL.SportsDataImageFragment ? logo;
    Swift.String? market;
    Swift.String name;
    Swift.String? shortName;
    Swift.String? sportradarId;
    nominal type descriptor for GraphQLScalars.NumericString ? xUserId;
}

@end

#endif /* _TtCC14XSportsGraphQL15NHLTeamFragment4Info_h */
