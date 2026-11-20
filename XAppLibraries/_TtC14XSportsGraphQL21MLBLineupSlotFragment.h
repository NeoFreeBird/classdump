//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL21MLBLineupSlotFragment_h
#define _TtC14XSportsGraphQL21MLBLineupSlotFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.MLBPlayerFragment, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBInningHalfOMn ?, _$sSS, _$sSSSg, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBLineupSlotFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBInningHalf ? half;
    nominal type descriptor for Swift.Int32 ? inning;
    Swift.String? jerseyNumber;
    Swift.String name;
    nominal type descriptor for Swift.Int32 order;
    XSportsGraphQL.MLBPlayerFragment player;
    Swift.String position;
    Swift.Bool starter;
    Swift.String? unit;
}

@end

#endif /* _TtC14XSportsGraphQL21MLBLineupSlotFragment_h */
