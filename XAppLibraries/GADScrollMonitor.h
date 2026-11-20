//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
