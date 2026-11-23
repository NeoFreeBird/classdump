//
#ifndef TUIImageViewFetchHelperJPEGProgressiveLoadingPolicy_h
#define TUIImageViewFetchHelperJPEGProgressiveLoadingPolicy_h
@import Foundation;

#include "TIPImageFetchProgressiveLoadingPolicy-Protocol.h"
#include "TUIImageViewFetchHelper.h"

@class NSObject, NSString;

@interface TUIImageViewFetchHelperJPEGProgressiveLoadingPolicy : NSObject <TIPImageFetchProgressiveLoadingPolicy>

@property (readonly, weak, nonatomic) TUIImageViewFetchHelper *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOwner:(id)owner;
- (long long)tip_imageFetchOperation:(id)operation behaviorForProgress:(long long)progress frameCount:(unsigned long long)count progress:(float)progress type:(id)type dimensions:(struct CGSize { double x0; double x1; })dimensions renderCount:(unsigned long long)count;

@end

#endif /* TUIImageViewFetchHelperJPEGProgressiveLoadingPolicy_h */
