//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef SKStoreProductViewControllerDelegate_Protocol_h
#define SKStoreProductViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SKStoreProductViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)productViewControllerDidFinish:(id)finish;

@end

#endif /* SKStoreProductViewControllerDelegate_Protocol_h */
