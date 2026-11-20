//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFSTracing13TraceMetadata_h
#define _TtC10TFSTracing13TraceMetadata_h
@import Foundation;

@class NSObject;

@interface TFSTracing.TraceMetadata : NSObject // (Swift)

/* class methods */
+ (id)counterWithLabel:(id)label count:(long long)count;
+ (id)firstAfterUpgrade;
+ (id)zipkinTraceIDWithTraceID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TFSTracing13TraceMetadata_h */
