//
#ifndef _TtC13GraphQLModels20FinanceAssetFragment_h
#define _TtC13GraphQLModels20FinanceAssetFragment_h
@import Foundation;

@class GraphQLModels.FinanceCryptoAssetFragment ?, GraphQLModels.FinanceQuoteFragment ?, GraphQLModels.FinanceStockAssetFragment ?, Swift.Bool, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.FinanceAssetFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String assetId;
    Swift.String? backgroundUrl;
    GraphQLModels.FinanceCryptoAssetFragment ? crypto;
    Swift.String? logoUrl;
    Swift.String name;
    GraphQLModels.FinanceQuoteFragment ? quote;
    Swift.String smartTag;
    GraphQLModels.FinanceStockAssetFragment ? stock;
    Swift.String ticker;
    Swift.String? tradeDisclaimer;
    Swift.String? tradeSponsoredLabel;
    Swift.Bool verified;
}

@end

#endif /* _TtC13GraphQLModels20FinanceAssetFragment_h */
