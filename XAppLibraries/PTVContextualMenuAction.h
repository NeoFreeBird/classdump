//
#ifndef PTVContextualMenuAction_h
#define PTVContextualMenuAction_h
@import Foundation;

@class NSObject, NSString;

@interface PTVContextualMenuAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) id /* block */ handler;

/* class methods */
+ (id)actionWithTitle:(id)title style:(unsigned long long)style handler:(id /* block */)handler;

/* instance methods */
- (id)initWithTitle:(id)title style:(unsigned long long)style handler:(id /* block */)handler;

@end

#endif /* PTVContextualMenuAction_h */
