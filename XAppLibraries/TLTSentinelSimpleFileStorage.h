//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTSentinelSimpleFileStorage_h
#define TLTSentinelSimpleFileStorage_h
@import Foundation;

#include "TLTSentinelStorage-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TLTSentinelSimpleFileStorage : NSObject <TLTSentinelStorage>

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *fileProtectionType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSentinelType:(long long)type fileProtectionType:(id)type;
- (void)createWithAssociatedValue:(id)value completion:(id /* block */)completion;
- (_Bool)createWithAssociatedValueSync:(id)sync;
- (_Bool)existsWithAssociatedValue:(id)value;
- (id)associatedValue;
- (void)remove;
- (_Bool)_tlt_accessQueue_create;
- (_Bool)_tlt_accessQueue_exists;
- (void)_tlt_accessQueue_remove;

@end

#endif /* TLTSentinelSimpleFileStorage_h */
