//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetUploaderDelegate_Protocol_h
#define TTMAssetUploaderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetUploaderDelegate <NSObject>

@required

/* required instance methods */
- (void)uploaderDidCompelete:(id)compelete success:(_Bool)success;

@optional

@end

#endif /* TTMAssetUploaderDelegate_Protocol_h */
