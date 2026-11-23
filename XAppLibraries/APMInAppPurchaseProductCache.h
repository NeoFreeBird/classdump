//
#ifndef APMInAppPurchaseProductCache_h
#define APMInAppPurchaseProductCache_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface APMInAppPurchaseProductCache : NSObject {
    /* instance variables */
    NSMutableSet *_invalidProductIdentifiers;
    NSMutableDictionary *_validProducts;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)cachedProductForProductIdentifier:(id)identifier;
- (void)requestProductsWithProductIdentifiers:(id)identifiers queue:(id)queue completionHandler:(id /* block */)handler;

@end

#endif /* APMInAppPurchaseProductCache_h */
