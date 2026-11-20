//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTimelineQuery_h
#define OCFTimelineQuery_h
@import Foundation;

@class NSObject, NSString;

@interface OCFTimelineQuery : NSObject

@property (readonly, nonatomic) NSString *timelineKey;
@property (readonly, nonatomic) NSString *timelineContext;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFTimelineQuery_h */
