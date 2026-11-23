//
#ifndef TNUImageFetchDownloadProviderWithStubbing_h
#define TNUImageFetchDownloadProviderWithStubbing_h
@import Foundation;

#include "TIPImageFetchDownloadProviderWithStubbingSupport-Protocol.h"

@class NSObject, NSString;

@interface TNUImageFetchDownloadProviderWithStubbing : NSObject <TIPImageFetchDownloadProviderWithStubbingSupport>

@property (nonatomic) _Bool downloadStubbingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)imageFetchDownloadWithContext:(id)context;
- (void)addDownloadStubForRequestURL:(id)url responseData:(id)data responseMIMEType:(id)mimetype shouldSupportResuming:(_Bool)resuming suggestedBitrate:(unsigned long long)bitrate;
- (void)removeDownloadStubForRequestURL:(id)url;
- (void)removeAllDownloadStubs;

@end

#endif /* TNUImageFetchDownloadProviderWithStubbing_h */
