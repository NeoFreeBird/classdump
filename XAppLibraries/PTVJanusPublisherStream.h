//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusPublisherStream_h
#define PTVJanusPublisherStream_h
@import Foundation;

@class NSObject, NSString;

@interface PTVJanusPublisherStream : NSObject

@property (readonly, copy, nonatomic) NSString *mid;
@property (readonly, copy, nonatomic) NSString *type;

/* instance methods */
- (id)initWithMid:(id)mid type:(id)type;

@end

#endif /* PTVJanusPublisherStream_h */
