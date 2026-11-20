//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCBrowserDestinationDataImpl_h
#define TUCBrowserDestinationDataImpl_h
@import Foundation;

#include "TUCBrowserDestinationData-Protocol.h"

@class NSObject, NSString, NSURL;

@interface TUCBrowserDestinationDataImpl : NSObject <TUCBrowserDestinationData> // (Swift)

@property (nonatomic, readonly) NSString *vanityURLString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) _Bool isBrowserFallbackEnabled;
@property (nonatomic, readonly) _Bool isUniversalLinkAllowed;

/* instance methods */
- (id)initWithVanityURLString:(id)urlstring url:(id)url isBrowserFallbackEnabled:(_Bool)enabled isUniversalLinkAllowed:(_Bool)allowed;
- (id)init;

@end

#endif /* TUCBrowserDestinationDataImpl_h */
