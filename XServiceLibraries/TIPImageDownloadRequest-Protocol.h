//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageDownloadRequest_Protocol_h
#define TIPImageDownloadRequest_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageDownloadRequest <NSObject>

@required

/* required instance methods */
- (id)imageDownloadURL;
- (id)imageDownloadIdentifier;
- (id)imageDownloadHeaders;
- (long long)imageDownloadPriority;
- (id /* block */)imageDownloadHydrationBlock;
- (id /* block */)imageDownloadAuthorizationBlock;
- (id)decoderConfigMap;
- (struct CGSize { double x0; double x1; })targetDimensions;
- (long long)targetContentMode;
- (double)imageDownloadTTL;
- (long long)imageDownloadOptions;
- (id)imageDownloadLastModified;
- (id)imageDownloadPartialImageForResuming;
- (id)imageDownloadTemporaryFileForResuming;

@optional

@end

#endif /* TIPImageDownloadRequest_Protocol_h */
