//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17XElectionsGraphQL28ElectionResultFieldsFragment_h
#define _TtC17XElectionsGraphQL28ElectionResultFieldsFragment_h
@import Foundation;

@class _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSa -> XElectionsGraphQL.ElectionResultFieldsFragment.Candidates ?, _$sSbSg, _$sSdSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface XElectionsGraphQL.ElectionResultFieldsFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLScalars.NumericString ? calledMs;
    Swift.Array -> XElectionsGraphQL.ElectionResultFieldsFragment.Candidates ? candidates;
    Swift.Double? expectedPctHigh;
    Swift.Double? expectedPctLow;
    Swift.Double? expectedPctMid;
    Swift.String? phase;
    Swift.Bool? pollsClosed;
    Swift.Double? reportingPct;
    Swift.String? status;
    nominal type descriptor for Swift.Int64 ? totalVotes;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedMs;
    nominal type descriptor for GraphQLScalars.NumericString ? version;
}

@end

#endif /* _TtC17XElectionsGraphQL28ElectionResultFieldsFragment_h */
