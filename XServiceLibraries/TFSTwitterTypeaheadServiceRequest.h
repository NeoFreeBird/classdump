//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTypeaheadServiceRequest_h
#define TFSTwitterTypeaheadServiceRequest_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface TFSTwitterTypeaheadServiceRequest : NSObject // (Swift)

@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) _Bool prefetch;
@property (nonatomic, readonly) _Bool mediaTaggingInPrefetch;
@property (nonatomic, readonly) NSDate *lastCacheAge;
@property (nonatomic, readonly) _Bool geoRequestFilter;
@property (nonatomic, readonly) NSString *contextText;
@property (nonatomic, readonly) unsigned long long topicType;
@property (nonatomic, readonly) NSString *communityId;

/* instance methods */
- (id)initWithQuery:(id)query resultType:(long long)type sourceType:(unsigned long long)type prefetch:(_Bool)prefetch mediaTaggingInPrefetch:(_Bool)prefetch lastCacheAge:(id)age geoRequestFilter:(_Bool)filter contextText:(id)text topicType:(unsigned long long)type communityId:(id)id;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadServiceRequest_h */
