//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CLLocation_TFSAdditions_h
#define CLLocation_TFSAdditions_h
@import Foundation;

@interface CLLocation (TFSAdditions)

/* instance methods */
- (_Bool)tfs_isEqualToLocation:(id)location;

@end

#endif /* CLLocation_TFSAdditions_h */
