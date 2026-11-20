//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ExternallyBlockedUserContentEradicationOperation_h
#define T1ExternallyBlockedUserContentEradicationOperation_h
@import Foundation;

@class TFNTwitter, TFSConcurrentOperation;

@interface T1ExternallyBlockedUserContentEradicationOperation : TFSConcurrentOperation

@property (retain, nonatomic) TFNTwitter *twitter;

/* instance methods */
- (id)initWithTwitterApp:(id)app;
- (void)run;
- (void)private_updateBlockIDsAndEradicate:(id)eradicate;

@end

#endif /* T1ExternallyBlockedUserContentEradicationOperation_h */
