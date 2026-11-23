//
#ifndef _TtC14XSportsGraphQL26MLBLiveScoreUpdateFragment_h
#define _TtC14XSportsGraphQL26MLBLiveScoreUpdateFragment_h
@import Foundation;

@class XSportsGraphQL.MLBLivePlayerFragment ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBGameStatusOMn, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBInningHalfOMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSbSg, _$ss5Int32VMn ?, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBLiveScoreUpdateFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 ? awayErrors;
    nominal type descriptor for Swift.Int32 ? awayHits;
    nominal type descriptor for Swift.Int32 ? awayRuns;
    nominal type descriptor for Swift.Int32 ? balls;
    Swift.String? delayDuration;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBInningHalf ? finalHalf;
    nominal type descriptor for Swift.Int32 ? finalInning;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBInningHalf ? half;
    Swift.Bool? halfOver;
    nominal type descriptor for Swift.Int32 ? homeErrors;
    nominal type descriptor for Swift.Int32 ? homeHits;
    nominal type descriptor for Swift.Int32 ? homeRuns;
    nominal type descriptor for Swift.Int32 ? inning;
    XSportsGraphQL.MLBLivePlayerFragment ? onFirst;
    XSportsGraphQL.MLBLivePlayerFragment ? onSecond;
    XSportsGraphQL.MLBLivePlayerFragment ? onThird;
    nominal type descriptor for Swift.Int32 ? outs;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBGameStatus status;
    nominal type descriptor for Swift.Int32 ? strikes;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedMs;
    nominal type descriptor for Swift.Int64 version;
}

@end

#endif /* _TtC14XSportsGraphQL26MLBLiveScoreUpdateFragment_h */
