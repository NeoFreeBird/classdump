//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTSentinelUserDefaultsStorage_h
#define TLTSentinelUserDefaultsStorage_h
@import Foundation;

#include "TLTSentinelStorage-Protocol.h"

@class NSObject, NSString, NSUserDefaults;

@interface TLTSentinelUserDefaultsStorage : NSObject <TLTSentinelStorage>

@property (readonly, nonatomic) NSUserDefaults *defaults;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSentinelType:(long long)type;
- (void)createWithAssociatedValue:(id)value completion:(id /* block */)completion;
- (_Bool)createWithAssociatedValueSync:(id)sync;
- (_Bool)existsWithAssociatedValue:(id)value;
- (id)associatedValue;
- (void)remove;

@end

#endif /* TLTSentinelUserDefaultsStorage_h */
