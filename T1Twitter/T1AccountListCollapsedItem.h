//
#ifndef T1AccountListCollapsedItem_h
#define T1AccountListCollapsedItem_h
@import Foundation;

@class NSArray, NSObject;

@interface T1AccountListCollapsedItem : NSObject

@property (readonly, nonatomic) NSArray *accounts;

/* instance methods */
- (id)initWithAccountListEntries:(id)entries;

@end

#endif /* T1AccountListCollapsedItem_h */
