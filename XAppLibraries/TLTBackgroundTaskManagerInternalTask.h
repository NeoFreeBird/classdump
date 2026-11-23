//
#ifndef TLTBackgroundTaskManagerInternalTask_h
#define TLTBackgroundTaskManagerInternalTask_h
@import Foundation;

@class NSObject, NSString;

@interface TLTBackgroundTaskManagerInternalTask : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ handler;

/* instance methods */
- (id)initWithIdentifier:(id)identifier name:(id)name handler:(id /* block */)handler;

@end

#endif /* TLTBackgroundTaskManagerInternalTask_h */
