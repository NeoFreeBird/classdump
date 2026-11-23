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
