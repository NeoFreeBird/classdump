//
#ifndef OCFScribeConfig_h
#define OCFScribeConfig_h
@import Foundation;

@class NSObject, NSString, TFSTwitterScribeContext;

@interface OCFScribeConfig : NSObject

@property (retain, nonatomic) NSString *action;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFScribeConfig_h */
