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
