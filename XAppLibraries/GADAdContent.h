//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdContent_h
#define GADAdContent_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADMonitorOwner-Protocol.h"
#include "GADRootViewControllerProvider.h"

@class NSMutableArray, NSObject, NSString;

@interface GADAdContent : NSObject <GADEventContextSource, GADMonitorOwner> {
    /* instance variables */
    NSMutableArray *_monitors;
    NSMutableArray *_monitorsCopy;
}

@property (readonly, nonatomic) GADRootViewControllerProvider *rootViewControllerProvider;
@property (readonly, nonatomic) long long adFormat;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)commonInitWithContext:(id)context;
- (id)initWithContext:(id)context;
- (id)initWithContext:(id)context rootViewControllerProvider:(id)provider;
- (void)addMonitor:(id)monitor;
- (void)dealloc;
- (void)nilOutMonitors;
- (void)startDelayPageClose;
- (void)endDelayPageClose;

@end

#endif /* GADAdContent_h */
