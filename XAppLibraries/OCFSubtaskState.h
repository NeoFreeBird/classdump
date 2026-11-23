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
