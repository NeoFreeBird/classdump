//
#ifndef TFSTwitterAccountCoding_Protocol_h
#define TFSTwitterAccountCoding_Protocol_h
@import Foundation;

@protocol TFSTwitterAccountCoding

@required

/* required instance methods */
- (id)encode:(id)encode;
- (id)decode:(id)decode;

@optional

@end

#endif /* TFSTwitterAccountCoding_Protocol_h */
