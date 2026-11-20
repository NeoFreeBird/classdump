//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterFeedbackAction_h
#define TFNTwitterFeedbackAction_h
@import Foundation;

@class NSArray, NSObject, NSString, NSURL;

@interface TFNTwitterFeedbackAction : NSObject

@property (retain, nonatomic) NSURL *actionURL;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *URTActionKey;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *confirmation;
@property (readonly, nonatomic) _Bool hasUndoAction;
@property (readonly, nonatomic) long long icon;
@property (readonly, nonatomic) _Bool dismiss;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, nonatomic) _Bool shouldDismissReferencingEntries;
@property (readonly, nonatomic) NSArray *childActions;

/* instance methods */
- (_Bool)t1_sendGraphQLFeedbackForAccountID:(id)id isUndo:(_Bool)undo;
- (id)init;
- (id)initWithType:(id)type URTActionKey:(id)key prompt:(id)prompt confirmation:(id)confirmation actionURLString:(id)urlstring hasUndoAction:(_Bool)action icon:(long long)icon dismiss:(_Bool)dismiss shouldDismissReferencingEntries:(_Bool)entries scribeComponent:(id)component scribeElement:(id)element childActions:(id)actions;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (_Bool)doDismiss;

@end

#endif /* TFNTwitterFeedbackAction_h */
