//
#ifndef TFNTwitterScribeActionEvent_h
#define TFNTwitterScribeActionEvent_h
@import Foundation;

@class NSDictionary, NSObject, NSString, TFSTwitterScribeContext;

@interface TFNTwitterScribeActionEvent : NSObject

@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (copy, nonatomic) NSString *action;
@property (readonly, nonatomic) NSString *page;
@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) NSString *component;
@property (readonly, nonatomic) NSString *element;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *eventString;

/* class methods */
+ (id)scribeEventWithScribeContext:(id)context;
+ (id)scribeEventWithAction:(id)action scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterScribeActionEvent_h */
