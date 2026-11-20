//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
