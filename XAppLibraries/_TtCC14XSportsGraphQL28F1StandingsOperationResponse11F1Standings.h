//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL28F1StandingsOperationResponse11F1Standings_h
#define _TtCC14XSportsGraphQL28F1StandingsOperationResponse11F1Standings_h
@import Foundation;

@class _$s14GraphQLScalars13NumericStringVMn ?, _$sSa -> XSportsGraphQL.F1ConstructorStandingEntryFragment, _$sSa -> XSportsGraphQL.F1DriverStandingEntryFragment, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.F1StandingsOperationResponse.F1Standings : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XSportsGraphQL.F1ConstructorStandingEntryFragment constructors;
    Swift.Array -> XSportsGraphQL.F1DriverStandingEntryFragment drivers;
    nominal type descriptor for Swift.Int32 ? seasonYear;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedMs;
}

@end

#endif /* _TtCC14XSportsGraphQL28F1StandingsOperationResponse11F1Standings_h */
