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
