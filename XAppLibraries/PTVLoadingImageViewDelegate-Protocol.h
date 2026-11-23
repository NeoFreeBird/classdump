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
