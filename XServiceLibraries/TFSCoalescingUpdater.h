//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCoalescingUpdater_h
#define TFSCoalescingUpdater_h
@import Foundation;

#include "TFSTimer.h"

@class NSObject;

@interface TFSCoalescingUpdater : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (retain, nonatomic) TFSTimer *timer;

/* instance methods */
- (id)init;
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)dealloc;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)cancelUpdate;
- (void)_performUpdate;

@end

#endif /* TFSCoalescingUpdater_h */
