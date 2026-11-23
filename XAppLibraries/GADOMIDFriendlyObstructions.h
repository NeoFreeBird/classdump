//
#ifndef GADOMIDFriendlyObstructions_h
#define GADOMIDFriendlyObstructions_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface GADOMIDFriendlyObstructions : NSObject

@property (retain, nonatomic) NSMutableArray *obstructions;

/* instance methods */
- (id)init;
- (_Bool)add:(id)add purpose:(unsigned long long)purpose reason:(id)reason error:(id *)error;
- (void)internal_add:(id)internal_add purpose:(unsigned long long)purpose reason:(id)reason;
- (void)remove:(id)remove;
- (void)internal_remove:(id)internal_remove;
- (void)removeAll;
- (void)internal_removeAll;
- (unsigned long long)indexForView:(id)view;

@end

#endif /* GADOMIDFriendlyObstructions_h */
