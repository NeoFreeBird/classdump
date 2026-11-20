//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFTask_h
#define OCFTask_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface OCFTask : NSObject

@property (readonly, nonatomic) NSString *flowToken;
@property (readonly, nonatomic) NSArray *subtasks;

/* class methods */
+ (id)tasksFromFile:(id)file error:(id *)error;
+ (id)tasksFromJSONData:(id)jsondata error:(id *)error;
+ (id)tasksFromJSONArray:(id)jsonarray error:(id *)error;
+ (id)supportedSubtaskTypeNames;
+ (id)subtaskVersions;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithJSONDictionary:(id)jsondictionary defaultFlowToken:(id)token error:(id *)error;
- (id)initWithFlowToken:(id)token subtasks:(id)subtasks;

@end

#endif /* OCFTask_h */
