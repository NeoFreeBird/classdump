//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAssetExportSessionLogger_Protocol_h
#define TFSAssetExportSessionLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAssetExportSessionLogger <NSObject>

@required

/* required instance methods */
- (void)exportSessionStartWithInfoParameters:(id)parameters;
- (void)exportSessionSuccessWithInfoParameters:(id)parameters;
- (void)exportSessionCancelWithInfoParameters:(id)parameters;
- (void)exportSessionFailureWithError:(id)error;

@optional

@end

#endif /* TFSAssetExportSessionLogger_Protocol_h */
