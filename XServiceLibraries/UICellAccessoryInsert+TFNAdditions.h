//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICellAccessoryInsert_TFNAdditions_h
#define UICellAccessoryInsert_TFNAdditions_h
@import Foundation;

@interface UICellAccessoryInsert (TFNAdditions)

/* instance methods */
- (_Bool)tfn_isLeading;
- (double)tfn_defaultLayoutWidth;

@end

#endif /* UICellAccessoryInsert_TFNAdditions_h */
