//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFSubtaskState_h
#define OCFSubtaskState_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface OCFSubtaskState : NSObject {
    /* instance variables */
    NSString *_subtaskID;
    NSString *_subtaskTypeName;
}

@property (retain, nonatomic) NSString *selectedLinkID;
@property (copy, nonatomic) NSArray *reportableComponents;

/* instance methods */
- (id)initForSubtask:(id)subtask;
- (id)JSONDictionary;
- (void)addStateToJSONDictionary:(id)jsondictionary;

@end

#endif /* OCFSubtaskState_h */
