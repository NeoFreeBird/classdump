//
#ifndef T1AppShutdownConfiguration_h
#define T1AppShutdownConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface T1AppShutdownConfiguration : NSObject <NSCopying>

@property (nonatomic) _Bool featureEnabled;
@property (copy, nonatomic) NSString *minSafeAppVersion;
@property (copy, nonatomic) NSArray *APIEndpointAllowList;
@property (nonatomic) long long UGCDeleteLevel;

/* class methods */
+ (void)clearGroupUserDefaults;

/* instance methods */
- (id)initFromGroupUserDefault;
- (void)saveInGroupUserDefaults;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1AppShutdownConfiguration_h */
