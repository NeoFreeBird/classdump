//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSVariableLengthBinaryNumberEncoder_h
#define TFSVariableLengthBinaryNumberEncoder_h
@import Foundation;

@class NSObject;

@interface TFSVariableLengthBinaryNumberEncoder : NSObject // (Swift)

/* class methods */
+ (id)deltaCompressionEncodingForValues:(id)values;
+ (id)encodingForLongLong:(long long)_long;

/* instance methods */
- (id)init;

@end

#endif /* TFSVariableLengthBinaryNumberEncoder_h */
