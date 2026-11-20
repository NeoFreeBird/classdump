//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARUtil_h
#define TNUHARUtil_h
@import Foundation;

@class NSObject;

@interface TNUHARUtil : NSObject

/* class methods */
+ (id)iso8601StringForDate:(id)date;

@end

#endif /* TNUHARUtil_h */
