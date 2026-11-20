//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels28FinanceChartResponseFragment_h
#define _TtC13GraphQLModels28FinanceChartResponseFragment_h
@import Foundation;

@class _$sSa -> GraphQLModels.FinanceChartGapFragment, _$sSa -> GraphQLModels.FinanceDataPointFragment, _$sSa -> GraphQLModels.FinanceSessionFragment, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceChartResponseFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.FinanceDataPointFragment dataPoints;
    Swift.Array -> GraphQLModels.FinanceChartGapFragment gaps;
    Swift.Array -> GraphQLModels.FinanceSessionFragment sessions;
}

@end

#endif /* _TtC13GraphQLModels28FinanceChartResponseFragment_h */
