//
#ifndef TIPImageFetchDownloadProvider_Protocol_h
#define TIPImageFetchDownloadProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageFetchDownloadProvider <NSObject>

@required

/* required instance methods */
- (id)imageFetchDownloadWithContext:(id)context;

@optional

@end

#endif /* TIPImageFetchDownloadProvider_Protocol_h */
