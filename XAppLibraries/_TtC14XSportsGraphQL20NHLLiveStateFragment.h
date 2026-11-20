//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL20NHLLiveStateFragment_h
#define _TtC14XSportsGraphQL20NHLLiveStateFragment_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NHLGameStatusOMn, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NHLPeriodTypeOMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$ss5Int32VMn ?, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLLiveStateFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 ? awayGoals;
    Swift.Bool awayPowerplay;
    nominal type descriptor for Swift.Int32 ? awayShootoutGoals;
    nominal type descriptor for Swift.Int32 ? awayShots;
    Swift.String? awayStrength;
    Swift.String? clock;
    Swift.Bool clockRunning;
    nominal type descriptor for Swift.Int32 ? homeGoals;
    Swift.Bool homePowerplay;
    nominal type descriptor for Swift.Int32 ? homeShootoutGoals;
    nominal type descriptor for Swift.Int32 ? homeShots;
    Swift.String? homeStrength;
    Swift.Bool intermission;
    nominal type descriptor for Swift.Int32 ? period;
    Swift.String? periodLabel;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NHLPeriodType ? periodType;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NHLGameStatus status;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedMs;
    nominal type descriptor for Swift.Int64 version;
}

@end

#endif /* _TtC14XSportsGraphQL20NHLLiveStateFragment_h */
