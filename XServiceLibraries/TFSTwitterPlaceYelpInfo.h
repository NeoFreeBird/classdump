//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPlaceYelpInfo_h
#define TFSTwitterPlaceYelpInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSTwitterPlaceYelpInfo : NSObject <NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *businessId;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *mobileUrl;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly) NSNumber *reviewCount;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithBusinessId:(id)id url:(id)url mobileUrl:(id)url rating:(id)rating reviewCount:(id)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterPlaceYelpInfo_h */
