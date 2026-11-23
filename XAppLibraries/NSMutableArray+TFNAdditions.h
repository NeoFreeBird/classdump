//
#ifndef NSMutableArray_TFNAdditions_h
#define NSMutableArray_TFNAdditions_h
@import Foundation;

@interface NSMutableArray (TFNAdditions)

/* instance methods */
- (void)ptv_addObjectIfNotNil:(id)nil;
- (void)ptv_selectInPlace:(id /* block */)place;

@end

#endif /* NSMutableArray_TFNAdditions_h */
