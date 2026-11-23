//
#ifndef TIPImageFetchDownloadProviderWithStubbingSupport_Protocol_h
#define TIPImageFetchDownloadProviderWithStubbingSupport_Protocol_h
@import Foundation;

#include "TIPImageFetchDownloadProvider-Protocol.h"

@protocol TIPImageFetchDownloadProviderWithStubbingSupport <TIPImageFetchDownloadProvider>

@required

@property (nonatomic) _Bool downloadStubbingEnabled;

/* required instance methods */
- (void)addDownloadStubForRequestURL:(id)url responseData:(id)data responseMIMEType:(id)mimetype shouldSupportResuming:(_Bool)resuming suggestedBitrate:(unsigned long long)bitrate;
- (void)removeDownloadStubForRequestURL:(id)url;
- (void)removeAllDownloadStubs;

@optional

@end

#endif /* TIPImageFetchDownloadProviderWithStubbingSupport_Protocol_h */
