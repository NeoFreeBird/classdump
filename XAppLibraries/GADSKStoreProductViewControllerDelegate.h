//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSKStoreProductViewControllerDelegate_h
#define GADSKStoreProductViewControllerDelegate_h
@import Foundation;

#include "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSObject, NSString;

@interface GADSKStoreProductViewControllerDelegate : NSObject <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)productViewControllerDidFinish:(id)finish;

@end

#endif /* GADSKStoreProductViewControllerDelegate_h */
