//
#ifndef TFSTwitterDynamicVideoPassthrough_h
#define TFSTwitterDynamicVideoPassthrough_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface TFSTwitterDynamicVideoPassthrough : NSObject

@property (readonly, nonatomic) NSNumber *statusId;
@property (readonly, copy, nonatomic) NSString *passthroughString;
@property (readonly, copy, nonatomic) NSString *impressionId;
@property (readonly, copy, nonatomic) NSString *liveEventId;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterDynamicVideoPassthrough_h */
