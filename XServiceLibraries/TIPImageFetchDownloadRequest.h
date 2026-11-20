//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageFetchDownloadRequest_h
#define TIPImageFetchDownloadRequest_h
@import Foundation;

#include "TIPImageDiskCacheTemporaryFile.h"
#include "TIPImageDownloadRequest-Protocol.h"
#include "TIPPartialImage.h"

@class NSDictionary, NSObject, NSString, NSURL;

@interface TIPImageFetchDownloadRequest : NSObject <TIPImageDownloadRequest>

@property (readonly, nonatomic) NSURL *imageDownloadURL;
@property (readonly, copy, nonatomic) NSString *imageDownloadIdentifier;
@property (copy, nonatomic) NSDictionary *imageDownloadHeaders;
@property (nonatomic) long long imageDownloadOptions;
@property (nonatomic) double imageDownloadTTL;
@property (copy, nonatomic) id /* block */ imageDownloadHydrationBlock;
@property (copy, nonatomic) id /* block */ imageDownloadAuthorizationBlock;
@property (copy, nonatomic) NSDictionary *decoderConfigMap;
@property (nonatomic) struct CGSize { double x0; double x1; } targetDimensions;
@property (nonatomic) long long targetContentMode;
@property (copy) NSString *imageDownloadLastModified;
@property (retain) TIPPartialImage *imageDownloadPartialImageForResuming;
@property (retain) TIPImageDiskCacheTemporaryFile *imageDownloadTemporaryFileForResuming;
@property (nonatomic) long long imageDownloadPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request;

@end

#endif /* TIPImageFetchDownloadRequest_h */
