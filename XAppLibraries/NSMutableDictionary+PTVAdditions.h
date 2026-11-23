//
#ifndef NSMutableDictionary_PTVAdditions_h
#define NSMutableDictionary_PTVAdditions_h
@import Foundation;

@interface NSMutableDictionary (PTVAdditions)

/* instance methods */
- (void)ptv_setObjectIfNotNil:(id)nil forKey:(id)key;

@end

#endif /* NSMutableDictionary_PTVAdditions_h */
