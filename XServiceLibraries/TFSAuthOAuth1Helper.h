//
#ifndef TFSAuthOAuth1Helper_h
#define TFSAuthOAuth1Helper_h
@import Foundation;

@class NSObject;

@interface TFSAuthOAuth1Helper : NSObject

@property double oAuthClockDelta;

/* instance methods */
- (void)signRequest:(id)request parameters:(id)parameters appCredential:(id)credential accountCredential:(id)credential callbackURLString:(id)urlstring completion:(id /* block */)completion;

@end

#endif /* TFSAuthOAuth1Helper_h */
