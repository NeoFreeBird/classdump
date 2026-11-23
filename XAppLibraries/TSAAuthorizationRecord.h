//
#ifndef TSAAuthorizationRecord_h
#define TSAAuthorizationRecord_h
@import Foundation;

#include "TFSPlistSerialization-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TSAAuthorizationRecord : NSObject <TFSPlistSerialization>

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) long long inAppStatus;
@property (readonly, nonatomic) long long systemStatus;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) _Bool needsSynchronization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServiceType:(long long)type inAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata;
- (id)initWithServiceType:(long long)type inAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata needsSynchronization:(_Bool)synchronization;
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;

@end

#endif /* TSAAuthorizationRecord_h */
