//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
