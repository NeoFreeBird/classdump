//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVLoadingImageViewDelegate_Protocol_h
#define PTVLoadingImageViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVLoadingImageViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)canLoadFromNetwork;
- (void)loadingImageViewLoadedImageDidChange:(id)change;

@end

#endif /* PTVLoadingImageViewDelegate_Protocol_h */
