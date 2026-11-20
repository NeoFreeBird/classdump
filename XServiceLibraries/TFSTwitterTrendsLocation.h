//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTrendsLocation_h
#define TFSTwitterTrendsLocation_h
@import Foundation;

#include "TFSPlistSerialization-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterTrendsLocation : NSObject <TFSPlistSerialization>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSNumber *woeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithType:(unsigned long long)type name:(id)name country:(id)country woeID:(id)id;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (_Bool)isEqual:(id)equal;
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;
- (unsigned long long)_locationTypeForPlaceCode:(long long)code;

@end

#endif /* TFSTwitterTrendsLocation_h */
