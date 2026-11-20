//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsVVRSessionTracker_h
#define TAVAnalyticsVVRSessionTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, UIApplication;
@protocol OS_dispatch_queue, TAVPlaythroughID;

@interface TAVAnalyticsVVRSessionTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughs;
@property (retain, nonatomic) id <TAVPlaythroughID> lastPlaythroughID;
@property (nonatomic) _Bool histogramsEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (retain, nonatomic) UIApplication *application;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHistogramsEnabled:(_Bool)enabled application:(id)application;
- (void)dealloc;
- (id)private_playthroughForState:(id)state;
- (void)processState:(id)state;
- (void)finish;
- (void)private_emitVVRSessionForPlaythroughID:(id)id;
- (void)private_emitVVRSessionForCurrentPlaythroughs;
- (void)private_applicationDidEnterBackground;

@end

#endif /* TAVAnalyticsVVRSessionTracker_h */
