//
#ifndef TIPImageFetchDownloadContext_Protocol_h
#define TIPImageFetchDownloadContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TIPImageFetchDownloadClient-Protocol.h"

@class NSObject, NSString, NSURLRequest;
@protocol OS_dispatch_queue;

@protocol TIPImageFetchDownloadContext <NSObject>

@required

@property (readonly, copy, nonatomic) NSURLRequest *originalRequest;
@property (readonly, copy, nonatomic) NSURLRequest *hydratedRequest;
@property (readonly, copy, nonatomic) NSString *authorization;
@property (readonly, nonatomic) id <TIPImageFetchDownloadClient> client;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;

@optional

@end

#endif /* TIPImageFetchDownloadContext_Protocol_h */
