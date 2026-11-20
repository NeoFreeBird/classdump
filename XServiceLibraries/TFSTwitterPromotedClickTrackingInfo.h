//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPromotedClickTrackingInfo_h
#define TFSTwitterPromotedClickTrackingInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFSTwitterPromotedClickTrackingInfo : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSDictionary *urlParams;
@property (readonly, copy, nonatomic) NSString *overrideURL;
@property (readonly, copy, nonatomic) NSString *overrideURLType;

/* instance methods */
- (id)init;
- (id)initWithURLParameters:(id)urlparameters overrideURL:(id)url overrideURLType:(id)urltype;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterPromotedClickTrackingInfo_h */
