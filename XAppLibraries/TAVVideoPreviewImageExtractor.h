//
#ifndef TAVVideoPreviewImageExtractor_h
#define TAVVideoPreviewImageExtractor_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class NSObject;

@interface TAVVideoPreviewImageExtractor : NSObject <TAVPlaybackObserver>

@property (nonatomic) _Bool active;
@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion;
- (_Bool)_t1_isAnyVideoDataDownloadedInsideLoadedTimeRanges:(id)ranges;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVVideoPreviewImageExtractor_h */
