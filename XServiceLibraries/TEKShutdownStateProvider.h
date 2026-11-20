//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKShutdownStateProvider_h
#define TEKShutdownStateProvider_h
@import Foundation;

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TEKShutdownStateProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateDispatchQueue;
@property (nonatomic) _Bool shutdownExtension;
@property (nonatomic) unsigned long long stateChange;
@property (readonly, nonatomic) unsigned long long extensionType;
@property (copy, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) _Bool shouldShutdownExtension;
@property (readonly, nonatomic) unsigned long long shutdownStateChange;

/* instance methods */
- (id)initWithExtensionType:(unsigned long long)type;
- (void)processExtensionShutdown;
- (void)_tek_processExtensionShutdown;
- (_Bool)_tek_shouldShutdownExtensionWithConfiguration:(id)configuration;

@end

#endif /* TEKShutdownStateProvider_h */
