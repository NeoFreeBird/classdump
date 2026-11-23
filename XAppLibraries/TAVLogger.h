//
#ifndef TAVLogger_h
#define TAVLogger_h
@import Foundation;

#include "TFSLogger-Protocol.h"

@class NSObject, NSString;

@interface TAVLogger : NSObject <TFSLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)tfn_configure;
+ (id)private_defaultLogger;
+ (id)sharedLogger;
+ (void)setSharedLogger:(id)logger;
+ (void)logWithLogger:(id)logger level:(long long)level string:(id)string file:(id)file function:(id)function line:(int)line;

/* instance methods */
- (void)logWithLevel:(long long)level file:(id)file function:(id)function line:(int)line contextObject:(id)object format:(id)format;
- (_Bool)canLogWithLevel:(long long)level contextObject:(id)object;

@end

#endif /* TAVLogger_h */
