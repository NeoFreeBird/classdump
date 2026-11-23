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
