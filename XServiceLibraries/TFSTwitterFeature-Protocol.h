//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFeature_Protocol_h
#define TFSTwitterFeature_Protocol_h
@import Foundation;

@class NSString;

@protocol TFSTwitterFeature

@required

@property (nonatomic, readonly) NSString *identifier;

/* required instance methods */
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;

@optional

@end

#endif /* TFSTwitterFeature_Protocol_h */
