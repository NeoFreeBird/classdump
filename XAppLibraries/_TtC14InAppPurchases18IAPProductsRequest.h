//
#ifndef _TtC14InAppPurchases18IAPProductsRequest_h
#define _TtC14InAppPurchases18IAPProductsRequest_h
@import Foundation;

@class InAppPurchases.IAPProductCatalogItemProvider, NSObject, Swift.Bool, _$sSa -> InAppPurchases.IAPProductCatalogItem, _$sScTyyt _$ss5NeverOMn ?, _$ss6ResultOMn _$sySa -> InAppPurchases.IAPProduct _$s_pG8products_Sa -> InAppPurchases.IAPProductCatalogItem _$s_pG12invalidItemst _$ss5ErrorMp _$sGcSg;

@interface InAppPurchases.IAPProductsRequest : NSObject { // (Swift)
    /* instance variables */
    InAppPurchases.IAPProductCatalogItemProvider productCatalogItemProvider;
    Swift.Bool useAdvancedCommerceAPI;
    Swift.Array -> InAppPurchases.IAPProductCatalogItem requestingCatalogItems;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? storeKitTask;
    nominal type descriptor for Swift.Result  empty-list Swift.Array -> InAppPurchases.IAPProduct _$s_pG8products_Sa -> InAppPurchases.IAPProductCatalogItem _$s_pG12invalidItemst protocol descriptor for Swift.Error _$sGcSg completion;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC14InAppPurchases18IAPProductsRequest_h */
