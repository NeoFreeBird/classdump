//
#ifndef TTMAssetRenderOperationDelegate_Protocol_h
#define TTMAssetRenderOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetRenderOperationDelegate <NSObject>

@required

/* required instance methods */
- (void)mediaAssetRenderOperation:(id)operation didProgress:(float)progress;
- (void)mediaAssetRenderOperationDidRenderFromFile:(id)file;

@optional

@end

#endif /* TTMAssetRenderOperationDelegate_Protocol_h */
