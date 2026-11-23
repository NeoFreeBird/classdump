//
#ifndef TFSAssetExportSessionManager_Protocol_h
#define TFSAssetExportSessionManager_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAssetExportSessionManager <NSObject>

@required

@property (readonly) float progress;
@property (readonly) long long status;

/* required instance methods */
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)handler;
- (void)cancelExport;

@optional

@end

#endif /* TFSAssetExportSessionManager_Protocol_h */
