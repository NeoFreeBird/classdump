//
#ifndef T1AccountListHeaderItem_h
#define T1AccountListHeaderItem_h
@import Foundation;

@class NSObject, NSString;

@interface T1AccountListHeaderItem : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) _Bool isExpanded;
@property (readonly, nonatomic) _Bool isExpandable;
@property (readonly, nonatomic) long long cellAccessoryType;

/* instance methods */
- (id)initWithText:(id)text isExpandable:(_Bool)expandable isExpanded:(_Bool)expanded;

@end

#endif /* T1AccountListHeaderItem_h */
