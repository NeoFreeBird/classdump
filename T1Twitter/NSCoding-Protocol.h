//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSCoding_Protocol_h
#define NSCoding_Protocol_h
@import Foundation;

@protocol NSCoding

@required

/* required instance methods */
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@optional

@end

#endif /* NSCoding_Protocol_h */
