//
#ifndef _TtC14XSportsGraphQL14F1PlayFragment_h
#define _TtC14XSportsGraphQL14F1PlayFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.F1PlayFragment.ClassificationChange ?, XSportsGraphQL.F1PlayFragment.Driver ?, XSportsGraphQL.F1PlayFragment.Finish ?, XSportsGraphQL.F1PlayFragment.LeadChange ?, XSportsGraphQL.F1PlayFragment.SessionEnd ?, XSportsGraphQL.F1PlayFragment.TopThree ?, XSportsGraphQL.F1PlayFragment.TopTime ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars10F1PlayKindOMn, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.F1PlayFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.F1PlayFragment.ClassificationChange ? classificationChange;
    XSportsGraphQL.F1PlayFragment.Driver ? driver;
    Swift.String fallbackText;
    XSportsGraphQL.F1PlayFragment.Finish ? finish;
    Swift.String id;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.F1PlayKind kind;
    XSportsGraphQL.F1PlayFragment.LeadChange ? leadChange;
    nominal type descriptor for Swift.Int32 ? part;
    nominal type descriptor for GraphQLScalars.NumericString ? raceElapsedMs;
    Swift.Bool rescinded;
    nominal type descriptor for GraphQLScalars.NumericString sequence;
    XSportsGraphQL.F1PlayFragment.SessionEnd ? sessionEnd;
    XSportsGraphQL.F1PlayFragment.TopThree ? topThree;
    XSportsGraphQL.F1PlayFragment.TopTime ? topTime;
    nominal type descriptor for GraphQLScalars.NumericString ? videoPostId;
}

@end

#endif /* _TtC14XSportsGraphQL14F1PlayFragment_h */
