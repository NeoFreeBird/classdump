//
#ifndef TFSTwitterTrafficBeaconListModel_h
#define TFSTwitterTrafficBeaconListModel_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterTrafficBeaconListModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *configurationKey;
@property (copy, nonatomic) NSString *configurationValue;
@property (readonly, copy, nonatomic) NSArray *probeURLStrings;

/* class methods */
+ (id)modelWithResponseData:(id)data;
+ (id)modelWithResponseArray:(id)array;

/* instance methods */
- (id)initWithProbeURLStrings:(id)urlstrings;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryValue;

@end

#endif /* TFSTwitterTrafficBeaconListModel_h */
