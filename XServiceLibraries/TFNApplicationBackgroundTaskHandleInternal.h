//
#ifndef TFNApplicationBackgroundTaskHandleInternal_h
#define TFNApplicationBackgroundTaskHandleInternal_h
@import Foundation;

#include "TFNApplicationBackgroundTaskHandle-Protocol.h"

@class NSObject, NSString, UIApplication;

@interface TFNApplicationBackgroundTaskHandleInternal : NSObject <TFNApplicationBackgroundTaskHandle>

@property unsigned long long backgroundTaskIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApplication:(id)application name:(id)name expirationHandler:(id /* block */)handler;
- (void)endBackgroundTask;
- (void)dealloc;

@end

#endif /* TFNApplicationBackgroundTaskHandleInternal_h */
