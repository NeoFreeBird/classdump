//
#ifndef TUCImageViewLoadDelegate_Protocol_h
#define TUCImageViewLoadDelegate_Protocol_h
@import Foundation;

@protocol TUCImageViewLoadDelegate

@required

/* required instance methods */
- (void)didLoadImage:(id)image;

@optional

@end

#endif /* TUCImageViewLoadDelegate_Protocol_h */
