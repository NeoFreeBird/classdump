//
#ifndef TFSScribeThriftWifiLink_h
#define TFSScribeThriftWifiLink_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftWifiLink : NSObject <TBase, NSCoding>

@property (nonatomic) long long wifi;
@property (readonly, nonatomic) _Bool wifiIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWifi:(long long)wifi;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftWifiLink_h */
