//
#ifndef TIPImageFetchDownload_Protocol_h
#define TIPImageFetchDownload_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TIPImageFetchDownloadContext-Protocol.h"

@class NSURLRequest;

@protocol TIPImageFetchDownload <NSObject>

@required

@property (readonly, nonatomic) id <TIPImageFetchDownloadContext> context;
@property (readonly, nonatomic) NSURLRequest *finalURLRequest;

/* required instance methods */
- (void)start;
- (void)cancelWithDescription:(id)description;
- (void)discardContext;

@optional

@property (readonly, nonatomic) id downloadMetrics;
@property (nonatomic) long long priority;

@end

#endif /* TIPImageFetchDownload_Protocol_h */
