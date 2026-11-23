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
