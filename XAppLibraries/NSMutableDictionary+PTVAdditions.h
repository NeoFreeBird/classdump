//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableDictionary_PTVAdditions_h
#define NSMutableDictionary_PTVAdditions_h
@import Foundation;

@interface NSMutableDictionary (PTVAdditions)

/* instance methods */
- (void)ptv_setObjectIfNotNil:(id)nil forKey:(id)key;

@end

#endif /* NSMutableDictionary_PTVAdditions_h */
