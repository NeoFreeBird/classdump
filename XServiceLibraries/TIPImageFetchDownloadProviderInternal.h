//
#ifndef TIPImageFetchDownloadProviderInternal_h
#define TIPImageFetchDownloadProviderInternal_h
@import Foundation;

#include "TIPImageFetchDownloadProvider-Protocol.h"

@class NSObject, NSString;

@interface TIPImageFetchDownloadProviderInternal : NSObject <TIPImageFetchDownloadProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)imageFetchDownloadWithContext:(id)context;

@end

#endif /* TIPImageFetchDownloadProviderInternal_h */
