//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsVASTTrackingResource_h
#define TAVAnalyticsVASTTrackingResource_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, NSURL, NSUUID;

@interface TAVAnalyticsVASTTrackingResource : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *playlistItemKey;
@property (readonly, nonatomic) NSString *metric;
@property (readonly, nonatomic) NSURL *URL;

/* instance methods */
- (id)initWithPlaylistItemKey:(id)key metric:(id)metric URL:(id)url;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TAVAnalyticsVASTTrackingResource_h */
