//
#ifndef _TtC14XSportsGraphQL23F1SessionResultFragment_h
#define _TtC14XSportsGraphQL23F1SessionResultFragment_h
@import Foundation;

@class XSportsGraphQL.F1ConstructorFragment ?, XSportsGraphQL.F1DriverFragment, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars11F1CarStatusOMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$sSdSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.F1SessionResultFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.F1CarStatus ? carStatus;
    XSportsGraphQL.F1DriverFragment driver;
    Swift.String? driverAbbreviation;
    Swift.String driverName;
    nominal type descriptor for GraphQLScalars.NumericString ? fastestLapMs;
    Swift.String? fastestLapTime;
    Swift.String? gapToLeader;
    nominal type descriptor for Swift.Int32 ? grid;
    Swift.String? intervalToPositionAhead;
    nominal type descriptor for Swift.Int32 ? knockedOutIn;
    nominal type descriptor for Swift.Int32 ? laps;
    nominal type descriptor for Swift.Int32 ? lapsLed;
    nominal type descriptor for Swift.Int32 ? pitstops;
    Swift.Double? points;
    nominal type descriptor for Swift.Int32 ? position;
    nominal type descriptor for Swift.Int32 ? positionsGained;
    Swift.String? result;
    Swift.String? status;
    XSportsGraphQL.F1ConstructorFragment ? team;
    Swift.String? teamName;
    Swift.String? time;
}

@end

#endif /* _TtC14XSportsGraphQL23F1SessionResultFragment_h */
