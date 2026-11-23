//
#ifndef NSTimer_PTVAdditions_h
#define NSTimer_PTVAdditions_h
@import Foundation;

@interface NSTimer (PTVAdditions)

/* class methods */
+ (id)ptv_scheduledTimerWithTimeInterval:(double)interval repeats:(_Bool)repeats block:(id /* block */)block;

@end

#endif /* NSTimer_PTVAdditions_h */
