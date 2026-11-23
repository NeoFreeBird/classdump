//
#ifndef GACAppCheckProtocol_Protocol_h
#define GACAppCheckProtocol_Protocol_h
@import Foundation;

@protocol GACAppCheckProtocol

@required

/* required instance methods */
- (void)tokenForcingRefresh:(_Bool)refresh completion:(id /* block */)completion;
- (void)limitedUseTokenWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* GACAppCheckProtocol_Protocol_h */
