//
#ifndef TFSTwitterRecurringTaskEvent_h
#define TFSTwitterRecurringTaskEvent_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterRecurringTaskEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id context;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name context:(id)context;
- (id)description;

@end

#endif /* TFSTwitterRecurringTaskEvent_h */
