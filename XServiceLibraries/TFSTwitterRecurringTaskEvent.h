//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
