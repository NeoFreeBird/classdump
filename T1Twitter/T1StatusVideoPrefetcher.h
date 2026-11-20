//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusVideoPrefetcher_h
#define T1StatusVideoPrefetcher_h
@import Foundation;

#include "T1StatusMediaTimelineObserver.h"
#include "T1StatusMediaTimelineObserverPrefetcher-Protocol.h"
#include "T1VideoPrecacher.h"

@class NSArray, NSObject;

@interface T1StatusVideoPrefetcher : NSObject <T1StatusMediaTimelineObserverPrefetcher>

@property (readonly, nonatomic) T1VideoPrecacher *videoPrecacher;
@property (weak, nonatomic) T1StatusMediaTimelineObserver *timelineObserver;
@property (retain, nonatomic) NSArray *previousStatuses;
@property (nonatomic) _Bool initialWaitFinished;
@property (nonatomic) _Bool disableStatusOrderReversing;

/* class methods */
+ (id)mediaPrefetcherForVideosWithViewController:(id)controller account:(id)account videoPrecacher:(id)precacher statusForItemBlock:(id /* block */)block;
+ (id)mediaPrefetcherForVideosWithViewController:(id)controller account:(id)account videoPrecacher:(id)precacher;

/* instance methods */
- (id)initWithVideoPrecacher:(id)precacher;
- (void)fetchMediasForStatuses:(id)statuses;

@end

#endif /* T1StatusVideoPrefetcher_h */
