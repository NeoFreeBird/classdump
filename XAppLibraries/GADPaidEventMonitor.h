//
#ifndef GADPaidEventMonitor_h
#define GADPaidEventMonitor_h
@import Foundation;

#include "GADAdValue.h"
#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADPaidEventMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdValue *_estimatedValue;
    id <GADEventContextSource> _messageSource;
    _Atomic _Bool _paidEventObserved;
    _Atomic _Bool _attachedToFormat;
    struct atomic_flag { _Atomic _Bool _Value; } _paidEventPosted;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration;

/* instance methods */
- (id)initWithAdConfiguration:(id)configuration messageSource:(id)source;
- (void)postPaidEventIfReady;

@end

#endif /* GADPaidEventMonitor_h */
