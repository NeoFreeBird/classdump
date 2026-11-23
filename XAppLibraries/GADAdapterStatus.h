//
#ifndef GADAdapterStatus_h
#define GADAdapterStatus_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface GADAdapterStatus : NSObject <NSCopying> {
    /* instance variables */
    NSString *_adapterName;
    NSString *_statusDescription;
}

@property (readonly, nonatomic) NSString *adapterVersion;
@property (readonly, nonatomic) NSString *SDKVersion;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) double latency;

/* instance methods */
- (id)initWithState:(long long)state latency:(double)latency description:(id)description adapterName:(id)name;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* GADAdapterStatus_h */
