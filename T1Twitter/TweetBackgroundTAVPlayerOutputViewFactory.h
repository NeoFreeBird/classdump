//
#ifndef TweetBackgroundTAVPlayerOutputViewFactory_h
#define TweetBackgroundTAVPlayerOutputViewFactory_h
@import Foundation;

#include "TAVPlayerOutputViewFactory-Protocol.h"
#include "TweetBackgroundTAVPlayerOutputView.h"

@class NSDictionary, NSObject, TAVScribeContext;

@interface TweetBackgroundTAVPlayerOutputViewFactory : NSObject <TAVPlayerOutputViewFactory> {
    /* instance variables */
    TAVScribeContext *_scribeContext;
    TweetBackgroundTAVPlayerOutputView *_outputView;
}

@property (readonly, nonatomic) TweetBackgroundTAVPlayerOutputView *backgroundOutputView;
@property (readonly, nonatomic) _Bool productsRequirePixelBufferSource;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;

/* instance methods */
- (id)initWithScribeContext:(id)context;
- (id)playerOutputView;

@end

#endif /* TweetBackgroundTAVPlayerOutputViewFactory_h */
