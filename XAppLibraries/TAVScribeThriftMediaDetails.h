//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVScribeThriftMediaDetails_h
#define TAVScribeThriftMediaDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVScribeThriftMediaErrorDetails.h"
#include "TAVScribeThriftVideoVariantDetails.h"

@class NSNumber, NSObject, NSString;

@interface TAVScribeThriftMediaDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *mediaSessionID;
@property (copy, nonatomic) NSString *mediaAssetURL;
@property (copy, nonatomic) TAVScribeThriftMediaErrorDetails *mediaError;
@property (retain, nonatomic) NSNumber *mediaTimecodeMillis;
@property (copy, nonatomic) TAVScribeThriftVideoVariantDetails *videoVariantDetails;

/* instance methods */
- (id)initWithMediaSessionID:(id)id mediaAssetURL:(id)url mediaError:(id)error mediaTimecodeMillis:(id)millis;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)marshallerDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TAVScribeThriftMediaDetails_h */
