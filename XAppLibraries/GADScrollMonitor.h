//
#ifndef GADScrollMonitor_h
#define GADScrollMonitor_h
@import Foundation;

#include "GADEventContextSource-Protocol.h"
#include "GADScheduler.h"

@class NSObject, UIView;

@interface GADScrollMonitor : NSObject {
    /* instance variables */
    GADScheduler *_updateScrollStatusScheduler;
    UIView *_monitoredView;
    id <GADEventContextSource> _messageSource;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastMonitoredViewBounds;
}

/* instance methods */
- (id)initWithView:(id)view messageSource:(id)source;
- (void)updateScrollStatus;

@end

#endif /* GADScrollMonitor_h */
