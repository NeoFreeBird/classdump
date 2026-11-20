//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
