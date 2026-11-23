//
#ifndef TFNToastAction_h
#define TFNToastAction_h
@import Foundation;

@class NSObject, NSString;

@interface TFNToastAction : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *scribeAction;
@property (readonly, nonatomic) id /* block */ handler;

/* class methods */
+ (id)navigationActionWithHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithTitle:(id)title scribeAction:(id)action handler:(id /* block */)handler;

@end

#endif /* TFNToastAction_h */
