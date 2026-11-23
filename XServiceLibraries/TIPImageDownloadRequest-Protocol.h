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
