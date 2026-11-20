//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL16MLBAtBatFragment_h
#define _TtC14XSportsGraphQL16MLBAtBatFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.MLBAtBatFragment.Batter ?, XSportsGraphQL.MLBAtBatFragment.Pitcher ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBInningHalfOMn, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.MLBPlayFragment, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBAtBatFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 ? awayScore;
    XSportsGraphQL.MLBAtBatFragment.Batter ? batter;
    Swift.String? batterHand;
    Swift.String? batterName;
    Swift.String? description;
    Swift.Array -> XSportsGraphQL.MLBPlayFragment events;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBInningHalf half;
    nominal type descriptor for Swift.Int32 ? homeScore;
    Swift.String id;
    nominal type descriptor for Swift.Int32 inning;
    Swift.String? outcome;
    Swift.String? outcomeId;
    nominal type descriptor for Swift.Int32 ? pitchCount;
    XSportsGraphQL.MLBAtBatFragment.Pitcher ? pitcher;
    Swift.String? pitcherHand;
    Swift.String? pitcherName;
    Swift.Array -> XSportsGraphQL.MLBPlayFragment pitches;
    nominal type descriptor for Swift.Int32 runs;
    Swift.Bool scoring;
    nominal type descriptor for GraphQLScalars.NumericString sequence;
    nominal type descriptor for GraphQLScalars.NumericString ? videoPostId;
}

@end

#endif /* _TtC14XSportsGraphQL16MLBAtBatFragment_h */
