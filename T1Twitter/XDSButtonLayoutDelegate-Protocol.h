//
#ifndef XDSButtonLayoutDelegate_Protocol_h
#define XDSButtonLayoutDelegate_Protocol_h
@import Foundation;

@protocol XDSButtonLayoutDelegate

@required

/* required instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;

@optional

@end

#endif /* XDSButtonLayoutDelegate_Protocol_h */
