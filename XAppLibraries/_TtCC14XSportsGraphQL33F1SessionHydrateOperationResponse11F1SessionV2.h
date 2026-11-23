//
#ifndef _TtCC14XSportsGraphQL33F1SessionHydrateOperationResponse11F1SessionV2_h
#define _TtCC14XSportsGraphQL33F1SessionHydrateOperationResponse11F1SessionV2_h
@import Foundation;

@class XSportsGraphQL.F1SessionHydrateOperationResponse.F1SessionV2.Info ?, XSportsGraphQL.F1SessionHydrateOperationResponse.F1SessionV2.LapChart ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSa -> XSportsGraphQL.F1SessionPartFragment, _$sSa -> XSportsGraphQL.F1SessionResultFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.F1SessionHydrateOperationResponse.F1SessionV2 : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XSportsGraphQL.F1SessionResultFragment classification;
    Swift.String id;
    XSportsGraphQL.F1SessionHydrateOperationResponse.F1SessionV2.Info ? info;
    XSportsGraphQL.F1SessionHydrateOperationResponse.F1SessionV2.LapChart ? lapChart;
    Swift.Array -> XSportsGraphQL.F1SessionPartFragment parts;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    nominal type descriptor for GraphQLScalars.NumericString ? version;
}

@end

#endif /* _TtCC14XSportsGraphQL33F1SessionHydrateOperationResponse11F1SessionV2_h */
