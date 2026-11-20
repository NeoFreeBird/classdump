//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterScribeTweetEditInformation_h
#define TFSTwitterScribeTweetEditInformation_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSObject;

@interface TFSTwitterScribeTweetEditInformation : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *editRevisionCount;
@property (readonly, nonatomic) NSNumber *editVersion;
@property (readonly, nonatomic) NSNumber *initialTweetId;
@property (readonly, nonatomic) NSDictionary *scribeDictionary;

/* instance methods */
- (id)initWithEditRevisionCount:(id)count editVersion:(id)version initialTweetId:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterScribeTweetEditInformation_h */
