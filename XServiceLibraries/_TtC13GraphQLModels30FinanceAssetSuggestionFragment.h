//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels30FinanceAssetSuggestionFragment_h
#define _TtC13GraphQLModels30FinanceAssetSuggestionFragment_h
@import Foundation;

@class GraphQLModels.FinanceAssetFragment, _$sSS, _$sSa -> GraphQLModels.FinanceMatchFragment, _$sSd, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceAssetSuggestionFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.FinanceAssetFragment asset;
    Swift.Array -> GraphQLModels.FinanceMatchFragment matches;
    Swift.String reason;
    Swift.Double score;
}

@end

#endif /* _TtC13GraphQLModels30FinanceAssetSuggestionFragment_h */
