//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL19F1EventInfoFragment_h
#define _TtC14XSportsGraphQL19F1EventInfoFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.F1CircuitFragment ?, XSportsGraphQL.F1SessionSummaryFragment ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars15F1SessionStatusOMn, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.F1EventInfoFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.F1CircuitFragment ? circuit;
    XSportsGraphQL.F1SessionSummaryFragment ? liveSession;
    Swift.String name;
    XSportsGraphQL.F1SessionSummaryFragment ? nextSession;
    nominal type descriptor for Swift.Int32 ? round;
    nominal type descriptor for GraphQLScalars.NumericString ? scheduledEndMs;
    nominal type descriptor for GraphQLScalars.NumericString scheduledMs;
    Swift.Bool sprintWeekend;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.F1SessionStatus status;
}

@end

#endif /* _TtC14XSportsGraphQL19F1EventInfoFragment_h */
