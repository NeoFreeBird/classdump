//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlaylistItemProvider_Protocol_h
#define TAVPlaylistItemProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVPlaylistItemProvider <NSObject>

@required

/* required instance methods */
- (void)providePlaylistItemWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* TAVPlaylistItemProvider_Protocol_h */
