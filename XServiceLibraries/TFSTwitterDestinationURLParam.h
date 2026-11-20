//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterDestinationURLParam_h
#define TFSTwitterDestinationURLParam_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterDestinationURLParam : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *value;

/* instance methods */
- (id)initWithKey:(id)key value:(id)value;

@end

#endif /* TFSTwitterDestinationURLParam_h */
