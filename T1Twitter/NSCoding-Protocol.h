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
