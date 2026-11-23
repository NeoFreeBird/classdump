//
#ifndef TUIAccessibilityCustomAction_h
#define TUIAccessibilityCustomAction_h
@import Foundation;

@class NSObject, NSString;

@interface TUIAccessibilityCustomAction : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (readonly, copy, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(id)name action:(id /* block */)action;
- (id)accessibilityCustomAction;
- (_Bool)performAction;

@end

#endif /* TUIAccessibilityCustomAction_h */
