//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHARObject_h
#define TNUHARObject_h
@import Foundation;

@class NSObject, NSString;

@interface TNUHARObject : NSObject

@property (copy, nonatomic) NSString *comment;

/* instance methods */
- (id)JSONDictionary;
- (id)mutableJSONDictionary;

@end

#endif /* TNUHARObject_h */
