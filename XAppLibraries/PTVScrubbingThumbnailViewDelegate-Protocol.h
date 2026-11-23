//
#ifndef PTVScrubbingThumbnailViewDelegate_Protocol_h
#define PTVScrubbingThumbnailViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVScrubbingThumbnailViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)scrubbingThumbnailViewDidLoadThumbnail:(id)thumbnail;

@end

#endif /* PTVScrubbingThumbnailViewDelegate_Protocol_h */
