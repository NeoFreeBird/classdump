//
#ifndef TNUImageFetchDownloadProvider_h
#define TNUImageFetchDownloadProvider_h
@import Foundation;

#include "TIPImageFetchDownloadProvider-Protocol.h"

@class NSObject, NSString;

@interface TNUImageFetchDownloadProvider : NSObject <TIPImageFetchDownloadProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)imageFetchDownloadWithContext:(id)context;

@end

#endif /* TNUImageFetchDownloadProvider_h */
