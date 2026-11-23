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
