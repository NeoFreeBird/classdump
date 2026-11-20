//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPreloadConfiguration_h
#define GADPreloadConfiguration_h
@import Foundation;

#include "GADRequest.h"

@class NSObject, NSString;

@interface GADPreloadConfiguration : NSObject

@property (readonly, nonatomic) NSString *adUnitID;
@property (readonly, nonatomic) GADRequest *request;
@property (readonly, nonatomic) long long format;
@property (nonatomic) unsigned long long bufferSize;

/* instance methods */
- (id)initWithAdUnitID:(id)id adFormat:(long long)format request:(id)request;
- (id)initWithAdUnitID:(id)id adFormat:(long long)format;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* GADPreloadConfiguration_h */
