//
#ifndef PTVContextualMenu_h
#define PTVContextualMenu_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVContextualMenu : NSObject

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSString *menuIdentifier;

/* class methods */
+ (id)menuWithActions:(id)actions menuIdentifier:(id)identifier;

/* instance methods */
- (id)initWithActions:(id)actions menuIdentifier:(id)identifier;

@end

#endif /* PTVContextualMenu_h */
